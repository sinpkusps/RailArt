#ifndef ADMINWINDOW_H
#define ADMINWINDOW_H

#include "runtime.h"
#include <QMainWindow>
#include <QtSql/QSqlQueryModel>

QT_BEGIN_NAMESPACE
namespace Ui
{
    class AdminWindow;
}
QT_END_NAMESPACE

// 管理员窗口管理类
class AdminWindow : public QMainWindow
{
    Q_OBJECT

public:
    AdminWindow(QWidget *parent = nullptr);
    ~AdminWindow();

private slots:
    void on_actionQuit_triggered();
    void on_actionAccount_triggered();
    void on_tabWidget_currentChanged(int index);
    // 用户双击用户表中的某一项
    void on_tableViewUser_doubleClicked(const QModelIndex &index);
    // 添加用户信息按钮被点击
    void on_pushButtonUserAdd_clicked();
    // 删除用户信息按钮被点击
    void on_pushButtonUserRemove_clicked();
    // 搜索用户信息按钮被点击
    void on_pushButtonUserSearch_clicked();
    // 刷新用户按钮被点击
    void on_pushButtonUserRefresh_clicked();
    void on_tableViewGoods_doubleClicked(const QModelIndex &index);
    void on_pushButtonGoodsAdd_clicked();
    void on_pushButtonGoodsRemove_clicked();
    void on_pushButtonGoodsSearch_clicked();
    void on_pushButtonGoodsRefresh_clicked();
    void on_pushButtonRecordationSearch_clicked();
    void on_pushButtonRecordationRefresh_clicked();
    void on_pushButtonStatisticsSearch_clicked();
    void on_pushButtonStatisticsRefresh_clicked();
    void on_tableViewInvitation_doubleClicked(const QModelIndex &index);
    void on_pushButtonInvitationRefresh_clicked();

private:
    void initTableView();
    void initStatusBar();

private:
    void refreshTableViewUser();
    void refreshTableViewGoods();
    void refreshTableViewRecordation();
    void refreshTableViewInvitation();
    void refreshTableViewStatistics();

private:
    Ui::AdminWindow *ui;
    QSqlQueryModel *m_modeluser;        // 用户信息
    QSqlQueryModel *m_modelgoods;       // 车次列表
    QSqlQueryModel *m_modelrecordation; // 购票记录
    QSqlQueryModel *m_modelstatistics;  // 售票统计
    QSqlQueryModel *m_modelinvitation;  // 反馈列表
};
#endif // ADMINWINDOW_H
