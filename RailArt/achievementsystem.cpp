#include "achievementsystem.h"
#include "ui_achievementsystem.h"

AchievementSystem::AchievementSystem(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::AchievementSystem)
{
    ui->setupUi(this);

    setWindowTitle("成就系统");

    connect(ui->backButton, &QPushButton::clicked,
            this, &AchievementSystem::backButton_clicked);
}

AchievementSystem::~AchievementSystem()
{
    delete ui;
}

void AchievementSystem::backButton_clicked() {
    this->close();
}
