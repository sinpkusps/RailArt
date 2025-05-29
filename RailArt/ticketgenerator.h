#ifndef TICKETGENERATOR_H
#define TICKETGENERATOR_H

#include <QWidget>

namespace Ui {
class TicketGenerator;
}

class TicketGenerator : public QWidget
{
    Q_OBJECT

public:
    explicit TicketGenerator(QWidget *parent = nullptr);
    ~TicketGenerator();

private slots:
    void backButton_clicked();

private:
    Ui::TicketGenerator *ui;
};

#endif // TICKETGENERATOR_H
