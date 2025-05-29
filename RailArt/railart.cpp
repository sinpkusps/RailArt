#include "railart.h"
#include "ui_railart.h"
#include "trainsearch.h"
#include "ticketgenerator.h"
#include "tripmanager.h"
#include "achievementsystem.h"

RailArt::RailArt(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::RailArt)
{
    ui->setupUi(this);

    connect(ui->btnTrainSearch, &QPushButton::clicked,
            this, &RailArt::OpenTrainSearch);
    connect(ui->btnTicketGenerator, &QPushButton::clicked,
            this, &RailArt::OpenTicketGenerator);
    connect(ui->btnTripManager, &QPushButton::clicked,
            this, &RailArt::OpenTripManager);
    connect(ui->btnAchievementSystem, &QPushButton::clicked,
            this, &RailArt::OpenAchievementSystem);

    setWindowTitle("RailArt");
    resize(1000, 700);
}

RailArt::~RailArt()
{
    delete ui;
}


void RailArt::OpenTrainSearch()
{
    if(trainSearch) {
        trainSearch->show();
        trainSearch->raise();
    }

    trainSearch = new TrainSearch(nullptr);
    trainSearch->setAttribute(Qt::WA_DeleteOnClose);

    connect(trainSearch, &TrainSearch::destroyed,
            this, &RailArt::TrainSearch_closed);

    trainSearch->show();
}

void RailArt::TrainSearch_closed() {
    trainSearch = nullptr;
}

void RailArt::OpenTicketGenerator()
{
    if(ticketGenerator) {
        ticketGenerator->show();
        ticketGenerator->raise();
    }

    ticketGenerator = new TicketGenerator(nullptr);
    ticketGenerator->setAttribute(Qt::WA_DeleteOnClose);

    connect(ticketGenerator, &TicketGenerator::destroyed,
            this, &RailArt::TicketGenerator_closed);

    ticketGenerator->show();
}

void RailArt::TicketGenerator_closed() {
    ticketGenerator = nullptr;
}


void RailArt::OpenTripManager()
{
    if(tripManager) {
        tripManager->show();
        tripManager->raise();
    }

    tripManager = new TripManager();
    tripManager->setAttribute(Qt::WA_DeleteOnClose);

    connect(tripManager, &TripManager::destroyed,
            this, &RailArt::TripManager_closed);

    tripManager->show();
}

void RailArt::TripManager_closed() {
    tripManager = nullptr;
}


void RailArt::OpenAchievementSystem()
{
    if(achievementSystem) {
        achievementSystem->show();
        achievementSystem->raise();
    }

    achievementSystem = new AchievementSystem();
    achievementSystem->setAttribute(Qt::WA_DeleteOnClose);

    connect(achievementSystem, &AchievementSystem::destroyed,
            this, &RailArt::AchievementSystem_closed);

    achievementSystem->show();
}

void RailArt::AchievementSystem_closed() {
    achievementSystem = nullptr;
}

