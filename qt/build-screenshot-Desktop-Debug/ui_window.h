/********************************************************************************
** Form generated from reading UI file 'window.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_window
{
public:
    QAction *actionAbout;
    QAction *actionSave;
    QAction *actionTake;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_2;
    QTabWidget *screenshotOptions;
    QWidget *tabControls;
    QPushButton *buttonTake;
    QPushButton *buttonStop;
    QLabel *labelNextScreenshotIn;
    QLabel *labelNextScreenshotInTime;
    QSlider *sliderOpacity;
    QLabel *labelTransparency;
    QPushButton *buttonResetSeriesCount;
    QCheckBox *checkboxAutomaticallyResetSeriesCount;
    QCheckBox *checkboxMuteSound;
    QWidget *tabShootOptions;
    QLabel *labelPeriod;
    QCheckBox *checkboxPeriodicScreenshot;
    QSpinBox *spinboxPeriod;
    QLabel *labelPrepare;
    QSpinBox *spinboxPrepareDelay;
    QCheckBox *checkboxHideWindow;
    QLabel *labelNumberScreenshots;
    QSpinBox *spinboxNumberScreenshots;
    QComboBox *dropdownTargetArea;
    QLabel *labelTargetArea;
    QTextEdit *textTargetWindowId;
    QLabel *labelTargetWindowId;
    QLabel *labelTargetWindowIdBase;
    QComboBox *dropdownTargetWindowIdBase;
    QWidget *tabSaveOptions;
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
    QComboBox *dropdownOverridePolicy;
    QLabel *labelOverridePolicy;
    QVBoxLayout *layoutScreenshotPreview;
    QLabel *label;
    QLabel *labelScreenshotPreview;
    QMenuBar *menuBar;
    QMenu *menuAbout;
    QMenu *menuFile;
    QMenu *menuScreenshot;

    void setupUi(QMainWindow *window)
    {
        if (window->objectName().isEmpty())
            window->setObjectName(QStringLiteral("window"));
        window->resize(1138, 578);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(window->sizePolicy().hasHeightForWidth());
        window->setSizePolicy(sizePolicy);
        actionAbout = new QAction(window);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionSave = new QAction(window);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        actionTake = new QAction(window);
        actionTake->setObjectName(QStringLiteral("actionTake"));
        centralWidget = new QWidget(window);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setStyleSheet(QStringLiteral("background:#bbb;"));
        horizontalLayout_2 = new QHBoxLayout(centralWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        screenshotOptions = new QTabWidget(centralWidget);
        screenshotOptions->setObjectName(QStringLiteral("screenshotOptions"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(screenshotOptions->sizePolicy().hasHeightForWidth());
        screenshotOptions->setSizePolicy(sizePolicy1);
        screenshotOptions->setMinimumSize(QSize(325, 0));
        screenshotOptions->setStyleSheet(QLatin1String("color:#000;\n"
"background:#bbb;"));
        tabControls = new QWidget();
        tabControls->setObjectName(QStringLiteral("tabControls"));
        tabControls->setStyleSheet(QStringLiteral("color:#222;"));
        buttonTake = new QPushButton(tabControls);
        buttonTake->setObjectName(QStringLiteral("buttonTake"));
        buttonTake->setGeometry(QRect(10, 110, 301, 51));
        buttonTake->setStyleSheet(QLatin1String("background:#ccc;\n"
"padding:10px;"));
        buttonStop = new QPushButton(tabControls);
        buttonStop->setObjectName(QStringLiteral("buttonStop"));
        buttonStop->setGeometry(QRect(10, 170, 301, 51));
        buttonStop->setStyleSheet(QLatin1String("background:#ccc;\n"
"padding:10px;"));
        labelNextScreenshotIn = new QLabel(tabControls);
        labelNextScreenshotIn->setObjectName(QStringLiteral("labelNextScreenshotIn"));
        labelNextScreenshotIn->setGeometry(QRect(10, 10, 301, 41));
        labelNextScreenshotIn->setStyleSheet(QLatin1String("background:#000;\n"
"color:#ccc;\n"
"font-size:24px;\n"
"padding:10px;\n"
"qproperty-alignment:AlignCenter;\n"
"border-top-left-radius:5px;\n"
"border-top-right-radius:5px;"));
        labelNextScreenshotInTime = new QLabel(tabControls);
        labelNextScreenshotInTime->setObjectName(QStringLiteral("labelNextScreenshotInTime"));
        labelNextScreenshotInTime->setGeometry(QRect(10, 50, 301, 41));
        labelNextScreenshotInTime->setStyleSheet(QLatin1String("background:#000;\n"
"color:#ccc;\n"
"font-size:16px;\n"
"qproperty-alignment: AlignCenter;\n"
"border-bottom-left-radius:5px;\n"
"border-bottom-right-radius:5px;\n"
""));
        sliderOpacity = new QSlider(tabControls);
        sliderOpacity->setObjectName(QStringLiteral("sliderOpacity"));
        sliderOpacity->setGeometry(QRect(30, 440, 261, 21));
        sliderOpacity->setStyleSheet(QStringLiteral("background:#ccc;"));
        sliderOpacity->setMinimum(25);
        sliderOpacity->setMaximum(100);
        sliderOpacity->setSingleStep(5);
        sliderOpacity->setValue(100);
        sliderOpacity->setOrientation(Qt::Horizontal);
        sliderOpacity->setInvertedAppearance(true);
        sliderOpacity->setInvertedControls(false);
        sliderOpacity->setTickPosition(QSlider::TicksAbove);
        labelTransparency = new QLabel(tabControls);
        labelTransparency->setObjectName(QStringLiteral("labelTransparency"));
        labelTransparency->setGeometry(QRect(10, 390, 301, 91));
        labelTransparency->setStyleSheet(QLatin1String("padding-left: 10px;\n"
"background: #ccc;\n"
"padding-bottom:30px;"));
        buttonResetSeriesCount = new QPushButton(tabControls);
        buttonResetSeriesCount->setObjectName(QStringLiteral("buttonResetSeriesCount"));
        buttonResetSeriesCount->setGeometry(QRect(10, 250, 301, 51));
        buttonResetSeriesCount->setStyleSheet(QLatin1String("background:#ccc;\n"
"padding:10px;"));
        checkboxAutomaticallyResetSeriesCount = new QCheckBox(tabControls);
        checkboxAutomaticallyResetSeriesCount->setObjectName(QStringLiteral("checkboxAutomaticallyResetSeriesCount"));
        checkboxAutomaticallyResetSeriesCount->setGeometry(QRect(10, 310, 301, 51));
        checkboxAutomaticallyResetSeriesCount->setStyleSheet(QLatin1String("padding: 10px;\n"
"background: #ccc;"));
        checkboxAutomaticallyResetSeriesCount->setChecked(true);
        checkboxMuteSound = new QCheckBox(tabControls);
        checkboxMuteSound->setObjectName(QStringLiteral("checkboxMuteSound"));
        checkboxMuteSound->setGeometry(QRect(10, 490, 301, 51));
        checkboxMuteSound->setStyleSheet(QLatin1String("padding: 10px;\n"
"background: #ccc;"));
        screenshotOptions->addTab(tabControls, QString());
        labelTransparency->raise();
        buttonTake->raise();
        buttonStop->raise();
        labelNextScreenshotIn->raise();
        labelNextScreenshotInTime->raise();
        sliderOpacity->raise();
        buttonResetSeriesCount->raise();
        checkboxAutomaticallyResetSeriesCount->raise();
        checkboxMuteSound->raise();
        tabShootOptions = new QWidget();
        tabShootOptions->setObjectName(QStringLiteral("tabShootOptions"));
        tabShootOptions->setStyleSheet(QStringLiteral("color:#222;"));
        labelPeriod = new QLabel(tabShootOptions);
        labelPeriod->setObjectName(QStringLiteral("labelPeriod"));
        labelPeriod->setGeometry(QRect(10, 130, 301, 51));
        labelPeriod->setStyleSheet(QLatin1String("padding-left: 10px;\n"
"background: #ccc;"));
        checkboxPeriodicScreenshot = new QCheckBox(tabShootOptions);
        checkboxPeriodicScreenshot->setObjectName(QStringLiteral("checkboxPeriodicScreenshot"));
        checkboxPeriodicScreenshot->setGeometry(QRect(10, 70, 301, 51));
        checkboxPeriodicScreenshot->setStyleSheet(QLatin1String("padding: 10px;\n"
"background: #ccc;"));
        checkboxPeriodicScreenshot->setChecked(true);
        spinboxPeriod = new QSpinBox(tabShootOptions);
        spinboxPeriod->setObjectName(QStringLiteral("spinboxPeriod"));
        spinboxPeriod->setGeometry(QRect(190, 140, 111, 31));
        spinboxPeriod->setMinimum(500);
        spinboxPeriod->setMaximum(3600000);
        spinboxPeriod->setSingleStep(500);
        labelPrepare = new QLabel(tabShootOptions);
        labelPrepare->setObjectName(QStringLiteral("labelPrepare"));
        labelPrepare->setGeometry(QRect(10, 10, 301, 51));
        labelPrepare->setStyleSheet(QLatin1String("padding-left: 10px;\n"
"background: #ccc;"));
        spinboxPrepareDelay = new QSpinBox(tabShootOptions);
        spinboxPrepareDelay->setObjectName(QStringLiteral("spinboxPrepareDelay"));
        spinboxPrepareDelay->setGeometry(QRect(190, 20, 111, 31));
        spinboxPrepareDelay->setMinimum(0);
        spinboxPrepareDelay->setMaximum(3600000);
        spinboxPrepareDelay->setSingleStep(500);
        spinboxPrepareDelay->setValue(0);
        checkboxHideWindow = new QCheckBox(tabShootOptions);
        checkboxHideWindow->setObjectName(QStringLiteral("checkboxHideWindow"));
        checkboxHideWindow->setGeometry(QRect(10, 250, 301, 51));
        checkboxHideWindow->setStyleSheet(QLatin1String("padding: 10px;\n"
"background: #ccc;"));
        checkboxHideWindow->setChecked(true);
        labelNumberScreenshots = new QLabel(tabShootOptions);
        labelNumberScreenshots->setObjectName(QStringLiteral("labelNumberScreenshots"));
        labelNumberScreenshots->setGeometry(QRect(10, 190, 301, 51));
        labelNumberScreenshots->setStyleSheet(QLatin1String("padding-left: 10px;\n"
"background: #ccc;"));
        spinboxNumberScreenshots = new QSpinBox(tabShootOptions);
        spinboxNumberScreenshots->setObjectName(QStringLiteral("spinboxNumberScreenshots"));
        spinboxNumberScreenshots->setGeometry(QRect(190, 200, 111, 31));
        spinboxNumberScreenshots->setMinimum(2);
        spinboxNumberScreenshots->setMaximum(100000);
        spinboxNumberScreenshots->setSingleStep(1);
        spinboxNumberScreenshots->setValue(5);
        dropdownTargetArea = new QComboBox(tabShootOptions);
        dropdownTargetArea->setObjectName(QStringLiteral("dropdownTargetArea"));
        dropdownTargetArea->setGeometry(QRect(150, 320, 151, 28));
        labelTargetArea = new QLabel(tabShootOptions);
        labelTargetArea->setObjectName(QStringLiteral("labelTargetArea"));
        labelTargetArea->setGeometry(QRect(10, 310, 301, 51));
        labelTargetArea->setStyleSheet(QLatin1String("padding-left: 10px;\n"
"background: #ccc;"));
        textTargetWindowId = new QTextEdit(tabShootOptions);
        textTargetWindowId->setObjectName(QStringLiteral("textTargetWindowId"));
        textTargetWindowId->setGeometry(QRect(190, 380, 111, 31));
        labelTargetWindowId = new QLabel(tabShootOptions);
        labelTargetWindowId->setObjectName(QStringLiteral("labelTargetWindowId"));
        labelTargetWindowId->setGeometry(QRect(10, 370, 301, 51));
        labelTargetWindowId->setStyleSheet(QLatin1String("padding-left: 10px;\n"
"background: #ccc;"));
        labelTargetWindowIdBase = new QLabel(tabShootOptions);
        labelTargetWindowIdBase->setObjectName(QStringLiteral("labelTargetWindowIdBase"));
        labelTargetWindowIdBase->setGeometry(QRect(10, 430, 301, 51));
        labelTargetWindowIdBase->setStyleSheet(QLatin1String("padding-left: 10px;\n"
"background: #ccc;"));
        dropdownTargetWindowIdBase = new QComboBox(tabShootOptions);
        dropdownTargetWindowIdBase->setObjectName(QStringLiteral("dropdownTargetWindowIdBase"));
        dropdownTargetWindowIdBase->setGeometry(QRect(190, 440, 111, 28));
        screenshotOptions->addTab(tabShootOptions, QString());
        labelTargetWindowId->raise();
        labelTargetArea->raise();
        labelPeriod->raise();
        checkboxPeriodicScreenshot->raise();
        spinboxPeriod->raise();
        labelPrepare->raise();
        spinboxPrepareDelay->raise();
        checkboxHideWindow->raise();
        labelNumberScreenshots->raise();
        spinboxNumberScreenshots->raise();
        dropdownTargetArea->raise();
        textTargetWindowId->raise();
        labelTargetWindowIdBase->raise();
        dropdownTargetWindowIdBase->raise();
        tabSaveOptions = new QWidget();
        tabSaveOptions->setObjectName(QStringLiteral("tabSaveOptions"));
        tabSaveOptions->setStyleSheet(QStringLiteral("color:#222;"));
        labelSavePath = new QLabel(tabSaveOptions);
        labelSavePath->setObjectName(QStringLiteral("labelSavePath"));
        labelSavePath->setGeometry(QRect(10, 10, 301, 51));
        labelSavePath->setStyleSheet(QLatin1String("padding-left: 10px;\n"
"background: #ccc;"));
        buttonSavePath = new QPushButton(tabSaveOptions);
        buttonSavePath->setObjectName(QStringLiteral("buttonSavePath"));
        buttonSavePath->setGeometry(QRect(190, 20, 111, 28));
        labelFileNamePrefix = new QLabel(tabSaveOptions);
        labelFileNamePrefix->setObjectName(QStringLiteral("labelFileNamePrefix"));
        labelFileNamePrefix->setGeometry(QRect(10, 70, 301, 51));
        labelFileNamePrefix->setStyleSheet(QLatin1String("padding-left: 10px;\n"
"background: #ccc;"));
        labelFileNameSuffix = new QLabel(tabSaveOptions);
        labelFileNameSuffix->setObjectName(QStringLiteral("labelFileNameSuffix"));
        labelFileNameSuffix->setGeometry(QRect(10, 250, 301, 51));
        labelFileNameSuffix->setStyleSheet(QLatin1String("padding-left: 10px;\n"
"background: #ccc;"));
        labelFileNameTrunk = new QLabel(tabSaveOptions);
        labelFileNameTrunk->setObjectName(QStringLiteral("labelFileNameTrunk"));
        labelFileNameTrunk->setGeometry(QRect(10, 130, 301, 51));
        labelFileNameTrunk->setStyleSheet(QLatin1String("padding-left: 10px;\n"
"background: #ccc;"));
        dropdownPrefix = new QComboBox(tabSaveOptions);
        dropdownPrefix->setObjectName(QStringLiteral("dropdownPrefix"));
        dropdownPrefix->setGeometry(QRect(190, 80, 111, 28));
        textFileNameTrunk = new QTextEdit(tabSaveOptions);
        textFileNameTrunk->setObjectName(QStringLiteral("textFileNameTrunk"));
        textFileNameTrunk->setGeometry(QRect(190, 140, 111, 31));
        dropdownSuffix = new QComboBox(tabSaveOptions);
        dropdownSuffix->setObjectName(QStringLiteral("dropdownSuffix"));
        dropdownSuffix->setGeometry(QRect(190, 260, 111, 28));
        labelFileNameDelimiter = new QLabel(tabSaveOptions);
        labelFileNameDelimiter->setObjectName(QStringLiteral("labelFileNameDelimiter"));
        labelFileNameDelimiter->setGeometry(QRect(10, 190, 301, 51));
        labelFileNameDelimiter->setStyleSheet(QLatin1String("padding-left: 10px;\n"
"background: #ccc;"));
        textFileNameDelimiter = new QTextEdit(tabSaveOptions);
        textFileNameDelimiter->setObjectName(QStringLiteral("textFileNameDelimiter"));
        textFileNameDelimiter->setGeometry(QRect(190, 200, 111, 31));
        labelFileFormat = new QLabel(tabSaveOptions);
        labelFileFormat->setObjectName(QStringLiteral("labelFileFormat"));
        labelFileFormat->setGeometry(QRect(10, 310, 301, 51));
        labelFileFormat->setStyleSheet(QLatin1String("padding-left: 10px;\n"
"background: #ccc;"));
        dropdownFileFormat = new QComboBox(tabSaveOptions);
        dropdownFileFormat->setObjectName(QStringLiteral("dropdownFileFormat"));
        dropdownFileFormat->setGeometry(QRect(190, 320, 111, 28));
        labelFilenumberOffset = new QLabel(tabSaveOptions);
        labelFilenumberOffset->setObjectName(QStringLiteral("labelFilenumberOffset"));
        labelFilenumberOffset->setGeometry(QRect(10, 370, 301, 51));
        labelFilenumberOffset->setStyleSheet(QLatin1String("padding-left: 10px;\n"
"background: #ccc;"));
        spinboxFilenumberOffset = new QSpinBox(tabSaveOptions);
        spinboxFilenumberOffset->setObjectName(QStringLiteral("spinboxFilenumberOffset"));
        spinboxFilenumberOffset->setGeometry(QRect(190, 380, 111, 31));
        spinboxFilenumberOffset->setMinimum(0);
        spinboxFilenumberOffset->setMaximum(3600000);
        spinboxFilenumberOffset->setSingleStep(1);
        spinboxFilenumberOffset->setValue(0);
        dropdownOverridePolicy = new QComboBox(tabSaveOptions);
        dropdownOverridePolicy->setObjectName(QStringLiteral("dropdownOverridePolicy"));
        dropdownOverridePolicy->setGeometry(QRect(190, 440, 111, 28));
        labelOverridePolicy = new QLabel(tabSaveOptions);
        labelOverridePolicy->setObjectName(QStringLiteral("labelOverridePolicy"));
        labelOverridePolicy->setGeometry(QRect(10, 430, 301, 51));
        labelOverridePolicy->setStyleSheet(QLatin1String("padding-left: 10px;\n"
"background: #ccc;"));
        screenshotOptions->addTab(tabSaveOptions, QString());
        labelOverridePolicy->raise();
        labelSavePath->raise();
        buttonSavePath->raise();
        labelFileNamePrefix->raise();
        labelFileNameSuffix->raise();
        labelFileNameTrunk->raise();
        dropdownPrefix->raise();
        textFileNameTrunk->raise();
        dropdownSuffix->raise();
        labelFileNameDelimiter->raise();
        textFileNameDelimiter->raise();
        labelFileFormat->raise();
        dropdownFileFormat->raise();
        labelFilenumberOffset->raise();
        spinboxFilenumberOffset->raise();
        dropdownOverridePolicy->raise();

        horizontalLayout_2->addWidget(screenshotOptions);

        layoutScreenshotPreview = new QVBoxLayout();
        layoutScreenshotPreview->setSpacing(0);
        layoutScreenshotPreview->setObjectName(QStringLiteral("layoutScreenshotPreview"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);
        label->setStyleSheet(QLatin1String("qproperty-alignment: AlignCenter;\n"
"background: #000;\n"
"color: #ccc;\n"
"font-size:16px;\n"
"border-top-left-radius:5px;\n"
"border-top-right-radius:5px;\n"
"padding: 5px;"));

        layoutScreenshotPreview->addWidget(label);

        labelScreenshotPreview = new QLabel(centralWidget);
        labelScreenshotPreview->setObjectName(QStringLiteral("labelScreenshotPreview"));
        labelScreenshotPreview->setStyleSheet(QLatin1String("background: #000;\n"
"color: #ccc;\n"
"qproperty-alignment: AlignCenter;\n"
"border: 3px solid #000;\n"
"border-bottom-left-radius:5px;\n"
"border-bottom-right-radius:5px;\n"
""));

        layoutScreenshotPreview->addWidget(labelScreenshotPreview);


        horizontalLayout_2->addLayout(layoutScreenshotPreview);

        window->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(window);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1138, 25));
        menuAbout = new QMenu(menuBar);
        menuAbout->setObjectName(QStringLiteral("menuAbout"));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuScreenshot = new QMenu(menuBar);
        menuScreenshot->setObjectName(QStringLiteral("menuScreenshot"));
        window->setMenuBar(menuBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuScreenshot->menuAction());
        menuBar->addAction(menuAbout->menuAction());
        menuAbout->addAction(actionAbout);
        menuFile->addAction(actionSave);
        menuScreenshot->addAction(actionTake);

        retranslateUi(window);

        screenshotOptions->setCurrentIndex(0);
        dropdownTargetArea->setCurrentIndex(1);
        dropdownTargetWindowIdBase->setCurrentIndex(3);
        dropdownOverridePolicy->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(window);
    } // setupUi

    void retranslateUi(QMainWindow *window)
    {
        window->setWindowTitle(QApplication::translate("window", "Simple Screenshot Tool", Q_NULLPTR));
        actionAbout->setText(QApplication::translate("window", "&About", Q_NULLPTR));
        actionSave->setText(QApplication::translate("window", "&Save", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionSave->setShortcut(QApplication::translate("window", "Ctrl+S", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionTake->setText(QApplication::translate("window", "&Take", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionTake->setShortcut(QApplication::translate("window", "Ctrl+T", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_TOOLTIP
        buttonTake->setToolTip(QApplication::translate("window", "<html><head/><body><p>Take a screenshot. Go ahead!</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        buttonTake->setText(QApplication::translate("window", "Take Screenshot(s)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        buttonStop->setToolTip(QApplication::translate("window", "<html><head/><body><p>Cancel periodic screenshot plan. Only usable if &quot;Hide This Window From Screenshot&quot; in the next tab is UNchecked.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        buttonStop->setText(QApplication::translate("window", "Stop Periodic Screenshot", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        buttonStop->setShortcut(QApplication::translate("window", "Ctrl+C", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        labelNextScreenshotIn->setText(QApplication::translate("window", "Next Screenshot in", Q_NULLPTR));
        labelNextScreenshotInTime->setText(QApplication::translate("window", "(no periodic screenshot scheduled)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelTransparency->setToolTip(QApplication::translate("window", "<html><head/><body><p>Not particularly useful, but you can change the transparency of this window if it tickles your fancy.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelTransparency->setText(QApplication::translate("window", "Window Transparency", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        buttonResetSeriesCount->setToolTip(QApplication::translate("window", "<html><head/><body><p>Resets series count to 0.</p><p>Explanation: for each program session the screenshot numbering continues where it stopped when you last pressed &quot;Take Screenshot(s)&quot;. </p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        buttonResetSeriesCount->setText(QApplication::translate("window", "Reset Series Count", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        buttonResetSeriesCount->setShortcut(QApplication::translate("window", "Ctrl+C", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_TOOLTIP
        checkboxAutomaticallyResetSeriesCount->setToolTip(QApplication::translate("window", "<html><head/><body><p>Automatically reset series count to 0 after job is finished.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        checkboxAutomaticallyResetSeriesCount->setText(QApplication::translate("window", "Automatically Reset Series Count", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        checkboxMuteSound->setToolTip(QApplication::translate("window", "<html><head/><body><p>Don't play the screenshot sound upon taking the screenshot. Btw, the sound varies with the OS. For the interested: the sound is played by the QApplication::beep() call.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        checkboxMuteSound->setText(QApplication::translate("window", "Mute Sound", Q_NULLPTR));
        screenshotOptions->setTabText(screenshotOptions->indexOf(tabControls), QApplication::translate("window", "Controls", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelPeriod->setToolTip(QApplication::translate("window", "<html><head/><body><p>The interval in between each of the screenshots. Only takes effect if &quot;Periodic Screenshot&quot; is checked. </p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelPeriod->setText(QApplication::translate("window", "Period (ms)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        checkboxPeriodicScreenshot->setToolTip(QApplication::translate("window", "<html><head/><body><p>Basically a choice between taking multiple screenshots (number specified in &quot;Number of Screenshots&quot;) or just a single shot.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        checkboxPeriodicScreenshot->setText(QApplication::translate("window", "Periodic Screenshot", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelPrepare->setToolTip(QApplication::translate("window", "<html><head/><body><p>The delay before the first screenshot is taken.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelPrepare->setText(QApplication::translate("window", "Prepare (ms)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        checkboxHideWindow->setToolTip(QApplication::translate("window", "<html><head/><body><p>Check to not have the screenshot tool's window interfere with your shooting.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        checkboxHideWindow->setText(QApplication::translate("window", "Hide This Window From Screenshot", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelNumberScreenshots->setToolTip(QApplication::translate("window", "<html><head/><body><p>The number of screenshots you want to take.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelNumberScreenshots->setText(QApplication::translate("window", "Number of Screenshots", Q_NULLPTR));
        dropdownTargetArea->clear();
        dropdownTargetArea->insertItems(0, QStringList()
         << QApplication::translate("window", "Entire Screen", Q_NULLPTR)
         << QApplication::translate("window", "Active Window", Q_NULLPTR)
         << QApplication::translate("window", "Window", Q_NULLPTR)
         << QApplication::translate("window", "Rectangle", Q_NULLPTR)
         << QApplication::translate("window", "Polygon", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        labelTargetArea->setToolTip(QApplication::translate("window", "<html><head/><body><p>The area you want to take a screenshot of.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelTargetArea->setText(QApplication::translate("window", "Target Area", Q_NULLPTR));
        textTargetWindowId->setHtml(QApplication::translate("window", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", Q_NULLPTR));
        textTargetWindowId->setPlaceholderText(QString());
#ifndef QT_NO_TOOLTIP
        labelTargetWindowId->setToolTip(QApplication::translate("window", "<html><head/><body><p>Used to identify the window you want to take a screenshot of. For OS other than Linux please use the powershell (Windows) or Quartz (OSX) to find out the WId. Takes effect only if &quot;Target Area&quot; is set to window.&quot;</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelTargetWindowId->setText(QApplication::translate("window", "Target Window Id", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelTargetWindowIdBase->setToolTip(QApplication::translate("window", "<html><head/><body><p>The base which is used to calculate the WId from the &quot;Target Window Id&quot; text input. Only takes effect if &quot;Target Area&quot; is set to window.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelTargetWindowIdBase->setText(QApplication::translate("window", "Target Window Id Base", Q_NULLPTR));
        dropdownTargetWindowIdBase->clear();
        dropdownTargetWindowIdBase->insertItems(0, QStringList()
         << QApplication::translate("window", "Bin", Q_NULLPTR)
         << QApplication::translate("window", "Oct", Q_NULLPTR)
         << QApplication::translate("window", "Dec", Q_NULLPTR)
         << QApplication::translate("window", "Hex", Q_NULLPTR)
        );
        screenshotOptions->setTabText(screenshotOptions->indexOf(tabShootOptions), QApplication::translate("window", "Shoot Options", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelSavePath->setToolTip(QApplication::translate("window", "<html><head/><body><p>Determines where the screenshot will be saved. If no path is set the images folder of your OS will be determined. If no such folder exists your current working directory, i.e. the directory where this program resides will be the target directory.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelSavePath->setText(QApplication::translate("window", "Set Save Path", Q_NULLPTR));
        buttonSavePath->setText(QApplication::translate("window", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelFileNamePrefix->setToolTip(QApplication::translate("window", "<html><head/><body><p>A file name prefix. # stands for the current number of the screenshot. The other symbols stand for current time information, such as current year, month or day.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelFileNamePrefix->setText(QApplication::translate("window", "File Name Prefix", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelFileNameSuffix->setToolTip(QApplication::translate("window", "<html><head/><body><p>Analogous to prefix.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelFileNameSuffix->setText(QApplication::translate("window", "File Name Suffix", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelFileNameTrunk->setToolTip(QApplication::translate("window", "<html><head/><body><p>The middle part of the filename.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
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
#ifndef QT_NO_TOOLTIP
        labelFileNameDelimiter->setToolTip(QApplication::translate("window", "<html><head/><body><p>Determine the delimiting symbol (defaults to underscore). Look at &quot;File Name Prefix&quot; options to see what I mean.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        labelFileNameDelimiter->setWhatsThis(QApplication::translate("window", "<html><head/><body><p>Determines the character to delimit prefix from trunk and trunk from suffix. Also used to delimit prefix sections and suffix sections.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        labelFileNameDelimiter->setText(QApplication::translate("window", "File Name Delimiter", Q_NULLPTR));
        textFileNameDelimiter->setHtml(QApplication::translate("window", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">_</p></body></html>", Q_NULLPTR));
        textFileNameDelimiter->setPlaceholderText(QString());
#ifndef QT_NO_TOOLTIP
        labelFileFormat->setToolTip(QApplication::translate("window", "<html><head/><body><p>Determines the file format of the saved screenshot. Default is png, which can save the transparent color. Choose jpg for even smaller file sizes and less quality. Choose tiff or bmp for maximum quality at the cost of tremendous file size.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelFileFormat->setText(QApplication::translate("window", "File Format", Q_NULLPTR));
        dropdownFileFormat->clear();
        dropdownFileFormat->insertItems(0, QStringList()
         << QApplication::translate("window", "png", Q_NULLPTR)
         << QApplication::translate("window", "jpg", Q_NULLPTR)
         << QApplication::translate("window", "bmp", Q_NULLPTR)
         << QApplication::translate("window", "tiff", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        labelFilenumberOffset->setToolTip(QApplication::translate("window", "<html><head/><body><p>Start the # counter at &quot;# Offset&quot; instead of 0. Example: if you check periodic screenshot, but otherwise don't change the default settings and choose 10 here your first screenshot will be named untitled_11.png instead of untitled_1.png.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelFilenumberOffset->setText(QApplication::translate("window", "# Offset", Q_NULLPTR));
        dropdownOverridePolicy->clear();
        dropdownOverridePolicy->insertItems(0, QStringList()
         << QApplication::translate("window", "Ask", Q_NULLPTR)
         << QApplication::translate("window", "Preserve", Q_NULLPTR)
         << QApplication::translate("window", "Override", Q_NULLPTR)
         << QApplication::translate("window", "Rename", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        labelOverridePolicy->setToolTip(QApplication::translate("window", "<html><head/><body><p>Choose what to do if a file with the name of your screenshot naming pattern exists in the target directory. </p><p>Ask: Ask user when conflict occurs.</p><p>Override: Always override old file.</p><p>Preserve: Never override old file and immediately halt all action.</p><p>Rename: Keep old and new file by renaming the new file.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelOverridePolicy->setText(QApplication::translate("window", "Override Policy", Q_NULLPTR));
        screenshotOptions->setTabText(screenshotOptions->indexOf(tabSaveOptions), QApplication::translate("window", "Save Options", Q_NULLPTR));
        label->setText(QApplication::translate("window", "Screenshot Preview", Q_NULLPTR));
        labelScreenshotPreview->setText(QString());
        menuAbout->setTitle(QApplication::translate("window", "?", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("window", "Fi&le", Q_NULLPTR));
        menuScreenshot->setTitle(QApplication::translate("window", "Sc&reenshot", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class window: public Ui_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_H
