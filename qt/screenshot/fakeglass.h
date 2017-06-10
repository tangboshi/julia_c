#ifndef FAKEGLASS_H
#define FAKEGLASS_H

#include <QObject>
#include <QWidget>
#include <QRubberBand>
#include <QMouseEvent>
#include <QPalette>

namespace Ui {
class fakeglass;
}

class fakeglass : public QWidget
{
    Q_OBJECT

public:
    ~fakeglass();

protected:
    void mousePressEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
    //void hideEvent(QHideEvent *event) override;

public slots:
    static fakeglass* getFakeglass();
    void   showFakeglass(QString mode);

signals:
    void rectangleSelected(QPoint start, QPoint end);
    //void fakeglassHidden();

private:
    explicit            fakeglass(QWidget *parent = nullptr);
    static fakeglass*   singleton;
    QRubberBand*        rubberband;
    QPoint              origin;
    QPoint              endpoint;
    Ui::fakeglass       *ui;
    QString             captureMode;
};

#endif // FAKEGLASS_H
