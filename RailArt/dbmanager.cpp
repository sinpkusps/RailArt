#include "dbmanager.h"
#include <QDir>
#include <QFile>
#include <QMessageBox>
#include <QSqlError>
#include <QDebug>
#include "runtime.h"

DBManager::DBManager()
{
}

void DBManager::check()
{
    if (m_db.drivers().indexOf(runtime.getConfig().db_driver) == -1)
    {
        QMessageBox::critical(nullptr, "严重错误", QString("%1 driver驱动未配置！").arg(runtime.getConfig().db_driver));
        exit(-1);
    }
}

bool DBManager::start()
{
    if (runtime.getConfig().db_driver == "QMYSQL")
    {
        return startMySQL();
    }
    else if (runtime.getConfig().db_driver == "QSQLITE")
    {
        return startSQLite();
    }
    else
    {
        return true;
    }
}

QSqlQuery DBManager::query()
{
    return QSqlQuery(m_db);
}

QSqlDatabase &DBManager::getDB()
{
    return m_db;
}

void DBManager::resetDatabase()
{
    QFile file("://db.sql");
    if (file.open(QIODevice::ReadOnly))
    {
        if (runtime.getConfig().db_driver == "QMYSQL")
        {
            if (!QSqlDatabase::contains("ConnectDB"))
            {
                m_db = QSqlDatabase::addDatabase("QMYSQL", "ConnectDB");
            }
            m_db.setHostName(runtime.getConfig().host_ip);
            m_db.setPort(runtime.getConfig().host_port);
            m_db.setUserName(runtime.getConfig().db_user_id);
            m_db.setPassword(runtime.getConfig().db_user_password);
            bool succeed = m_db.open();
            if (!succeed)
            {
                QMessageBox::warning(nullptr, "连接MySQL数据库失败", m_db.lastError().text());
                return;
            }
            QStringList sqllist;
            sqllist << QString("set names utf8;");
            sqllist << QString("drop database if exists %1;").arg(runtime.getConfig().db_name);
            sqllist << QString("create database %1;").arg(runtime.getConfig().db_name);
            sqllist << QString("use %1;").arg(runtime.getConfig().db_name);
            for (QStringList::iterator iter = sqllist.begin(); iter != sqllist.end(); ++iter)
            {
                QString sql = *iter;
                qDebug() << sql;
                if (!query().exec(sql))
                {
                    QMessageBox::warning(nullptr, "数据库初始化失败", "错误指令：" + sql + " 错误提示：" + m_db.lastError().text());
                }
            }
        }
        else if (runtime.getConfig().db_driver == "QSQLITE")
        {
            m_db.close();
            QDir().remove("database.db");
            if (!QSqlDatabase::contains("ConnectDB"))
            {
                m_db = QSqlDatabase::addDatabase("QSQLITE", "ConnectDB");
            }
            m_db.setDatabaseName("database.db");
            bool succeed = m_db.open();
            if (!succeed)
            {
                QMessageBox::warning(nullptr, "连接SQLite数据库失败", m_db.lastError().text());
                return;
            }
        }
        QTextStream input(&file);
        input.setEncoding(QStringConverter::Utf8);
        QString sql;
        while (!input.atEnd())
        {
            QString line = input.readLine().trimmed();
            if (!line.isEmpty())
            {
                if (line.left(2) == "/*" && line.right(2) == "*/")
                {
                    continue;
                }
                sql += line;
                if (line.right(1) == ";")
                {
                    qDebug() << sql;
                    if (!query().exec(sql))
                    {
                        QMessageBox::warning(nullptr, "数据库初始化失败", "错误指令：" + sql + " 错误提示：" + m_db.lastError().text());
                    }
                    sql = "";
                }
            }
        }
    }
}

bool DBManager::startMySQL()
{
    if (!QSqlDatabase::contains("ConnectDB"))
    {
        m_db = QSqlDatabase::addDatabase("QMYSQL", "ConnectDB");
    }
    m_db.setHostName(runtime.getConfig().host_ip);
    m_db.setPort(runtime.getConfig().host_port);
    m_db.setDatabaseName(runtime.getConfig().db_name);
    m_db.setUserName(runtime.getConfig().db_user_id);
    m_db.setPassword(runtime.getConfig().db_user_password);
    bool succeed = m_db.open();
    if (!succeed)
    {
        QMessageBox::warning(nullptr, "连接数据库失败", m_db.lastError().text());
    }
    return succeed;
}

bool DBManager::startSQLite()
{
    if (!QSqlDatabase::contains("ConnectDB"))
    {
        m_db = QSqlDatabase::addDatabase("QSQLITE", "ConnectDB");
    }
    m_db.setDatabaseName("database.db");
    bool exist = QDir().exists("database.db");
    if (m_db.open())
    {
        return true;
    }
    return false;
}
