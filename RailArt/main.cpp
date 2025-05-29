#include "railart.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    qInstallMessageHandler([](QtMsgType, const QMessageLogContext &, const QString &msg) {
        if (!msg.contains("libpng warning"))
            qDebug() << msg;
    });
    RailArt w;
    w.show();
    return a.exec();
}
