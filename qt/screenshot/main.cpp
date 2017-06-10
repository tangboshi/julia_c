#include "window.h"
#include <QApplication>
#include <QStyleFactory>

int main(int argc, char *argv[])
{
    QApplication::setDesktopSettingsAware(false);
    QApplication a(argc, argv);
    window w;

    #ifdef __linux__
        QStyle* style = QStyleFactory::create("Oxygen");
        a.setStyle(style);
    #endif

    w.show();

    return a.exec();
}
