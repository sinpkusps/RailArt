#ifndef RAILART_H
#define RAILART_H

#include <QMainWindow>
#include <QMetaObject>
#include <QInputDialog>
#include <QMessageBox>

class TrainSearch;
class TicketGenerator;
class TripManager;
class AchievementSystem;

QT_BEGIN_NAMESPACE
namespace Ui {
class RailArt;
}
QT_END_NAMESPACE

class RailArt : public QMainWindow
{
    Q_OBJECT

public:
    RailArt(QWidget *parent = nullptr);
    ~RailArt();

private slots:
    void OpenTrainSearch();

    void OpenTicketGenerator();

    void OpenTripManager();

    void OpenAchievementSystem();

    void TicketGenerator_closed();

    void TrainSearch_closed();

    void TripManager_closed();

    void AchievementSystem_closed();

private:
    Ui::RailArt *ui;
    TrainSearch* trainSearch = nullptr;
    TicketGenerator* ticketGenerator = nullptr;
    TripManager* tripManager = nullptr;
    AchievementSystem* achievementSystem = nullptr;
};
#endif // RAILART_H
