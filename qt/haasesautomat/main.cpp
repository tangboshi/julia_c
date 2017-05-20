#include "window.h"
#include <QApplication>
#include <QtWebView/QtWebView>
#include <QDebug>
#include <QDir>

int main(int argc, char *argv[])
{
    qDebug() << QDir::currentPath();

    QApplication a(argc, argv);
    window w;
    w.show();

    return a.exec();
}
