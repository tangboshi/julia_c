#ifndef UTILITY_H
#define UTILITY_H
/*
#include <QTime>

void delay( int millisecondsToWait )
{
    QTime dieTime = QTime::currentTime().addMSecs( millisecondsToWait );
    while( QTime::currentTime() < dieTime )
    {
        QCoreApplication::processEvents( QEventLoop::AllEvents, 100 );
    }
}
*/

#include <QEventLoop>
#include <QTimer>

void delay(int ms)
{
    QEventLoop* loop = new QEventLoop;
    QTimer timer;
    timer.setInterval(ms);
    QObject::connect(&timer, &QTimer::timeout, loop, &QEventLoop::quit);
    timer.start();
    loop->exec();
}

#endif // UTILITY_H
