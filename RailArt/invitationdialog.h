#ifndef INVITATIONDIALOG_H
#define INVITATIONDIALOG_H

#include <QDialog>
#include "runtime.h"

namespace Ui
{
    class InvitationDialog;
}

enum class INVITATION_DIALOG
{
    CREATE,
    MODIFY,
    READONLY
};

class InvitationDialog : public QDialog
{
    Q_OBJECT

public:
    explicit InvitationDialog(const QString &id, INVITATION_DIALOG mode, QWidget *parent = nullptr);
    ~InvitationDialog();

private slots:
    void on_pushButtonCommit_clicked();
    void on_pushButtonMessage_clicked();
    void on_tabWidget_currentChanged(int index);

private:
    // 下载数据
    void download();
    // 上传数据
    void upload();
    // 更新消息列表
    void updateMessageList();

private:
    QString m_id;

private:
    Ui::InvitationDialog *ui;
    QString m_imagefile;
    INVITATION_DIALOG m_mode;
};

#endif // EDITPAPERDIALOG_H
