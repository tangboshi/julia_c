#include "window.h"
#include "ui_window.h"
#include "utility.h"

QTimer* window::periodicScreenshotTimer = new QTimer;
QTimer* window::nextScreenshotInfoTimer = new QTimer;

window::window(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::window),
    screenshotCountSession(0)
{
    ui->setupUi(this);
    setFixedSize(width(), height());

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

    if (!ui->labelScreenshotPreview->pixmap() || scaledSize != ui->labelScreenshotPreview->pixmap()->size())
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
    delay(1000);

    takeScreenshot();
}

void window::takeScreenshot()
{
    // ////////////////////////////////////////////////////////
    // Taking the screenshot
    screenshot = screen->grabWindow(0);
    updatePreview();

    screenshotCount++;
    screenshotCountSession++;
    saveFile();

    QApplication::beep();
    qDebug() << "Number of Screenshots: " << QString::number(screenshotCount);
    // ////////////////////////////////////////////////////////


    // ////////////////////////////////////////////////////////
    // Stop taking screenshots & hiding if screenshot job done
    if( screenshotCount > ui->spinboxNumberScreenshots->value() ||
        interruptScreenshots ||
        !ui->checkboxPeriodicScreenshot->isChecked())
    {
        show();
        periodicScreenshotTimer->stop();

        QMessageBox* msg = new QMessageBox;
        msg->setText(QString("You have taken %1 screenshot(s)!").arg(screenshotCount));
        msg->exec();
    }
    // ////////////////////////////////////////////////////////
}

void window::updatePreview()
{
    ui->labelScreenshotPreview->setPixmap(screenshot.scaled(screenshot.size(),
                                                            Qt::IgnoreAspectRatio,
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

    fileSavename        =   prefix+trunk+suffix;
    fileFormat          =   format;

    qDebug() << fileSavename+"."+format;

    if(fileSavepath.isEmpty())
    {
        fileSavepath = QStandardPaths::writableLocation(QStandardPaths::PicturesLocation);

        if (fileSavepath.isEmpty())
            setSavepath();
    }
    else
    {
        QFile file(fileSavepath+"/"+fileSavename+"."+fileFormat);
        file.open(QIODevice::WriteOnly);

        if(!screenshot.save(&file, fileFormat.toLatin1()))
        {
            qDebug() << "Saving file failed";
            qDebug() << "File save path would have been"+fileSavepath+"/"+fileSavename+"."+fileFormat;
        }

        qDebug() << "File saved";
    }

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
    ui->labelNextScreenshotInTime->setText(QString::number(periodicScreenshotTimer->remainingTime()));
    if(!periodicScreenshotTimer->isActive())
        nextScreenshotInfoTimer->stop();

    // qDebug() << "Checkpoint reached";
}

void window::setupNextScreenshotInfo()
{
    nextScreenshotInfoTimer->start(5);
}
