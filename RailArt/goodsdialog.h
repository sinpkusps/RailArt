#ifndef GOODSDIALOG_H
#define GOODSDIALOG_H

#include <QDialog>
#include "runtime.h"

namespace Ui
{
    class GoodsDialog;
}

enum class GOODS_DIALOG
{
    CREATE,
    MODIFY,
    READONLY
};

// 车次信息对话框管理类
class GoodsDialog : public QDialog
{
    Q_OBJECT

public:
    explicit GoodsDialog(const QString &id, GOODS_DIALOG mode, QWidget *parent = nullptr);
    ~GoodsDialog();

private slots:
    void on_pushButtonCommit_clicked();
    void on_pushButtonImage_clicked();
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
    Ui::GoodsDialog *ui;
    QString m_imagefile;
    GOODS_DIALOG m_mode;
};

#endif // EDITPAPERDIALOG_H
