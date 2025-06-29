#ifndef RUNTIME_H
#define RUNTIME_H

#include "dbmanager.h"
#include <QDebug>
#include <QString>
#include <QStringList>
#include <QVector>
#include <QDateTime>
#include <QtSql/QSqlQueryModel>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonValue>
#include <QJsonDocument>
#include "config.h"

enum class ROLE
{
    USER,
    ADMIN
};

class Context
{
public:
    Context(const QString &id, const QString &name, ROLE role)
        : id(id), name(name), role(role)
    {
    }

public:
    QString id;
    QString name;
    ROLE role;
};

// 运行时类（含全局需要用到的配置信息，以及数据库调用接口的定义）
class Runtime
{
public:
    Runtime();
    virtual ~Runtime();

public:
    void init();
    void setContext(const QString &id, const QString &name, ROLE role);
    Context *getContext();
    Config &getConfig();
    bool startDBManager();
    DBManager &getDBManager();

public:
    QString generateID(const QString &name, int width = 5, const QString &prefix = "");
    void getUserList(QSqlQueryModel *model);
    void searchUserList(QSqlQueryModel *model, const QString &filter);
    void getGoodsList(QSqlQueryModel *model);
    void getGoodsList(QSqlQueryModel *model, const QString &user_id);
    void searchGoodsList(QSqlQueryModel *model, const QString &filter);
    void getCartList(QSqlQueryModel *model, const QString &user_id);
    void getItemList(QSqlQueryModel *model, const QString &record_id);
    void getRecordationList(QSqlQueryModel *model);
    void searchRecordationList(QSqlQueryModel *model, const QString &filter);
    void getRecordationList(QSqlQueryModel *model, const QString &user_id);
    void searchRecordationList(QSqlQueryModel *model, const QString &filter, const QString &user_id);
    void getInvitationList(QSqlQueryModel *model);
    void getInvitationList(QSqlQueryModel *model, const QString &user_id);
    void getStatisticsList(QSqlQueryModel *model);
    void searchStatisticsList(QSqlQueryModel *model, const QString &filter);
    bool cartGoods(const QString &user_id, const QString &goods_id, int quantity, QString &message);
    bool payCart(const QString &user_id, QString &message);
    bool returnGoods(const QString &user_id, const QString &recordation_id);
    bool rechargeUser(const QString &user_id, double money);
    bool consumeUser(const QString &user_id, double money);
    double balanceUser(const QString &user_id);
    bool sendMessage(const QString &user_id, const QString &goods_id, const QString &message);
    bool isMerchant();

public:
    static QString selectUserSQL(const QString &id);
    static QString insertUserSQL(const QString &id, const QString &password, const QString &status, const QString &name, const QString &birthday, const QString &phone, const QString &idcard, const QString &sex, const QString &occupation);
    static QString updateUserSQL(const QString &id, const QString &password, const QString &status, const QString &name, const QString &birthday, const QString &phone, const QString &idcard, const QString &sex, const QString &occupation);
    static QString selectGoodsSQL(const QString &id);
    static QString insertGoodsSQL(const QString &id, const QString &name, const QString &owner_id, const QString &start_city, const QString &end_city, const QString &start_date, const QString &end_date, double price, int count);
    static QString updateGoodsSQL(const QString &id, const QString &name, const QString &owner_id, const QString &start_city, const QString &end_city, const QString &start_date, const QString &end_date, double price, int count);
    static QString selectForumSQL(const QString &goods_id);
    static QString selectRecordationSQL(const QString &id);
    static QString selectInvitationSQL(const QString &id);
    static QString insertInvitationSQL(const QString &id, const QString &name, const QString &owner_id, const QString &summary, const QString &date, const QString &status);
    static QString updateInvitationSQL(const QString &id, const QString &name, const QString &owner_id, const QString &summary, const QString &date, const QString &status);

private:
    Context *m_context;
    Config m_config;
    DBManager m_dbmanager;
};

extern Runtime runtime;

#endif // RUNTIME_H
