#include "ticketadder.h"
#include "ui_ticketadder.h"
#include <QMessageBox>

TicketAdder::TicketAdder(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::TicketAdder)
{
    ui->setupUi(this);
    connect(ui->buttonBox, &QDialogButtonBox::accepted,
            this, &TicketAdder::validateInput);
}

TicketAdder::~TicketAdder()
{
    delete ui;
}

TrainTicket TicketAdder::getTicketData() const {
    TrainTicket ticket;
    ticket.trainNumber = ui->TrainNum->text();
    ticket.departure = ui->Departure->text();
    ticket.arrival = ui->Arrival->text();
    ticket.startTime = ui->setoutTime->dateTime();
    ticket.endTime = ui->ArrivalTime->dateTime();
    ticket.price = ui->Price->text().toDouble();
    ticket.memo = ui->memoText->text();

    return ticket;
}

void TicketAdder::setTicketData(const TrainTicket &ticket) {
    ui->TrainNum->setText(ticket.trainNumber);
    ui->Departure->setText(ticket.departure);
    ui->Arrival->setText(ticket.arrival);
    ui->setoutTime->setDateTime(ticket.startTime);
    ui->ArrivalTime->setDateTime(ticket.endTime);
    ui->Price->setText(QString::number(ticket.price));
    ui->memoText->setText(ticket.memo);
}

void TicketAdder::validateInput() {

    qDebug() << "验证输入开始";
    if (ui->TrainNum->text().isEmpty()) {
        QMessageBox::warning(this, "错误", "请输入车次号");
        return;
    }
    if (ui->Departure->text().isEmpty()) {
        QMessageBox::warning(this, "错误", "请输入出发站");
        return;
    }
    if (ui->Arrival->text().isEmpty()) {
        QMessageBox::warning(this, "错误", "请输入到达站");
        return;
    }

    // 验证时间格式

    if (ui->setoutTime->dateTime() >= ui->ArrivalTime->dateTime()) {
        QMessageBox::warning(this, "错误", "到达时间必须晚于发车时间");
        return;
    }

    // 验证票价
    bool ok;
    double price = ui->Price->text().toDouble(&ok);
    if (!ok || price <= 0) {
        QMessageBox::warning(this, "错误", "请输入有效的票价（正数）");
        return;
    }
    qDebug() << "输入验证通过，准备 accept()";
    accept();
}


