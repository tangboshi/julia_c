#include "window.h"
#include <QApplication>
#include <QStyleFactory>

int main(int argc, char *argv[])
{
    QApplication::setDesktopSettingsAware(false);
    QApplication a(argc, argv);
    window w;

    QStyle* style = QStyleFactory::create("Oxygen");
    a.setStyle(style);
    w.show();

    return a.exec();
}
