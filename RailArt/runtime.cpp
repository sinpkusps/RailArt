#include "runtime.h"
#include <QSettings>
#include <QCoreApplication>
#include <QFile>
#include <QDateTime>
#include <QDebug>

Runtime::Runtime()
    : m_context(nullptr)
{
}

Runtime::~Runtime()
{
    if (m_context)
    {
        delete m_context;
        m_context = nullptr;
    }
}

void Runtime::init()
{
    m_config.load();
}

void Runtime::setContext(const QString &id, const QString &name, ROLE role)
{
    if (!m_context)
    {
        m_context = new Context(id, name, role);
    }
    else
    {
        m_context->id = id;
        m_context->name = name;
        m_context->role = role;
    }
}

Context *Runtime::getContext()
{
    return m_context;
}

Config &Runtime::getConfig()
{
    return m_config;
}

bool Runtime::startDBManager()
{
    m_dbmanager.check();
    return m_dbmanager.start();
}

DBManager &Runtime::getDBManager()
{
    return m_dbmanager;
}

QString Runtime::generateID(const QString &name, int width, const QString &prefix)
{
    QString id;
    QSqlQuery query = runtime.getDBManager().query();
    if (query.exec(QString("SELECT current FROM counter WHERE name='%1'").arg(name)))
    {
        if (query.next())
        {
            id = QString("%1%2").arg(prefix).arg(query.value(0).toInt() + 1, width, 10, QLatin1Char('0'));
            query.exec(QString("UPDATE counter SET current=current+1 WHERE name='%1'").arg(name));
        }
    }
    return id;
}

void Runtime::getUserList(QSqlQueryModel *model)
{
    QString sql = QString(
        "SELECT "
        "id as '账号', "
        "status as '状态', "
        "name as '姓名', "
        "sex as '性别', "
        "birthday as '生日', "
        "phone as '电话', "
        "idcard as '身份证号码', "
        "occupation as '身份', "
        "balance as '余额' "
        "FROM user "
        "Order By id");
    model->setQuery(sql, m_dbmanager.getDB());
}

void Runtime::searchUserList(QSqlQueryModel *model, const QString &filter)
{
    QString sql = QString(
                      "SELECT "
                      "id as '账号', "
                      "status as '状态', "
                      "name as '姓名', "
                      "sex as '性别', "
                      "birthday as '生日', "
                      "phone as '电话', "
                      "idcard as '身份证号码', "
                      "occupation as '身份', "
                      "balance as '余额' "
                      "FROM user "
                      "WHERE %1 "
                      "Order By id")
                      .arg(filter);

    model->setQuery(sql, m_dbmanager.getDB());
}

void Runtime::getGoodsList(QSqlQueryModel *model)
{
    QString sql = QString(
        "SELECT "
        "id as '车次序列号', "
        "name as '车次名称', "
        "start_city as '起点城市', "
        "end_city as '终点城市', "
        "start_date as '发车时间', "
        "end_date as '到达时间', "
        "price as '票价', "
        "count as '总票数', "
        "lend as '售出', "
        "count-lend as '余票数' "
        "FROM goods "
        "Order By id ");
    model->setQuery(sql, m_dbmanager.getDB());
}

void Runtime::getGoodsList(QSqlQueryModel *model, const QString &user_id)
{
    QString sql = QString(
                      "SELECT "
                      "id as '车次序列号', "
                      "name as '车次名称', "
                      "start_city as '起点城市', "
                      "end_city as '终点城市', "
                      "start_date as '发车时间', "
                      "end_date as '到达时间', "
                      "price as '票价', "
                      "count as '总票数', "
                      "lend as '售出', "
                      "count-lend as '余票数' "
                      "FROM goods "
                      "WHERE owner_id='%1' "
                      "Order By id ")
                      .arg(user_id);
    model->setQuery(sql, m_dbmanager.getDB());
}

void Runtime::searchGoodsList(QSqlQueryModel *model, const QString &filter)
{
    QString sql = QString(
                      "SELECT "
                      "id as '车次序列号', "
                      "name as '车次名称', "
                      "start_city as '起点城市', "
                      "end_city as '终点城市', "
                      "start_date as '发车时间', "
                      "end_date as '到达时间', "
                      "price as '票价', "
                      "count as '总票数', "
                      "lend as '售出', "
                      "count-lend as '余票数' "
                      "FROM goods "
                      "WHERE %1 "
                      "Order By id")
                      .arg(filter);
    model->setQuery(sql, m_dbmanager.getDB());
}

void Runtime::getCartList(QSqlQueryModel *model, const QString &user_id)
{
    QString sql = QString(
                      "SELECT "
                      "id as '流水号', "
                      "goods_id as '车次序列号', "
                      "(SELECT name FROM goods WHERE id=item.goods_id) as '车次名称', "
                      "price as '票价', "
                      "quantity as '数量', "
                      "price * quantity as '金额' "
                      "FROM item "
                      "WHERE user_id='%1' AND record_id='wait'"
                      "Order By id ")
                      .arg(user_id);
    model->setQuery(sql, m_dbmanager.getDB());
}

void Runtime::getItemList(QSqlQueryModel *model, const QString &record_id)
{
    QString sql = QString(
                      "SELECT "
                      "id as '流水号', "
                      "goods_id as '车次序列号', "
                      "(SELECT name FROM goods WHERE id=item.goods_id) as '车次名称', "
                      "(SELECT start_city FROM goods WHERE id=item.goods_id) as '起点城市', "
                      "(SELECT end_city FROM goods WHERE id=item.goods_id) as '终点城市', "
                      "(SELECT start_date FROM goods WHERE id=item.goods_id) as '发车时间', "
                      "(SELECT end_date FROM goods WHERE id=item.goods_id) as '到达时间', "
                      "price as '票价', "
                      "quantity as '数量', "
                      "price * quantity as '金额' "
                      "FROM item "
                      "WHERE record_id='%1'"
                      "Order By id ")
                      .arg(record_id);
    model->setQuery(sql, m_dbmanager.getDB());
}

void Runtime::getRecordationList(QSqlQueryModel *model)
{
    QString sql = QString(
        "SELECT "
        "id as '流水号', "
        "user_id as '账号', "
        "(SELECT name FROM user WHERE id=recordation.user_id) as '姓名', "
        "money as '消费金额', "
        "status as '状态', "
        "starttime as '购票时间', "
        "endtime as '退票时间' "
        "FROM recordation "
        "Order By id ");
    model->setQuery(sql, m_dbmanager.getDB());
}

void Runtime::searchRecordationList(QSqlQueryModel *model, const QString &filter)
{
    QString sql = QString(
                      "SELECT "
                      "id as '流水号', "
                      "user_id as '账号', "
                      "(SELECT name FROM user WHERE id=recordation.user_id) as '姓名', "
                      "money as '消费金额', "
                      "status as '状态', "
                      "starttime as '购票时间', "
                      "endtime as '退票时间' "
                      "FROM recordation "
                      "WHERE %1"
                      "Order By id ")
                      .arg(filter);
    model->setQuery(sql, m_dbmanager.getDB());
}

void Runtime::getRecordationList(QSqlQueryModel *model, const QString &user_id)
{
    QString sql = QString(
                      "SELECT "
                      "id as '流水号', "
                      "user_id as '账号', "
                      "(SELECT name FROM user WHERE id=recordation.user_id) as '姓名', "
                      "money as '消费金额', "
                      "status as '状态', "
                      "starttime as '购票时间', "
                      "endtime as '退票时间' "
                      "FROM recordation "
                      "WHERE user_id='%1' "
                      "Order By id ")
                      .arg(user_id);
    model->setQuery(sql, m_dbmanager.getDB());
}

void Runtime::searchRecordationList(QSqlQueryModel *model, const QString &filter, const QString &user_id)
{
    QString sql = QString(
                      "SELECT "
                      "id as '流水号', "
                      "user_id as '账号', "
                      "(SELECT name FROM user WHERE id=recordation.user_id) as '姓名', "
                      "money as '消费金额', "
                      "status as '状态', "
                      "starttime as '购票时间', "
                      "endtime as '退票时间' "
                      "FROM recordation "
                      "WHERE user_id='%1' AND %2 "
                      "Order By id ")
                      .arg(user_id)
                      .arg(filter);
    model->setQuery(sql, m_dbmanager.getDB());
}

void Runtime::getInvitationList(QSqlQueryModel *model)
{
    QString sql = QString(
        "SELECT "
        "id as '反馈登记号', "
        "name as '标题', "
        "owner_id as '作者账号', "
        "summary as '内容', "
        "date as '日期', "
        "status as '状态' "
        "FROM invitation "
        "Order By id ");
    model->setQuery(sql, m_dbmanager.getDB());
}

void Runtime::getInvitationList(QSqlQueryModel *model, const QString &user_id)
{
    QString sql = QString(
                      "SELECT "
                      "id as '反馈登记号', "
                      "name as '标题', "
                      "owner_id as '作者账号', "
                      "summary as '内容', "
                      "date as '日期', "
                      "status as '状态' "
                      "FROM invitation "
                      "WHERE owner_id='%1' "
                      "Order By id ")
                      .arg(user_id);
    model->setQuery(sql, m_dbmanager.getDB());
}

void Runtime::getStatisticsList(QSqlQueryModel *model)
{
    QString sql = QString(
        "SELECT "
        "id as '车次序列号', "
        "name as '车次名称', "
        "start_date as '发车时间', "
        "end_date as '到达时间', "
        "price as '票价', "
        "lend as '售出数量', "
        "price*lend as '销售额' "
        "FROM goods "
        "Order By id ");
    model->setQuery(sql, m_dbmanager.getDB());
}

void Runtime::searchStatisticsList(QSqlQueryModel *model, const QString &filter)
{
    QString sql = QString(
                      "SELECT "
                      "id as '车次序列号', "
                      "name as '车次名称', "
                      "start_date as '发车时间', "
                      "end_date as '到达时间', "
                      "price as '票价', "
                      "lend as '售出数量', "
                      "price*lend as '销售额' "
                      "FROM goods "
                      "WHERE %1 "
                      "Order By id")
                      .arg(filter);
    model->setQuery(sql, m_dbmanager.getDB());
}

bool Runtime::cartGoods(const QString &user_id, const QString &goods_id, int quantity, QString &message)
{
    QString sql = QString("SELECT owner_id, price, count-lend FROM goods WHERE id='%1'")
                      .arg(goods_id);
    QSqlQuery query = m_dbmanager.query();

    if (query.exec(sql))
    {
        if (query.next())
        {
            QString owner_id = query.value(0).toString();
            double price = query.value(1).toDouble();
            int residue = query.value(2).toInt();
            if (residue >= quantity)
            {
                if (owner_id != user_id)
                {
                    QString sql = QString(
                                      "INSERT INTO item(id, record_id, user_id, goods_id, owner_id, price, quantity)"
                                      "VALUES('%1', '%2', '%3', '%4', '%5', %6, %7)")
                                      .arg(generateID("item"))
                                      .arg("wait")
                                      .arg(user_id)
                                      .arg(goods_id)
                                      .arg(owner_id)
                                      .arg(price)
                                      .arg(quantity);

                    if (query.exec(sql))
                    {
                        message = "已添加到待支付订单！";
                        return true;
                    }
                    else
                    {
                        message = "添加待支付订单请求出错！";
                    }
                }
                else
                {
                    message = "不能购票自己发布的车次！";
                }
            }
            else
            {
                message = "余票数量不足，购票失败！";
            }
        }
        else
        {
            message = "车次不存在！";
        }
    }
    else
    {
        message = "车次信息请求出错！";
    }
    return false;
}

bool Runtime::payCart(const QString &user_id, QString &message)
{
    QString sql = QString(
                      "SELECT "
                      "sum(price * quantity) "
                      "FROM item "
                      "WHERE user_id='%1' AND record_id='wait'"
                      "Order By id ")
                      .arg(user_id);

    QSqlQuery query = m_dbmanager.query();
    if (query.exec(sql))
    {
        if (query.next())
        {
            double money = query.value(0).toDouble();
            if (money <= balanceUser(user_id))
            {
                QString sql = QString(
                                  "SELECT "
                                  "id, "
                                  "goods_id, "
                                  "price, "
                                  "quantity, "
                                  "(SELECT count-lend FROM goods WHERE id=item.goods_id) "
                                  "FROM item "
                                  "WHERE item.user_id='%1' AND record_id='wait'")
                                  .arg(user_id);

                if (query.exec(sql))
                {
                    QStringList sqllist;
                    QString itemlist;
                    double cost = 0;
                    QString record_id = generateID("record");
                    while (query.next())
                    {
                        QString id = query.value(0).toString();
                        QString goods_id = query.value(1).toString();
                        double price = query.value(2).toDouble();
                        int quantity = query.value(3).toInt();
                        int residue = query.value(4).toInt();
                        if (quantity <= residue)
                        {
                            cost += price * quantity;
                            itemlist += QString("流水号(%1)购票成功，购票数量：%2，金额：%3元\n").arg(id).arg(quantity).arg(price * quantity);
                            sqllist.append(QString("UPDATE item SET record_id='%1' WHERE id='%2'").arg(record_id).arg(id));
                            sqllist.append(QString("UPDATE goods SET lend=lend+%1 WHERE id='%2'").arg(quantity).arg(goods_id));
                        }
                        else
                        {
                            itemlist += QString("流水号(%1)的库存仅为%2，购票失败！\n").arg(id).arg(residue);
                        }
                    }
                    for (auto &sql : sqllist)
                    {
                        query.exec(sql);
                    }
                    QString sql = QString(
                                      "INSERT INTO recordation(id, user_id, money, status, starttime)"
                                      "VALUES('%1', '%2', %3, '%4', '%5')")
                                      .arg(record_id)
                                      .arg(user_id)
                                      .arg(cost)
                                      .arg("售出")
                                      .arg(QDateTime::currentDateTime().toString("yyyy/MM/dd hh:mm:ss"));
                    if (query.exec(sql))
                    {
                        message = itemlist;
                        message += "-------------\n";
                        message += QString("【总消费额：%1】").arg(cost);
                        consumeUser(user_id, cost);
                        return true;
                    }
                }
            }
            else
            {
                message = "余额不足，请先充值！";
            }
        }
    }
    return false;
}

bool Runtime::returnGoods(const QString &user_id, const QString &recordation_id)
{
    QString sql = QString(
                      "SELECT "
                      "money "
                      "FROM recordation "
                      "WHERE id='%1' AND status='售出'")
                      .arg(recordation_id);

    QSqlQuery query = m_dbmanager.query();
    if (query.exec(sql))
    {
        if (query.next())
        {
            double money = query.value(0).toDouble();
            if (query.exec(QString("UPDATE recordation SET status='退票', endtime='%2' WHERE id='%1'").arg(recordation_id).arg(QDateTime::currentDateTime().toString("yyyy/MM/dd hh:mm:ss"))))
            {
                rechargeUser(user_id, money);

                QString sql = QString(
                                  "SELECT "
                                  "id, "
                                  "goods_id, "
                                  "owner_id, "
                                  "price, "
                                  "quantity "
                                  "FROM item "
                                  "WHERE record_id='%1'")
                                  .arg(recordation_id);

                if (query.exec(sql))
                {
                    QStringList sqllist;
                    while (query.next())
                    {
                        QString id = query.value(0).toString();
                        QString goods_id = query.value(1).toString();
                        QString owner_id = query.value(2).toString();
                        double price = query.value(3).toDouble();
                        int quantity = query.value(4).toInt();
                        sqllist.append(QString("UPDATE goods SET lend=lend-%1 WHERE id='%2'").arg(quantity).arg(goods_id));
                    }
                    for (auto &sql : sqllist)
                    {
                        query.exec(sql);
                    }
                    return true;
                }
            }
        }
    }
    return false;
}

bool Runtime::rechargeUser(const QString &user_id, double money)
{
    QString sql = QString(
                      "UPDATE user SET "
                      "balance = balance + %2 "
                      "WHERE id = '%1'")
                      .arg(user_id)
                      .arg(money);
    QSqlQuery query = m_dbmanager.query();
    if (query.exec(sql))
    {
        return true;
    }
    return false;
}

bool Runtime::consumeUser(const QString &user_id, double money)
{
    QString sql = QString(
                      "UPDATE user SET "
                      "balance = balance - %2 "
                      "WHERE id = '%1'")
                      .arg(user_id)
                      .arg(money);
    QSqlQuery query = m_dbmanager.query();
    if (query.exec(sql))
    {
        if (query.next())
        {
            return true;
        }
    }
    return false;
}

double Runtime::balanceUser(const QString &user_id)
{
    QString sql = QString(
                      "SELECT balance FROM user "
                      "WHERE id = '%1'")
                      .arg(user_id);
    QSqlQuery query = m_dbmanager.query();
    if (query.exec(sql))
    {
        if (query.next())
        {
            return query.value(0).toDouble();
        }
    }
    return 0;
}

bool Runtime::sendMessage(const QString &user_id, const QString &goods_id, const QString &message)
{
    QString sql = QString("INSERT INTO forum(id, user_id, goods_id, message, time)"
                          "VALUES('%1', '%2', '%3', ?, '%4')")
                      .arg(generateID("forum"))
                      .arg(user_id)
                      .arg(goods_id)
                      .arg(QDateTime::currentDateTime().toString("yyyy/MM/dd^hh:mm:ss"));
    QSqlQuery query = getDBManager().query();
    query.prepare(sql);
    query.addBindValue(message);
    return query.exec();
}

bool Runtime::isMerchant()
{
    QString sql = QString("SELECT occupation FROM user WHERE id = '%1'")
                      .arg(getContext()->id);
    QSqlQuery query = m_dbmanager.query();
    if (query.exec(sql))
    {
        if (query.next())
        {
            return (query.value(0).toString() == "内勤");
        }
    }
    return false;
}

QString Runtime::selectUserSQL(const QString &id)
{
    return QString("SELECT * FROM user WHERE id = '%1'")
        .arg(id);
}

QString Runtime::insertUserSQL(const QString &id, const QString &password, const QString &status, const QString &name, const QString &birthday, const QString &phone, const QString &idcard, const QString &sex, const QString &occupation)
{
    return QString(
               "INSERT INTO user(id, password, status, name, birthday, phone, idcard, sex, occupation, balance)"
               "VALUES('%1', '%2', '%3', '%4', '%5', '%6', '%7', '%8', '%9', %10)")
        .arg(id)
        .arg(password)
        .arg(status)
        .arg(name)
        .arg(birthday)
        .arg(phone)
        .arg(idcard)
        .arg(sex)
        .arg(occupation)
        .arg(0);
}

QString Runtime::updateUserSQL(const QString &id, const QString &password, const QString &status, const QString &name, const QString &birthday, const QString &phone, const QString &idcard, const QString &sex, const QString &occupation)
{
    return QString(
               "UPDATE user SET "
               "password = '%2', "
               "status = '%3', "
               "name = '%4', "
               "birthday = '%5', "
               "phone = '%6', "
               "idcard = '%7', "
               "sex = '%8', "
               "occupation = '%9' "
               "WHERE id = '%1'")
        .arg(id)
        .arg(password)
        .arg(status)
        .arg(name)
        .arg(birthday)
        .arg(phone)
        .arg(idcard)
        .arg(sex)
        .arg(occupation);
}

QString Runtime::selectGoodsSQL(const QString &id)
{
    return QString("SELECT * FROM goods WHERE id = '%1'")
        .arg(id);
}

QString Runtime::insertGoodsSQL(const QString &id, const QString &name, const QString &owner_id, const QString &start_city, const QString &end_city, const QString &start_date, const QString &end_date, double price, int count)
{
    return QString(
               "INSERT INTO goods(id, name, owner_id, start_city, end_city, start_date, end_date, price, count, lend, img)"
               "VALUES('%1', '%2', '%3', '%4', '%5', '%6', '%7', %8, %9, %10, ?)")
        .arg(id)
        .arg(name)
        .arg(owner_id)
        .arg(start_city)
        .arg(end_city)
        .arg(start_date)
        .arg(end_date)
        .arg(price)
        .arg(count)
        .arg(0);
}

QString Runtime::updateGoodsSQL(const QString &id, const QString &name, const QString &owner_id, const QString &start_city, const QString &end_city, const QString &start_date, const QString &end_date, double price, int count)
{
    return QString(
               "UPDATE goods SET "
               "name = '%2', "
               "owner_id = '%3', "
               "start_city = '%4', "
               "end_city = '%5', "
               "start_date = '%6', "
               "end_date = '%7', "
               "price = %8, "
               "count = %9 "
               "WHERE id = '%1'")
        .arg(id)
        .arg(name)
        .arg(owner_id)
        .arg(start_city)
        .arg(end_city)
        .arg(start_date)
        .arg(end_date)
        .arg(price)
        .arg(count);
}

QString Runtime::selectForumSQL(const QString &goods_id)
{
    return QString(
               "SELECT user_id, user.name, message, time FROM forum, user WHERE user.id=forum.user_id AND goods_id='%1' ORDER BY time")
        .arg(goods_id);
}

QString Runtime::selectRecordationSQL(const QString &id)
{
    return QString(
               "SELECT "
               "id, "
               "user_id, "
               "(SELECT name FROM user WHERE id=recordation.user_id), "
               "money, "
               "status, "
               "starttime, "
               "endtime "
               "FROM recordation "
               "WHERE id='%1'")
        .arg(id);
}

QString Runtime::selectInvitationSQL(const QString &id)
{
    return QString("SELECT * FROM invitation WHERE id = '%1'")
        .arg(id);
}

QString Runtime::insertInvitationSQL(const QString &id, const QString &name, const QString &owner_id, const QString &summary, const QString &date, const QString &status)
{
    return QString(
               "INSERT INTO invitation(id, name, owner_id, summary, date, status)"
               "VALUES('%1', '%2', '%3', '%4', '%5', '%6')")
        .arg(id)
        .arg(name)
        .arg(owner_id)
        .arg(summary)
        .arg(date)
        .arg(status);
}

QString Runtime::updateInvitationSQL(const QString &id, const QString &name, const QString &owner_id, const QString &summary, const QString &date, const QString &status)
{
    return QString(
               "UPDATE invitation SET "
               "name = '%2', "
               "owner_id = '%3', "
               "summary = '%4', "
               "date = '%5', "
               "status = '%6' "
               "WHERE id = '%1'")
        .arg(id)
        .arg(name)
        .arg(owner_id)
        .arg(summary)
        .arg(date)
        .arg(status);
}

Runtime runtime;
