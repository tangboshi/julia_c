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

public slots:
    static fakeglass* getFakeglass();

signals:
    void rectangleSelected(QPoint start, QPoint end);

private:
    explicit            fakeglass(QWidget *parent = nullptr);
    static              fakeglass* singleton;
    QRubberBand*        rubberband;
    QPoint              origin;
    QPoint              endpoint;
    Ui::fakeglass       *ui;
};

#endif // FAKEGLASS_H
