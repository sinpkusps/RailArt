#ifndef SEARCHDIALOG_H
#define SEARCHDIALOG_H

#include <QDialog>

namespace Ui
{
    class SearchDialog;
}

// 搜索对话框管理类
class SearchDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SearchDialog(QWidget *parent = nullptr);
    ~SearchDialog();

public:
    void addOption(const QString &text, const QString &name);
    void make();
    const QString &getName() const;
    const QString &getKeyword() const;
    QString formatTime() const;
    QString formatLike() const;
    QString formatEqual() const;
    QString formatNumber() const;

private slots:
    void on_pushButton_clicked();

private:
    Ui::SearchDialog *ui;
    QStringList m_textlist;
    QStringList m_namelist;
    QString m_name;
    QString m_keyword;
};

#endif // SEARCHDIALOG_H
