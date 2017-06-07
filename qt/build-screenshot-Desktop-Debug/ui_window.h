/********************************************************************************
** Form generated from reading UI file 'window.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_H
#define UI_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_window
{
public:
    QAction *actionAbout;
    QWidget *centralWidget;
    QTabWidget *screenshotOptions;
    QWidget *controls;
    QPushButton *buttonTake;
    QPushButton *buttonStop;
    QLabel *labelNextScreenshotIn;
    QLabel *labelNextScreenshotInTime;
    QWidget *options;
    QLabel *labelPeriod;
    QCheckBox *checkboxPeriodicScreenshot;
    QSpinBox *spinboxPeriod;
    QLabel *labelPrepare;
    QSpinBox *spinboxPrepareDelay;
    QCheckBox *checkboxHideWindow;
    QLabel *labelNumberScreenshots;
    QSpinBox *spinboxNumberScreenshots;
    QWidget *tab;
    QLabel *labelSavePath;
    QPushButton *buttonSavePath;
    QLabel *labelFileNamePrefix;
    QLabel *labelFileNameSuffix;
    QLabel *labelFileNameTrunk;
    QComboBox *dropdownPrefix;
    QTextEdit *textFileNameTrunk;
    QComboBox *dropdownSuffix;
    QLabel *labelFileNameDelimiter;
    QTextEdit *textFileNameDelimiter;
    QLabel *labelFileFormat;
    QComboBox *dropdownFileFormat;
    QLabel *labelFilenumberOffset;
    QSpinBox *spinboxFilenumberOffset;
    QLabel *labelScreenshotPreview;
    QLabel *label;
    QMenuBar *menuBar;
    QMenu *menuAbout;

    void setupUi(QMainWindow *window)
    {
        if (window->objectName().isEmpty())
            window->setObjectName(QStringLiteral("window"));
        window->resize(1059, 638);
        actionAbout = new QAction(window);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        centralWidget = new QWidget(window);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        screenshotOptions = new QTabWidget(centralWidget);
        screenshotOptions->setObjectName(QStringLiteral("screenshotOptions"));
        screenshotOptions->setGeometry(QRect(10, 10, 321, 471));
        controls = new QWidget();
        controls->setObjectName(QStringLiteral("controls"));
        buttonTake = new QPushButton(controls);
        buttonTake->setObjectName(QStringLiteral("buttonTake"));
        buttonTake->setGeometry(QRect(10, 120, 301, 61));
        buttonStop = new QPushButton(controls);
        buttonStop->setObjectName(QStringLiteral("buttonStop"));
        buttonStop->setGeometry(QRect(10, 190, 301, 61));
        labelNextScreenshotIn = new QLabel(controls);
        labelNextScreenshotIn->setObjectName(QStringLiteral("labelNextScreenshotIn"));
        labelNextScreenshotIn->setGeometry(QRect(10, 40, 301, 41));
        labelNextScreenshotIn->setStyleSheet(QLatin1String("background:#000;\n"
"color:#ccc;\n"
"font-size:16px;\n"
"padding:10px;\n"
"qproperty-alignment:AlignCenter;\n"
"border-top-left-radius:5px;\n"
"border-top-right-radius:5px;"));
        labelNextScreenshotInTime = new QLabel(controls);
        labelNextScreenshotInTime->setObjectName(QStringLiteral("labelNextScreenshotInTime"));
        labelNextScreenshotInTime->setGeometry(QRect(10, 80, 301, 31));
        labelNextScreenshotInTime->setStyleSheet(QLatin1String("background:#000;\n"
"color:#ccc;\n"
"font-size:16px;\n"
"qproperty-alignment: AlignCenter;\n"
"padding-top:5px;\n"
"border-bottom-left-radius:5px;\n"
"border-bottom-right-radius:5px;\n"
""));
        screenshotOptions->addTab(controls, QString());
        options = new QWidget();
        options->setObjectName(QStringLiteral("options"));
        labelPeriod = new QLabel(options);
        labelPeriod->setObjectName(QStringLiteral("labelPeriod"));
        labelPeriod->setGeometry(QRect(10, 130, 301, 51));
        labelPeriod->setStyleSheet(QLatin1String("padding-left: 10px;\n"
"background: #ccc;"));
        checkboxPeriodicScreenshot = new QCheckBox(options);
        checkboxPeriodicScreenshot->setObjectName(QStringLiteral("checkboxPeriodicScreenshot"));
        checkboxPeriodicScreenshot->setGeometry(QRect(10, 70, 301, 51));
        checkboxPeriodicScreenshot->setStyleSheet(QLatin1String("padding: 10px;\n"
"background: #ccc;"));
        spinboxPeriod = new QSpinBox(options);
        spinboxPeriod->setObjectName(QStringLiteral("spinboxPeriod"));
        spinboxPeriod->setGeometry(QRect(190, 140, 111, 31));
        spinboxPeriod->setMinimum(500);
        spinboxPeriod->setMaximum(3600000);
        spinboxPeriod->setSingleStep(500);
        labelPrepare = new QLabel(options);
        labelPrepare->setObjectName(QStringLiteral("labelPrepare"));
        labelPrepare->setGeometry(QRect(10, 10, 301, 51));
        labelPrepare->setStyleSheet(QLatin1String("padding-left: 10px;\n"
"background: #ccc;"));
        spinboxPrepareDelay = new QSpinBox(options);
        spinboxPrepareDelay->setObjectName(QStringLiteral("spinboxPrepareDelay"));
        spinboxPrepareDelay->setGeometry(QRect(190, 20, 111, 31));
        spinboxPrepareDelay->setMinimum(0);
        spinboxPrepareDelay->setMaximum(3600000);
        spinboxPrepareDelay->setSingleStep(500);
        spinboxPrepareDelay->setValue(0);
        checkboxHideWindow = new QCheckBox(options);
        checkboxHideWindow->setObjectName(QStringLiteral("checkboxHideWindow"));
        checkboxHideWindow->setGeometry(QRect(10, 250, 301, 51));
        checkboxHideWindow->setStyleSheet(QLatin1String("padding: 10px;\n"
"background: #ccc;"));
        checkboxHideWindow->setChecked(true);
        labelNumberScreenshots = new QLabel(options);
        labelNumberScreenshots->setObjectName(QStringLiteral("labelNumberScreenshots"));
        labelNumberScreenshots->setGeometry(QRect(10, 190, 301, 51));
        labelNumberScreenshots->setStyleSheet(QLatin1String("padding-left: 10px;\n"
"background: #ccc;"));
        spinboxNumberScreenshots = new QSpinBox(options);
        spinboxNumberScreenshots->setObjectName(QStringLiteral("spinboxNumberScreenshots"));
        spinboxNumberScreenshots->setGeometry(QRect(190, 200, 111, 31));
        spinboxNumberScreenshots->setMinimum(2);
        spinboxNumberScreenshots->setMaximum(100000);
        spinboxNumberScreenshots->setSingleStep(1);
        spinboxNumberScreenshots->setValue(50);
        screenshotOptions->addTab(options, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        labelSavePath = new QLabel(tab);
        labelSavePath->setObjectName(QStringLiteral("labelSavePath"));
        labelSavePath->setGeometry(QRect(10, 10, 301, 51));
        labelSavePath->setStyleSheet(QLatin1String("padding-left: 10px;\n"
"background: #ccc;"));
        buttonSavePath = new QPushButton(tab);
        buttonSavePath->setObjectName(QStringLiteral("buttonSavePath"));
        buttonSavePath->setGeometry(QRect(190, 20, 111, 28));
        labelFileNamePrefix = new QLabel(tab);
        labelFileNamePrefix->setObjectName(QStringLiteral("labelFileNamePrefix"));
        labelFileNamePrefix->setGeometry(QRect(10, 70, 301, 51));
        labelFileNamePrefix->setStyleSheet(QLatin1String("padding-left: 10px;\n"
"background: #ccc;"));
        labelFileNameSuffix = new QLabel(tab);
        labelFileNameSuffix->setObjectName(QStringLiteral("labelFileNameSuffix"));
        labelFileNameSuffix->setGeometry(QRect(10, 250, 301, 51));
        labelFileNameSuffix->setStyleSheet(QLatin1String("padding-left: 10px;\n"
"background: #ccc;"));
        labelFileNameTrunk = new QLabel(tab);
        labelFileNameTrunk->setObjectName(QStringLiteral("labelFileNameTrunk"));
        labelFileNameTrunk->setGeometry(QRect(10, 130, 301, 51));
        labelFileNameTrunk->setStyleSheet(QLatin1String("padding-left: 10px;\n"
"background: #ccc;"));
        dropdownPrefix = new QComboBox(tab);
        dropdownPrefix->setObjectName(QStringLiteral("dropdownPrefix"));
        dropdownPrefix->setGeometry(QRect(190, 80, 111, 28));
        textFileNameTrunk = new QTextEdit(tab);
        textFileNameTrunk->setObjectName(QStringLiteral("textFileNameTrunk"));
        textFileNameTrunk->setGeometry(QRect(190, 140, 111, 31));
        dropdownSuffix = new QComboBox(tab);
        dropdownSuffix->setObjectName(QStringLiteral("dropdownSuffix"));
        dropdownSuffix->setGeometry(QRect(190, 260, 111, 28));
        labelFileNameDelimiter = new QLabel(tab);
        labelFileNameDelimiter->setObjectName(QStringLiteral("labelFileNameDelimiter"));
        labelFileNameDelimiter->setGeometry(QRect(10, 190, 301, 51));
        labelFileNameDelimiter->setStyleSheet(QLatin1String("padding-left: 10px;\n"
"background: #ccc;"));
        textFileNameDelimiter = new QTextEdit(tab);
        textFileNameDelimiter->setObjectName(QStringLiteral("textFileNameDelimiter"));
        textFileNameDelimiter->setGeometry(QRect(190, 200, 111, 31));
        labelFileFormat = new QLabel(tab);
        labelFileFormat->setObjectName(QStringLiteral("labelFileFormat"));
        labelFileFormat->setGeometry(QRect(10, 310, 301, 51));
        labelFileFormat->setStyleSheet(QLatin1String("padding-left: 10px;\n"
"background: #ccc;"));
        dropdownFileFormat = new QComboBox(tab);
        dropdownFileFormat->setObjectName(QStringLiteral("dropdownFileFormat"));
        dropdownFileFormat->setGeometry(QRect(190, 320, 111, 28));
        labelFilenumberOffset = new QLabel(tab);
        labelFilenumberOffset->setObjectName(QStringLiteral("labelFilenumberOffset"));
        labelFilenumberOffset->setGeometry(QRect(10, 370, 301, 51));
        labelFilenumberOffset->setStyleSheet(QLatin1String("padding-left: 10px;\n"
"background: #ccc;"));
        spinboxFilenumberOffset = new QSpinBox(tab);
        spinboxFilenumberOffset->setObjectName(QStringLiteral("spinboxFilenumberOffset"));
        spinboxFilenumberOffset->setGeometry(QRect(190, 380, 111, 31));
        spinboxFilenumberOffset->setMinimum(0);
        spinboxFilenumberOffset->setMaximum(3600000);
        spinboxFilenumberOffset->setSingleStep(1);
        spinboxFilenumberOffset->setValue(0);
        screenshotOptions->addTab(tab, QString());
        labelScreenshotPreview = new QLabel(centralWidget);
        labelScreenshotPreview->setObjectName(QStringLiteral("labelScreenshotPreview"));
        labelScreenshotPreview->setGeometry(QRect(340, 40, 711, 561));
        labelScreenshotPreview->setStyleSheet(QLatin1String("background: #000;\n"
"color: #ccc;\n"
"qproperty-alignment: AlignCenter;\n"
"border: 3px solid #000;\n"
"border-bottom-left-radius:5px;\n"
"border-bottom-right-radius:5px;\n"
""));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(340, 10, 711, 31));
        label->setStyleSheet(QLatin1String("qproperty-alignment: AlignCenter;\n"
"background: #000;\n"
"color: #ccc;\n"
"font-size:16px;\n"
"border-top-left-radius:5px;\n"
"border-top-right-radius:5px;\n"
"padding: 5px;"));
        window->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(window);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1059, 25));
        menuAbout = new QMenu(menuBar);
        menuAbout->setObjectName(QStringLiteral("menuAbout"));
        window->setMenuBar(menuBar);

        menuBar->addAction(menuAbout->menuAction());
        menuAbout->addAction(actionAbout);

        retranslateUi(window);

        screenshotOptions->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(window);
    } // setupUi

    void retranslateUi(QMainWindow *window)
    {
        window->setWindowTitle(QApplication::translate("window", "Simple Screenshot Tool", Q_NULLPTR));
        actionAbout->setText(QApplication::translate("window", "&About", Q_NULLPTR));
        buttonTake->setText(QApplication::translate("window", "Take Screenshot", Q_NULLPTR));
        buttonStop->setText(QApplication::translate("window", "Stop Periodic Screenshot", Q_NULLPTR));
        buttonStop->setShortcut(QApplication::translate("window", "Ctrl+C", Q_NULLPTR));
        labelNextScreenshotIn->setText(QApplication::translate("window", "Next Screenshot in", Q_NULLPTR));
        labelNextScreenshotInTime->setText(QApplication::translate("window", "0000", Q_NULLPTR));
        screenshotOptions->setTabText(screenshotOptions->indexOf(controls), QApplication::translate("window", "Controls", Q_NULLPTR));
        labelPeriod->setText(QApplication::translate("window", "Period (ms)", Q_NULLPTR));
        checkboxPeriodicScreenshot->setText(QApplication::translate("window", "Periodic Screenshot", Q_NULLPTR));
        labelPrepare->setText(QApplication::translate("window", "Prepare (ms)", Q_NULLPTR));
        checkboxHideWindow->setText(QApplication::translate("window", "Hide This Window From Screenshot", Q_NULLPTR));
        labelNumberScreenshots->setText(QApplication::translate("window", "Number of Screenshots", Q_NULLPTR));
        screenshotOptions->setTabText(screenshotOptions->indexOf(options), QApplication::translate("window", "Shoot Options", Q_NULLPTR));
        labelSavePath->setText(QApplication::translate("window", "Set Save Path", Q_NULLPTR));
        buttonSavePath->setText(QApplication::translate("window", "...", Q_NULLPTR));
        labelFileNamePrefix->setText(QApplication::translate("window", "File Name Prefix", Q_NULLPTR));
        labelFileNameSuffix->setText(QApplication::translate("window", "File Name Suffix", Q_NULLPTR));
        labelFileNameTrunk->setText(QApplication::translate("window", "File Name Trunk", Q_NULLPTR));
        dropdownPrefix->clear();
        dropdownPrefix->insertItems(0, QStringList()
         << QApplication::translate("window", "No Prefix", Q_NULLPTR)
         << QApplication::translate("window", "#_", Q_NULLPTR)
         << QApplication::translate("window", "dd_mm_", Q_NULLPTR)
         << QApplication::translate("window", "dd_mm_#_", Q_NULLPTR)
         << QApplication::translate("window", "mm_yy_", Q_NULLPTR)
         << QApplication::translate("window", "mm_yy_#_", Q_NULLPTR)
         << QApplication::translate("window", "dd_mm_yy_", Q_NULLPTR)
         << QApplication::translate("window", "dd_mm_yy_#_", Q_NULLPTR)
         << QApplication::translate("window", "dd_mm_yyyy_", Q_NULLPTR)
         << QApplication::translate("window", "dd_mm_yyyy_#_", Q_NULLPTR)
         << QApplication::translate("window", "dd_mm_hh_mm_", Q_NULLPTR)
         << QApplication::translate("window", "dd_mm_hh_mm_#", Q_NULLPTR)
         << QApplication::translate("window", "dd_mm_yy_hh_mm_", Q_NULLPTR)
         << QApplication::translate("window", "dd_mm_yy_hh_mm_#_", Q_NULLPTR)
        );
        textFileNameTrunk->setHtml(QApplication::translate("window", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">untitled</p></body></html>", Q_NULLPTR));
        dropdownSuffix->clear();
        dropdownSuffix->insertItems(0, QStringList()
         << QApplication::translate("window", "No Suffix", Q_NULLPTR)
         << QApplication::translate("window", "_#", Q_NULLPTR)
         << QApplication::translate("window", "_dd_mm", Q_NULLPTR)
         << QApplication::translate("window", "_dd_mm_#", Q_NULLPTR)
         << QApplication::translate("window", "_mm_yy", Q_NULLPTR)
         << QApplication::translate("window", "_mm_yy_#", Q_NULLPTR)
         << QApplication::translate("window", "_dd_mm_yy", Q_NULLPTR)
         << QApplication::translate("window", "_dd_mm_yy_#", Q_NULLPTR)
         << QApplication::translate("window", "_dd_mm_yyyy", Q_NULLPTR)
         << QApplication::translate("window", "_dd_mm_yyyy_#", Q_NULLPTR)
         << QApplication::translate("window", "_dd_mm_hh_mm", Q_NULLPTR)
         << QApplication::translate("window", "_dd_mm_hh_mm_#", Q_NULLPTR)
         << QApplication::translate("window", "_dd_mm_yy_hh_mm", Q_NULLPTR)
         << QApplication::translate("window", "_dd_mm_yy_hh_mm_#", Q_NULLPTR)
        );
        labelFileNameDelimiter->setText(QApplication::translate("window", "File Name Delimiter", Q_NULLPTR));
        textFileNameDelimiter->setHtml(QApplication::translate("window", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">_</p></body></html>", Q_NULLPTR));
        textFileNameDelimiter->setPlaceholderText(QString());
        labelFileFormat->setText(QApplication::translate("window", "File Format", Q_NULLPTR));
        dropdownFileFormat->clear();
        dropdownFileFormat->insertItems(0, QStringList()
         << QApplication::translate("window", "png", Q_NULLPTR)
         << QApplication::translate("window", "jpg", Q_NULLPTR)
         << QApplication::translate("window", "bmp", Q_NULLPTR)
         << QApplication::translate("window", "tiff", Q_NULLPTR)
        );
        labelFilenumberOffset->setText(QApplication::translate("window", "# Offset", Q_NULLPTR));
        screenshotOptions->setTabText(screenshotOptions->indexOf(tab), QApplication::translate("window", "Save Options", Q_NULLPTR));
        labelScreenshotPreview->setText(QString());
        label->setText(QApplication::translate("window", "Screenshot Preview", Q_NULLPTR));
        menuAbout->setTitle(QApplication::translate("window", "?", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class window: public Ui_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_H
