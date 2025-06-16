#include "config.h"
#include <QCoreApplication>
#include <QFile>
#include <QSettings>
#include <QStringConverter>

void Config::load()
{
    init();
    QString filename = QCoreApplication::applicationDirPath() + "/config.ini";
    QSettings settings(filename, QSettings::IniFormat);
    app_name = settings.value("AppConfig/AppName").toString();
    host_ip = settings.value("SQLConfig/HostIP").toString();
    host_port = settings.value("SQLConfig/HostPort").toInt();
    db_driver = settings.value("SQLConfig/DBDriver").toString();
    db_name = settings.value("SQLConfig/DatabaseName").toString();
    db_user_id = settings.value("SQLConfig/DatabaseUserID").toString();
    db_user_password = settings.value("SQLConfig/DatabaseUserPassword").toString();
    ui_style = settings.value("UIConfig/Style").toString();
}

void Config::save()
{
    QString filename = QCoreApplication::applicationDirPath() + "/config.ini";
    QSettings settings(filename, QSettings::IniFormat);
    settings.setValue("AppConfig/AppName", app_name);
    settings.setValue("SQLConfig/HostIP", host_ip);
    settings.setValue("SQLConfig/HostPort", host_port);
    settings.setValue("SQLConfig/DBDriver", db_driver);
    settings.setValue("SQLConfig/DatabaseName", db_name);
    settings.setValue("SQLConfig/DatabaseUserID", db_user_id);
    settings.setValue("SQLConfig/DatabaseUserPassword", db_user_password);
    settings.setValue("UIConfig/Style", ui_style);
}

void Config::init()
{
    QString filename = QCoreApplication::applicationDirPath() + "/config.ini";
    if (!QFile::exists(filename))
    {
        QFile input("://config.ini");
        if (input.open(QFile::ReadOnly))
        {
            QFile output(filename);
            if (output.open(QIODevice::WriteOnly))
            {
                output.write(input.readAll());
                output.close();
            }
        }
    }
}
