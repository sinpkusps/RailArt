#ifndef DBMANAGER_H
#define DBMANAGER_H

#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QString>
#include <QObject>

// 用户数据库管理的类
class DBManager
{
public:
    DBManager();

public:
    void check();
    bool start();
    QSqlQuery query();
    QSqlDatabase &getDB();

public:
    void resetDatabase();

private:
    bool startMySQL();
    bool startSQLite();

private:
    QSqlDatabase m_db;
};

#endif // SQLMANAGER_H
