#include "railart.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    RailArt w;
    w.show();
    return a.exec();
}
