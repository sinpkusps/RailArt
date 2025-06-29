#include "searchdialog.h"
#include "ui_searchdialog.h"
#include <QMessageBox>

SearchDialog::SearchDialog(QWidget *parent) : QDialog(parent),
                                              ui(new Ui::SearchDialog)
{
    ui->setupUi(this);
    ui->lineEdit->setFocus();
    ui->pushButton->setDefault(true);
}

SearchDialog::~SearchDialog()
{
    delete ui;
}

void SearchDialog::addOption(const QString &text, const QString &name)
{
    m_textlist << text;
    m_namelist << name;
}

void SearchDialog::make()
{
    if (m_textlist.size())
    {
        ui->comboBox->addItems(m_textlist);
    }
    else
    {
        delete ui->comboBox;
    }
}

const QString &SearchDialog::getName() const
{
    return m_name;
}

const QString &SearchDialog::getKeyword() const
{
    return m_keyword;
}

QString SearchDialog::formatTime() const
{
    return QString("DATE_FORMAT(%1, '%Y/%c/%e %k:%i:%s') LIKE '%%2%'")
        .arg(getName())
        .arg(getKeyword());
}

QString SearchDialog::formatLike() const
{
    return QString("%1 LIKE '%%2%'")
        .arg(getName())
        .arg(getKeyword());
}

QString SearchDialog::formatEqual() const
{
    return QString("%1 = '%2'")
        .arg(getName())
        .arg(getKeyword());
}

QString SearchDialog::formatNumber() const
{
    if (getKeyword().size() > 1 && getKeyword().mid(0, 2) == "<=")
    {
        return QString("%1 <= %2")
            .arg(getName())
            .arg(getKeyword().mid(2));
    }

    if (getKeyword().size() > 1 && getKeyword().mid(0, 2) == ">=")
    {
        return QString("%1 >= %2")
            .arg(getName())
            .arg(getKeyword().mid(2));
    }

    if (getKeyword().size() > 1 && getKeyword().mid(0, 1) == "<")
    {
        return QString("%1 < %2")
            .arg(getName())
            .arg(getKeyword().mid(1));
    }

    if (getKeyword().size() > 1 && getKeyword().mid(0, 1) == ">")
    {
        return QString("%1 > %2")
            .arg(getName())
            .arg(getKeyword().mid(1));
    }

    return QString("%1 = %2")
        .arg(getName())
        .arg(getKeyword());
}

void SearchDialog::on_pushButton_clicked()
{
    m_keyword = ui->lineEdit->text().trimmed();
    if (m_keyword.isEmpty())
    {
        QMessageBox::warning(this, "提示", "请输入搜索关键字");
        return;
    }
    m_name = m_namelist[ui->comboBox->currentIndex()];
    accept();
}
