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
#include <QtWebKitWidgets/QWebView>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_window
{
public:
    QAction *actionAbout;
    QWidget *centralWidget;
    QTabWidget *vendorTabs;
    QWidget *customerInterface;
    QWebView *vendorInner;
    QPushButton *refundButton;
    QPushButton *productFourButton;
    QPushButton *productTwoButton;
    QPushButton *productThreeButton;
    QPushButton *productFiveButton;
    QPushButton *insertCoinButton;
    QLabel *vendorDisplayStatus;
    QLabel *vendorDisplayDetails;
    QPushButton *productOneButton;
    QWidget *machineInner;
    QMenuBar *menuBar;
    QMenu *menu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *window)
    {
        if (window->objectName().isEmpty())
            window->setObjectName(QStringLiteral("window"));
        window->resize(495, 609);
        actionAbout = new QAction(window);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        centralWidget = new QWidget(window);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        vendorTabs = new QTabWidget(centralWidget);
        vendorTabs->setObjectName(QStringLiteral("vendorTabs"));
        vendorTabs->setGeometry(QRect(10, 10, 471, 521));
        vendorTabs->setStyleSheet(QStringLiteral("background-image: url(/img/coin.png);"));
        customerInterface = new QWidget();
        customerInterface->setObjectName(QStringLiteral("customerInterface"));
        vendorInner = new QWebView(customerInterface);
        vendorInner->setObjectName(QStringLiteral("vendorInner"));
        vendorInner->setGeometry(QRect(90, 110, 361, 351));
        vendorInner->setUrl(QUrl(QStringLiteral("about:blank")));
        refundButton = new QPushButton(customerInterface);
        refundButton->setObjectName(QStringLiteral("refundButton"));
        refundButton->setGeometry(QRect(10, 410, 61, 51));
        refundButton->setStyleSheet(QStringLiteral("background:red"));
        productFourButton = new QPushButton(customerInterface);
        productFourButton->setObjectName(QStringLiteral("productFourButton"));
        productFourButton->setGeometry(QRect(10, 290, 61, 51));
        productTwoButton = new QPushButton(customerInterface);
        productTwoButton->setObjectName(QStringLiteral("productTwoButton"));
        productTwoButton->setGeometry(QRect(10, 170, 61, 51));
        productThreeButton = new QPushButton(customerInterface);
        productThreeButton->setObjectName(QStringLiteral("productThreeButton"));
        productThreeButton->setGeometry(QRect(10, 230, 61, 51));
        productFiveButton = new QPushButton(customerInterface);
        productFiveButton->setObjectName(QStringLiteral("productFiveButton"));
        productFiveButton->setGeometry(QRect(10, 350, 61, 51));
        insertCoinButton = new QPushButton(customerInterface);
        insertCoinButton->setObjectName(QStringLiteral("insertCoinButton"));
        insertCoinButton->setGeometry(QRect(10, 30, 71, 61));
        insertCoinButton->setStyleSheet(QStringLiteral("background: gold;"));
        vendorDisplayStatus = new QLabel(customerInterface);
        vendorDisplayStatus->setObjectName(QStringLiteral("vendorDisplayStatus"));
        vendorDisplayStatus->setGeometry(QRect(90, 30, 361, 31));
        vendorDisplayStatus->setStyleSheet(QStringLiteral("background: black; color: lime;  padding: 5px; font: 11pt \"Digital Numbers\";"));
        vendorDisplayDetails = new QLabel(customerInterface);
        vendorDisplayDetails->setObjectName(QStringLiteral("vendorDisplayDetails"));
        vendorDisplayDetails->setGeometry(QRect(90, 60, 361, 31));
        vendorDisplayDetails->setStyleSheet(QLatin1String("background: black;  color:lime;  padding: 5px; qproperty-alignment: AlignRight;\n"
"font: 11pt \"Digital Numbers\";"));
        productOneButton = new QPushButton(customerInterface);
        productOneButton->setObjectName(QStringLiteral("productOneButton"));
        productOneButton->setGeometry(QRect(10, 110, 61, 51));
        vendorTabs->addTab(customerInterface, QString());
        machineInner = new QWidget();
        machineInner->setObjectName(QStringLiteral("machineInner"));
        vendorTabs->addTab(machineInner, QString());
        window->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(window);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 495, 25));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        window->setMenuBar(menuBar);
        mainToolBar = new QToolBar(window);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        window->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(window);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        window->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menu->addAction(actionAbout);

        retranslateUi(window);

        vendorTabs->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(window);
    } // setupUi

    void retranslateUi(QMainWindow *window)
    {
        window->setWindowTitle(QApplication::translate("window", "window", Q_NULLPTR));
        actionAbout->setText(QApplication::translate("window", "&About", Q_NULLPTR));
        refundButton->setText(QString());
        productFourButton->setText(QApplication::translate("window", "4", Q_NULLPTR));
        productTwoButton->setText(QApplication::translate("window", "2", Q_NULLPTR));
        productThreeButton->setText(QApplication::translate("window", "3", Q_NULLPTR));
        productFiveButton->setText(QApplication::translate("window", "5", Q_NULLPTR));
        insertCoinButton->setText(QString());
        vendorDisplayStatus->setText(QApplication::translate("window", "Status", Q_NULLPTR));
        vendorDisplayDetails->setText(QApplication::translate("window", "Detailinformation", Q_NULLPTR));
        productOneButton->setText(QApplication::translate("window", "1", Q_NULLPTR));
        vendorTabs->setTabText(vendorTabs->indexOf(customerInterface), QApplication::translate("window", "Tab 1", Q_NULLPTR));
        vendorTabs->setTabText(vendorTabs->indexOf(machineInner), QApplication::translate("window", "Tab 2", Q_NULLPTR));
        menu->setTitle(QApplication::translate("window", "?", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class window: public Ui_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_H
