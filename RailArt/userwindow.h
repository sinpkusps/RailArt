#ifndef USERWINDOW_H
#define USERWINDOW_H

#include "runtime.h"
#include "ticketgenerator.h"
#include <QMainWindow>
#include <QSqlQueryModel>
#include <QStandardItemModel>
#include <QMessageBox>

namespace Ui
{
    class UserWindow;
}

// 用户窗口管理类
class UserWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit UserWindow(QWidget *parent = nullptr);
    ~UserWindow();

private slots:
    void on_actionAccount_triggered();
    void on_actionQuit_triggered();
    void on_tabWidget_currentChanged(int index);
    void on_tableViewGoods_doubleClicked(const QModelIndex &index);
    void on_pushButtonGoodsCart_clicked();
    void on_pushButtonGoodsReturn_clicked();
    void on_pushButtonGoodsSearch_clicked();
    void on_pushButtonGoodsRefresh_clicked();
    void on_tableViewRecordation_doubleClicked(const QModelIndex &index);
    void on_pushButtonRecordationSearch_clicked();
    void on_pushButtonRecordationRefresh_clicked();
    void on_tableViewMyGoods_doubleClicked(const QModelIndex &index);
    void on_pushButtonMyGoodsAdd_clicked();
    void on_pushButtonMyGoodsRemove_clicked();
    void on_pushButtonMyGoodsSearch_clicked();
    void on_pushButtonMyGoodsRefresh_clicked();
    void on_pushButtonCartPay_clicked();
    void on_pushButtonCartRemove_clicked();
    void on_pushButtonCartRefresh_clicked();
    void on_tableViewCart_doubleClicked(const QModelIndex &index);
    void on_tableViewInvitation_doubleClicked(const QModelIndex &index);
    void on_pushButtonInvitationAdd_clicked();
    void on_pushButtonInvitationRefresh_clicked();
    void on_pushButtonShoucangRefresh_clicked();
    void TicketGenerator_closed();

    void on_pushButto_update_clicked();

    void on_pushButto_create_clicked();

private:
    void initTableView();
    void initStatusBar();

private:
    void refreshTableViewGoods();
    void refreshTableViewCart();
    void refreshTableViewRecordation();
    void refreshTableViewInvitation();
    void refreshTableViewMyGoods();
    void refreshTableViewShoucang();

private:
    TicketGenerator* ticketGenerator = nullptr;
    Ui::UserWindow *ui;
    QSqlQueryModel *m_modelgoods;       // 车次列表
    QSqlQueryModel *m_modelcart;        // 待支付订单列表
    QSqlQueryModel *m_modelrecordation; // 订单记录
    QSqlQueryModel *m_modelinvitation;  // 反馈列表
    QSqlQueryModel *m_modelmygoods;     // 我的车次列表
    QStandardItemModel *m_modelshoucang; // 收藏列表
};

#endif // USERWINDOW_H
