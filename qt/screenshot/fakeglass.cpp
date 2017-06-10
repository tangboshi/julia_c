#include "fakeglass.h"
#include "ui_fakeglass.h"

fakeglass* fakeglass::singleton = nullptr;

fakeglass::fakeglass(QWidget *parent) :
    QWidget(parent),
    rubberband(NULL),
    ui(new Ui::fakeglass)
{
    ui->setupUi(this);
    setStyleSheet("background: rgba(255,255,255,255)");
    setWindowOpacity(0.6);
    setWindowFlags(Qt::FramelessWindowHint|Qt::WindowStaysOnTopHint);
}

fakeglass::~fakeglass()
{
    delete ui;
}

fakeglass *fakeglass::getFakeglass()
{
    if(singleton == nullptr)
        singleton = new fakeglass();
    return singleton;
}

void fakeglass::showFakeglass(QString mode)
{
    captureMode = mode;
    showFullScreen();
}


void fakeglass::mousePressEvent(QMouseEvent *event)
{
    origin = event->pos();
    if (!rubberband)
        rubberband = new QRubberBand(QRubberBand::Rectangle, NULL);
    rubberband->setGeometry(QRect(origin, QSize()));

    QPalette palette;
    QColor color(255,0,0,75);
    palette.setBrush(QPalette::Highlight, QBrush(color));
    rubberband->setPalette(palette);

    rubberband->show();
}

void fakeglass::mouseMoveEvent(QMouseEvent *event)
{
    rubberband->setGeometry(QRect(origin, event->pos()).normalized());
}

void fakeglass::mouseReleaseEvent(QMouseEvent *event)
{
    rubberband->hide();
    endpoint = event->pos();
    emit rectangleSelected(origin, endpoint);
}

/*
void fakeglass::hideEvent(QHideEvent *event)
{
    emit fakeglassHidden();
}
*/
