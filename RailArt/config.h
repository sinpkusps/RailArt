#ifndef CONFIG_H
#define CONFIG_H

#include <QString>

// 配置信息类
class Config
{
public:
    Config() : host_ip("localhost"),
               host_port(0)
    {
    }

    void load();
    void save();
    void init();

public:
    QString app_name;         // 应用名称
    QString host_ip;          // 服务器地址
    int host_port;            // 服务器端口
    QString db_driver;        // 服务器驱动
    QString db_name;          // 数据库名称
    QString db_user_id;       // 数据库账号
    QString db_user_password; // 数据库密码
    QString ui_style;         // 界面风格
};

#endif // CONFIG_H
