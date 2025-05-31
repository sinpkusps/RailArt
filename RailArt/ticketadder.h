#ifndef TICKETADDER_H
#define TICKETADDER_H

#include <QDialog>
#include "ticketdata.h"

namespace Ui {
class TicketAdder;
}

class TicketAdder : public QDialog
{
    Q_OBJECT

public:
    explicit TicketAdder(QWidget *parent = nullptr);
    ~TicketAdder();
    TrainTicket getTicketData() const ;
    void validateInput();
    void setTicketData(const TrainTicket& ticket);

signals:
    void ticketCreated(const TrainTicket& ticket);

public slots:

private:
    Ui::TicketAdder *ui;
};

#endif // TICKETADDER_H
