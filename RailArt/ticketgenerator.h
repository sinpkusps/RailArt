#ifndef TICKETGENERATOR_H
#define TICKETGENERATOR_H

#include <QWidget>
#include <QPixmap>
#include <QInputDialog>
#include <QMessageBox>
#include <QFileDialog>
#include <QStandardPaths>
#include <QString>
#include <stdlib.h>
#include <random>

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
    void saveButton_clicked();
    void updateTicketGenerator();
    void save_ticket();

private:
    Ui::TicketGenerator *ui;
    QPixmap generateQRCode(int size);
};

#endif // TICKETGENERATOR_H
