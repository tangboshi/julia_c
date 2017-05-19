#ifndef WINDOW_H
#define WINDOW_H

#include <QMainWindow>

namespace Ui {
class window;
}

class window : public QMainWindow
{
    Q_OBJECT

public:
    explicit window(QWidget *parent = 0);
    ~window();

public slots:
    void changeVendorDisplayStatus(QString status);
    void changeVendorDisplayDetails(QString details);
    void deactivateButtonSlot(int id);
    void activateButtonSlot(int id);

private slots:
    void on_productOneButton_clicked();
    void on_insertCoinButton_clicked();
    void on_productTwoButton_clicked();
    void on_productThreeButton_clicked();
    void on_productFourButton_clicked();
    void on_productFiveButton_clicked();
    void on_refundButton_clicked();

private:
    Ui::window *ui;
};

#endif // WINDOW_H
