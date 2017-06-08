#ifndef WINDOW_H
#define WINDOW_H

#include <QMainWindow>
#include <QPixmap>
#include <QMessageBox>
#include <QTimer>
#include <QScreen>
#include <QFile>
#include <QWindow>
#include <QDebug>
#include <QStandardPaths>
#include <QDir>
#include <QFileDialog>
#include <QImageWriter>
#include <QDateTime>
#include <QShortcut>
#include <QKeySequence>

namespace Ui {
class window;
}

class window : public QMainWindow
{
    Q_OBJECT

public:
    explicit window(QWidget *parent = 0);
    ~window();

protected:
    void resizeEvent(QResizeEvent *event) override;

private slots:
    void on_buttonTake_clicked();
    void on_buttonStop_clicked();
    void on_actionAbout_triggered();
    void on_buttonSavePath_clicked();
    void on_sliderOpacity_valueChanged(int value);

    void takeScreenshot();
    void saveFile();
    void updatePreview();
    void setSavepath();
    void updateNextScreenshotIn();
    void setupNextScreenshotInfo();

    void on_buttonResetSeriesCount_clicked();

private:
    Ui::window*            ui;
    QPixmap                screenshot;
    static QTimer*         periodicScreenshotTimer;
    static QTimer*         nextScreenshotInfoTimer;
    int                    screenshotCount;
    int                    screenshotCountSession;
    bool                   interruptScreenshots;
    QScreen*               screen;
    QString                fileSavepath;
    QString                fileSavename;
    QString                fileFormat;
};

#endif // WINDOW_H
