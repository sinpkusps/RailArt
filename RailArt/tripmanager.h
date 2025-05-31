#ifndef TRIPMANAGER_H
#define TRIPMANAGER_H

#include <QWidget>
#include <QObject>
#include <QVector>
#include <QList>
#include <QStandardItemModel>
#include "ticketadder.h"
#include "ticketdata.h"

namespace Ui {
class TripManager;
}

class TripManager : public QWidget
{
    Q_OBJECT

public:
    explicit TripManager(QWidget *parent = nullptr);
    ~TripManager();
    QString currentJsonPath;
    void loadTickets();
    void saveTickets();
    void refreshTable();
    QString getDefaultDataPath();
    void initDataFile();

signals:

public slots:
    void backButton_clicked();
    void addTicket();
    void editTicket();
    void removeTicket();

private:
    Ui::TripManager *ui;
    QList<TrainTicket> tickets;
    TicketAdder* ticketAdder;
    QStandardItemModel *model;
    void setupTableHeader();
    void selectJsonFile();
    void updateWindowTitle();
};

#endif // TRIPMANAGER_H
