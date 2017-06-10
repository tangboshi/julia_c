#include "window.h"
#include "ui_window.h"
#include "utility.h"
#include "fakeglass.h"

const QPoint INVALID_POINT = QPoint(-1,-1);
const QString NO_SCREENSHOT_SCHEDULED = "(no periodic screenshot scheduled)";

QTimer* window::periodicScreenshotTimer = new QTimer;
QTimer* window::nextScreenshotInfoTimer = new QTimer;

window::window(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::window),
    screenshotCountSession(0),
    singletonFakeglass(fakeglass::getFakeglass()),
    rectanglePointA(INVALID_POINT),
    rectanglePointB(INVALID_POINT)
{
    ui->setupUi(this);
    setFixedSize(width(), height());

    //qDebug() << QStyleFactory::keys();
    //qDebug() << QApplication::style()->metaObject()->className();

    setStyleSheet("QLabel{border-radius:5px;}");

    connect(periodicScreenshotTimer, &QTimer::timeout, this, &window::takeScreenshot);

    // ////////////////////////////////////////////////////////
    // prepare screen for screenshot
    QMessageBox* msg = new QMessageBox;
    screen = QGuiApplication::primaryScreen();
    if(const QWindow* myWindow = windowHandle())
        screen = myWindow->screen();
    if(!screen)
    {
        msg->setText("Error: No screen detected.");
        msg->exec();
        return;
    }
    // ////////////////////////////////////////////////////////

    // ////////////////////////////////////////////////////////
    // Set up timer to update next screenshot announcement
    connect(periodicScreenshotTimer, &QTimer::timeout, this, &window::setupNextScreenshotInfo);
    connect(nextScreenshotInfoTimer, &QTimer::timeout, this, &window::updateNextScreenshotIn);
    // ////////////////////////////////////////////////////////

    // ////////////////////////////////////////////////////////
    // For shaped capture connect to fakeglass
    connect(singletonFakeglass, &fakeglass::rectangleSelected, this, &window::setRectangleCoordinates);
    connect(this, &window::captureMode, singletonFakeglass, &fakeglass::showFakeglass);
    // ////////////////////////////////////////////////////////
}

window::~window()
{
    delete ui;
}

void window::resizeEvent(QResizeEvent * event)
{
    Q_UNUSED(event)

    QSize scaledSize = screenshot.size();
    scaledSize.scale(ui->labelScreenshotPreview->size(), Qt::KeepAspectRatio);

    if (!ui->labelScreenshotPreview->pixmap() ||
        (scaledSize.width() < ui->labelScreenshotPreview->pixmap()->size().width() &&
         scaledSize.height() < ui->labelScreenshotPreview->pixmap()->size().height()))
    {
        updatePreview();
    }

    qDebug() << "Scaled size: "+QString::number(scaledSize.width())+"x"
                               +QString::number(scaledSize.width());
    qDebug() << "Pixmap size: "+QString::number(ui->labelScreenshotPreview->pixmap()->size().width())+"x"
                               +QString::number(ui->labelScreenshotPreview->pixmap()->size().height());
}

void window::on_buttonTake_clicked()
{
    // reset screenshot control parameters
    screenshotCount = 0;
    interruptScreenshots = false;

    delay(ui->spinboxPrepareDelay->value());

    // To be implemented
    // Making interrupt possible during hidemode
    if(ui->checkboxPeriodicScreenshot->isChecked())
        periodicScreenshotTimer->start(ui->spinboxPeriod->value());

    if(ui->checkboxHideWindow->isChecked())
        hide();

    // Wait for the window to hide
    if(!ui->checkboxPeriodicScreenshot->isChecked())
    {
        delay(1000);
    }

    takeScreenshot();
}

void window::takeScreenshot()
{
    QMessageBox* msg = new QMessageBox;

    screenshotCount++;
    screenshotCountSession++;

    // ////////////////////////////////////////////////////////
    // Taking the screenshot
    #define ENTIRE_SCREEN   0
    #define ACTIVE_WINDOW   1
    #define WINDOW          2
    #define RECTANGLE       3
    #define POLYGON         4

    #define BIN 0
    #define OCT 1
    #define DEC 2
    #define HEX 3

    unsigned int base;

    switch (ui->dropdownTargetWindowIdBase->currentIndex())
    {
        case BIN: base=2; break;
        case OCT: base=8; break;
        case DEC: base=10; break;
        case HEX: base=16; break;
        default:  break;
    }

    switch(ui->dropdownTargetArea->currentIndex())
    {
        case ENTIRE_SCREEN:
        {
            screenshot = screen->grabWindow(0);
            break;
        }
        case ACTIVE_WINDOW:
        {
            static WId target;

            //if (screenshotCount <= 1)
            {
                #ifdef __linux__
                    int ret = system("xdotool");
                    if(ret != 0x100)
                    {
                        msg->setText("Please install xdotool for active window detection. Retrieve value:"+QString::number(ret));
                        msg->exec();
                        break;
                    }
                    QProcess *process = new QProcess;
                    process->start("xdotool", QStringList() << "getactivewindow");
                    process->waitForFinished();
                    QString output = process->readAllStandardOutput();
                    target = output.toUInt();
                    qDebug() << QString::number(target);
                    screenshot = screen->grabWindow(target);
                #else
                    msg->setText("Feature not supported on non-Linux OS");
                    msg->exec();
                #endif
            }

            break;
        }
        case WINDOW:
        {
            qDebug() << "Target area window selected";

            static WId target;

            if(screenshotCount <= 1)
            {
                target = ui->textTargetWindowId->toPlainText().toUInt(0,16);
                #ifdef __linux__
                    QProcess process;
                    process.start("sh", QStringList()<<"-c"<<"xwininfo");
                    process.waitForFinished();
                    QString output = process.readAllStandardOutput();
                    int pos = output.indexOf("Window id");
                    output = output.mid(pos+13,7);
                    qDebug() << QString::number(pos);
                    qDebug() << output;
                    target = output.toUInt(0,base);
                #endif
            }

            screenshot = screen->grabWindow(target);

            qDebug() << "Target window was "+QString::number(target)+".";
            break;
        }
        case RECTANGLE:
        {
            bool noRectangle =  (rectanglePointA == INVALID_POINT || rectanglePointB == INVALID_POINT);

            if(noRectangle)
            {
                emit captureMode("rectangle");
            }

            if(ui->checkboxHideWindow->isChecked() && !isVisible())
                hide();

            if(noRectangle)
            {
                QEventLoop* loop = new QEventLoop;
                connect(singletonFakeglass, &fakeglass::rectangleSelected, loop, &QEventLoop::quit);
                loop->exec();
            }

            singletonFakeglass->hide();
            delay(100);

            int leftX   = rectanglePointA.x() < rectanglePointB.x() ? rectanglePointA.x() : rectanglePointB.x();
            int topY    = rectanglePointA.y() < rectanglePointB.y() ? rectanglePointA.y() : rectanglePointB.y();

            qDebug() << "Target area set to rectangle";
            screenshot = screen->grabWindow(0,
                                            leftX,
                                            topY,
                                            qFabs(rectanglePointB.x()-rectanglePointA.x()),
                                            qFabs(rectanglePointB.y()-rectanglePointA.y()));

            if(screenshotCount >= ui->spinboxNumberScreenshots->value() ||
               !ui->checkboxPeriodicScreenshot->isChecked())
            {
                rectanglePointA = INVALID_POINT;
                rectanglePointB = INVALID_POINT;
            }

            break;
        }
        case POLYGON:
        {
            ui->dropdownTargetArea->setCurrentIndex(RECTANGLE);
            msg->setText("Target area polygon not supported yet. Setting to rectangle.");
            msg->exec();
            takeScreenshot();
            return;
        }
        default:{break;}
    }

    updatePreview();
    saveFile();

    if(!ui->checkboxMuteSound->isChecked())
        QApplication::beep();

    qDebug() << "Number of Screenshots: " << QString::number(screenshotCount);
    // ////////////////////////////////////////////////////////


    // ////////////////////////////////////////////////////////
    // Stop taking screenshots & hiding if screenshot job done
    if( screenshotCount >= ui->spinboxNumberScreenshots->value() ||
        interruptScreenshots ||
        !ui->checkboxPeriodicScreenshot->isChecked())
    {
        show();
        periodicScreenshotTimer->stop();

        if(ui->checkboxAutomaticallyResetSeriesCount->isChecked())
            screenshotCountSession = 0;

        QMessageBox* msg = new QMessageBox;
        msg->setText(QString("You have taken %1 screenshot(s)!").arg(screenshotCount));
        msg->exec();
    }
    // ////////////////////////////////////////////////////////
}

void window::updatePreview()
{
    ui->labelScreenshotPreview->setPixmap(screenshot.scaled(ui->labelScreenshotPreview->size(),
                                                            Qt::KeepAspectRatio,
                                                            Qt::SmoothTransformation));
}

void window::on_buttonStop_clicked()
{
    periodicScreenshotTimer->stop();
}

void window::saveFile()
{
    const QDateTime currentDate = QDateTime::currentDateTime();

    QString yearFull    =   currentDate.toString("yyyy");
    QString yearShort   =   currentDate.toString("yy");
    QString month       =   currentDate.toString("MM");
    QString day         =   currentDate.toString("dd");
    QString hour        =   currentDate.toString("hh");
    QString minute      =   currentDate.toString("mm");

    QString delimiter   =   ui->textFileNameDelimiter->toPlainText();
    QString trunk       =   QString(ui->textFileNameTrunk->toPlainText());

    #define _H                  1
    #define H_                  1
    #define _dd_mm              2
    #define dd_mm_              2
    #define _dd_mm_H            3
    #define dd_mm_H_            3
    #define _mm_yy              4
    #define mm_yy_              4
    #define _mm_yy_H            5
    #define mm_yy_H_            5
    #define _dd_mm_yy           6
    #define dd_mm_yy_           6
    #define _dd_mm_yy_H         7
    #define dd_mm_yy_H_         7
    #define _dd_mm_yyyy         8
    #define dd_mm_yyyy_         8
    #define _dd_mm_yyyy_H       9
    #define dd_mm_yyyy_H_       9
    #define _dd_mm_yy_hh_mm     10
    #define dd_mm_yy_hh_mm_     10
    #define _dd_mm_yy_hh_mm_H   11
    #define dd_mm_yy_hh_mm_H_   11

    #define PNG                 0
    #define JPEG                1
    #define BMP                 2
    #define TIFF                3

    QString prefix, suffix;
    QString count = QString::number(screenshotCountSession+ui->spinboxFilenumberOffset->value());
    QString format = ".png";

    switch (ui->dropdownPrefix->currentIndex())
    {
        case H_:
            prefix = count;break;
        case dd_mm_:
            prefix = day+delimiter+month;break;
        case dd_mm_H_:
            prefix = day+delimiter+month+delimiter+count;break;
        case mm_yy_:
            prefix = month+delimiter+yearShort;break;
        case mm_yy_H_:
            prefix = month+delimiter+yearShort+delimiter+count;break;
        case dd_mm_yy_:
            prefix = day+delimiter+month+delimiter+yearShort;break;
        case dd_mm_yy_H_:
            prefix = day+delimiter+month+delimiter+yearShort+delimiter+count;break;
        case dd_mm_yyyy_:
            prefix = day+delimiter+month+delimiter+yearFull;break;
        case dd_mm_yyyy_H_:
            prefix = day+delimiter+month+delimiter+yearFull+delimiter+count;break;
        case dd_mm_yy_hh_mm_:
            prefix = day+delimiter+month+delimiter+yearShort+delimiter+hour+delimiter+minute;break;
        case dd_mm_yy_hh_mm_H_:
            prefix = day+delimiter+month+delimiter+yearShort+delimiter+hour+delimiter+minute+delimiter+count;break;
        default: prefix = "";break;
    }

    if (!trunk.isEmpty() && !prefix.isEmpty())
    {
        prefix.append(delimiter);
    }

    switch (ui->dropdownSuffix->currentIndex())
    {
        case _H:
            suffix = delimiter+count;break;
        case _dd_mm:
            suffix = delimiter+day+delimiter+month;break;
        case _dd_mm_H:
            suffix = delimiter+day+delimiter+month+delimiter+count;break;
        case _mm_yy:
            suffix = delimiter+month+delimiter+yearShort;break;
        case _mm_yy_H:
            suffix = delimiter+month+delimiter+yearShort+delimiter+count;break;
        case _dd_mm_yy:
            suffix = delimiter+day+delimiter+month+delimiter+yearShort;break;
        case _dd_mm_yy_H:
            suffix = delimiter+day+delimiter+month+delimiter+yearShort+delimiter+count;break;
        case _dd_mm_yyyy:
            suffix = delimiter+day+delimiter+month+delimiter+yearFull;break;
        case _dd_mm_yyyy_H:
            suffix = delimiter+day+delimiter+month+delimiter+yearFull+delimiter+count;break;
        case _dd_mm_yy_hh_mm:
            suffix = delimiter+day+delimiter+month+delimiter+yearShort+delimiter+hour+delimiter+minute;break;
        case _dd_mm_yy_hh_mm_H:
            suffix = delimiter+day+delimiter+month+delimiter+yearShort+delimiter+hour+delimiter+minute+delimiter+count;break;
        default: suffix = "";break;
    }

    switch (ui->dropdownFileFormat->currentIndex())
    {
        case PNG:   format = "png";break;
        case JPEG:  format = "jpg";break;
        case BMP:   format = "bmp";break;
        case TIFF:  format = "tiff";break;
        default:    format = "png";break;
    }

    // Make sure a series of screenshots can be realized event without changing the parameters
    // ... and asking too many questions :)
    if(ui->dropdownPrefix->currentIndex() == 0 &&
       ui->dropdownSuffix->currentIndex() == 0 &&
       ui->checkboxPeriodicScreenshot->isChecked())
            suffix = delimiter+count;

    fileSavename        =   prefix+trunk+suffix;
    fileFormat          =   format;

    qDebug() << fileSavename+"."+format;

    if(fileSavepath.isEmpty())
    {
        fileSavepath = QStandardPaths::writableLocation(QStandardPaths::PicturesLocation);

        if (fileSavepath.isEmpty())
            setSavepath();
    }

    QString path = fileSavepath+"/"+fileSavename+"."+fileFormat;

    // ////////////////////////////////////////////////////////
    // Check override mode and if prevent override if desired
    QFileInfo checkFile(path);
    if(checkFile.exists()&&checkFile.isFile())
    {
        qDebug() << "File exists, now look @ Override Policy";

        #define ASK          0
        #define PRESERVE     1
        #define OVERRIDE     2
        #define RENAME       3

        QMessageBox* msg = new QMessageBox;
        QMessageBox* msg2 = new QMessageBox;

        switch (ui->dropdownOverridePolicy->currentIndex())
        {
            case ASK:
            {
                qDebug() << "Override policy ask";
                msg->setText("The file "+path+" exists. Overwrite?");
                msg->setStandardButtons(QMessageBox::YesToAll|QMessageBox::Yes|QMessageBox::NoToAll|QMessageBox::No);
                int ret = msg->exec();
                switch (ret)
                {
                    case QMessageBox::NoToAll:
                    {
                        msg2->setText("Action canceled.");
                        msg2->exec();
                        periodicScreenshotTimer->stop();
                        if(ui->checkboxAutomaticallyResetSeriesCount->isChecked())
                            screenshotCountSession = 0;
                        if(!isVisible())
                            show();
                        return;
                    }
                    case QMessageBox::No:
                    {
                        if(!isVisible())
                            show();
                        return;
                    }
                    case QMessageBox::Yes:
                    {
                        qDebug() << "File "+path+" has been overwritten.";
                        break;
                    }
                    case QMessageBox::YesToAll:
                    {
                        ui->dropdownOverridePolicy->setCurrentIndex(OVERRIDE);
                        msg2->setText("Caution: Override policy has been set to override.");
                        msg2->exec();
                        break;
                    }
                    default:
                        break;
                }
                /*
                {
                    QEventLoop* loop = new QEventLoop;
                    connect(msg, &QMessageBox::finished, loop, &QEventLoop::quit);
                    loop->exec();
                }
                */
                break;
            }
            case PRESERVE:
            {
                qDebug() << "The original file is preserved.";
                msg->setText("The file "+path+" exists. Action canceled.");
                msg->exec();
                periodicScreenshotTimer->stop();
                if(ui->checkboxAutomaticallyResetSeriesCount->isChecked())
                    screenshotCountSession = 0;
                if(!isVisible())
                    show();
                return;
            }
            case OVERRIDE:
            {
                qDebug() << "File has been overwritten. "+path;
                break;
            }
            case RENAME:
            {
                qDebug() << "Override policy is rename.";
                int counter = 2;
                QString newPath = fileSavepath+"/"+fileSavename+"("+QString::number(counter)+")."+fileFormat;
                checkFile.setFile(newPath);

                while(checkFile.exists() && checkFile.isFile())
                {
                  counter++;
                  qDebug() << newPath+" exists already!";
                  newPath = fileSavepath+"/"+fileSavename+"("+QString::number(counter)+")."+fileFormat;
                  checkFile.setFile(newPath);
                }

                path = newPath;
                break;
            }
            default:
            {
                msg->setText("Error: Invalid override policy, halting all action!");
                msg->exec();
                periodicScreenshotTimer->stop();
                if(ui->checkboxAutomaticallyResetSeriesCount->isChecked())
                    screenshotCountSession = 0;
                if(!isVisible())
                    show();
                return;
            }
        }

    }
    // ////////////////////////////////////////////////////////

    QFile file(path);
    file.open(QIODevice::WriteOnly);

    if(!screenshot.save(&file, fileFormat.toLatin1()))
    {
        qDebug() << "Saving file failed";
        qDebug() << "File save path would have been"+fileSavepath+"/"+fileSavename+"."+fileFormat;
    }

    qDebug() << "File saved";
}

void window::setSavepath()
{
    QString initialPath = QStandardPaths::writableLocation(QStandardPaths::PicturesLocation);
    if (initialPath.isEmpty())
        initialPath = QDir::currentPath();
    initialPath += fileSavename + fileFormat;

    //QFileDialog fileDialog(this, tr("Select Folder"), initialPath);
    //fileDialog.setDirectory(initialPath);

    fileSavepath = QFileDialog::getExistingDirectory(this,
                                                     tr("Select Directory"),
                                                     initialPath,
                                                     QFileDialog::ShowDirsOnly|QFileDialog::DontResolveSymlinks);

    qDebug() << "fileSavePath: " << fileSavepath;
}

void window::on_actionAbout_triggered()
{
    QMessageBox* msg = new QMessageBox;
    msg->setText("A simple screenshot tool created by Alexander Pastor");
    msg->setWindowTitle("About");
    msg->exec();
}

void window::on_buttonSavePath_clicked()
{
    setSavepath();
}

void window::updateNextScreenshotIn()
{
    if(periodicScreenshotTimer->remainingTime() > 0)
        ui->labelNextScreenshotInTime->setText(QString::number(periodicScreenshotTimer->remainingTime())+" ms");
    else
        ui->labelNextScreenshotInTime->setText(NO_SCREENSHOT_SCHEDULED);
    if(!periodicScreenshotTimer->isActive())
        nextScreenshotInfoTimer->stop();
}

void window::setupNextScreenshotInfo()
{
    nextScreenshotInfoTimer->start(5);
}

void window::setRectangleCoordinates(QPoint start, QPoint end)
{
    rectanglePointA = start;
    rectanglePointB = end;
}

void window::on_sliderOpacity_valueChanged(int value)
{
    this->setProperty("windowOpacity", (float) value/100);
}

void window::on_buttonResetSeriesCount_clicked()
{
    screenshotCountSession = 0;
}

void window::on_actionTake_triggered()
{
    on_buttonTake_clicked();
}

void window::on_actionSave_triggered()
{
    if(!screenshot.isNull())
    {
        screenshotCount++;
        saveFile();
        screenshotCount = 0;
    }
    else
    {
        QMessageBox msg;
        msg.setText("The current Pixmap is empty. Please take a screenshot");
        msg.exec();
    }
}

void window::on_buttonClearScreenshotPreview_clicked()
{
    screenshot = *(new QPixmap);
    updatePreview();
}
