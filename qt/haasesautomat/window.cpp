#include "window.h"
#include "ui_window.h"
#include "automaton.hh"

#include <QWebView>
#include <QAction>
#include <QMessageBox>

automaton* vendor = automaton::getVendor();

window::window(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::window)
{
    ui->setupUi(this);
    // Main Window Settings
    setWindowTitle("Getränkeautomat");
    setFixedHeight(this->height());
    setFixedWidth(this->width());

    // Tabs Defaults
    ui->vendorTabs->setTabText(0, "Customer Interface");
    ui->vendorTabs->setTabText(1, "Machine Inner");

    ui->vendorDisplayStatus->setText("Bereit!");
    ui->vendorDisplayDetails->setText("");

    connect(vendor, &automaton::vendorDisplayStatus, this, &window::changeVendorDisplayStatus);
    connect(vendor, &automaton::vendorDisplayDetails, this, &window::changeVendorDisplayDetails);
    connect(vendor, &automaton::deactivateButton, this, &window::deactivateButtonSlot);
    connect(vendor, &automaton::activateButton, this, &window::activateButtonSlot);
    connect(vendor, &automaton::vendorState, this, &window::uiNewStateSlot);

    ui->vendorInner->load(QUrl("qrc:/html/index.html"));
    ui->vendorInner->setStyleSheet("qrc:/html/default-style.css");
}

window::~window()
{
    delete ui;
}

// Slots

void window::deactivateButtonSlot(int id)
{
    switch(id)
    {
        case ALL_BUTTONS:
            ui->productOneButton->setEnabled(false);
            ui->productTwoButton->setEnabled(false);
            ui->productThreeButton->setEnabled(false);
            ui->productFourButton->setEnabled(false);
            ui->productFiveButton->setEnabled(false);
            ui->insertCoinButton->setEnabled(false);
            ui->refundButton->setEnabled(false);
            break;
        default:
            break;
     }
}

void window::activateButtonSlot(int id)
{
    switch(id)
    {
        case ALL_BUTTONS:
            ui->productOneButton->setEnabled(true);
            ui->productTwoButton->setEnabled(true);
            ui->productThreeButton->setEnabled(true);
            ui->productFourButton->setEnabled(true);
            ui->productFiveButton->setEnabled(true);
            ui->insertCoinButton->setEnabled(true);
            ui->refundButton->setEnabled(true);
            break;
        default:
            break;
     }
}

void window::changeVendorDisplayStatus(QString status)
{
    ui->vendorDisplayStatus->setText(status);
}

void window::changeVendorDisplayDetails(QString details)
{
    ui->vendorDisplayDetails->setText(details);
}

void window::on_insertCoinButton_clicked()
{
    vendor->vendorSlot(BUTTON_INSERT_COIN);
}

void window::on_productOneButton_clicked()
{
    vendor->vendorSlot(BUTTON_PRODUCT_COKE);
}

void window::on_productTwoButton_clicked()
{
    vendor->vendorSlot(BUTTON_PRODUCT_COKE_LIGHT);
}

void window::on_productThreeButton_clicked()
{
    vendor->vendorSlot(BUTTON_PRODUCT_SPRITE);
}

void window::on_productFourButton_clicked()
{
    vendor->vendorSlot(BUTTON_PRODUCT_WATER);
}

void window::on_productFiveButton_clicked()
{
    vendor->vendorSlot(BUTTON_PRODUCT_JUICE);
}

void window::on_refundButton_clicked()
{
    vendor->vendorSlot(BUTTON_REFUND);
}

void window::uiNewStateSlot(unsigned int state)
{
    switch (state)
    {
        case STATE_READY:
            ui->labelReady->setStyleSheet("QLabel {background: red;}");
            ui->labelAcceptingMoney->setStyleSheet("QLabel {background: #ccc;}");
            ui->labelBusy->setStyleSheet("QLabel {background: #ccc;}");
            break;
        case STATE_ACCEPTING_MONEY:
            ui->labelReady->setStyleSheet("QLabel {background: #ccc;}");
            ui->labelAcceptingMoney->setStyleSheet("QLabel {background: red;}");
            ui->labelBusy->setStyleSheet("QLabel {background: #ccc;}");
            break;
        case STATE_BUSY:
            ui->labelReady->setStyleSheet("QLabel {background: #ccc;}");
            ui->labelAcceptingMoney->setStyleSheet("QLabel {background: #ccc;}");
            ui->labelBusy->setStyleSheet("QLabel {background: red;}");
            break;
        default:
            break;
    }
}

void window::on_actionAbout_triggered()
{
    QMessageBox msg;
    msg.setText("Just a vending machine programmed by Alexander Pastor, purely for fun and educational purposes.");
    msg.exec();
}
