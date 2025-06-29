#ifndef RECORDATIONDIALOG_H
#define RECORDATIONDIALOG_H

#include <QDialog>
#include "runtime.h"
#include <QSqlQueryModel>

namespace Ui
{
    class RecordationDialog;
}

class RecordationDialog : public QDialog
{
    Q_OBJECT

public:
    explicit RecordationDialog(const QString &id, QWidget *parent = nullptr);
    ~RecordationDialog();

private slots:
    void on_recshoucang_clicked();

private:
    void initTableView();

private:
    void download();

private:
    Ui::RecordationDialog *ui;

private:
    QString m_id;
    QSqlQueryModel *m_modelitem; // 待支付订单列表
};

#endif // RECORDATIONDIALOG_H
