#include "tripmanager.h"
#include "ui_tripmanager.h"

TripManager::TripManager(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::TripManager)
{
    ui->setupUi(this);

    setWindowTitle("行程管理");

    connect(ui->backButton, &QPushButton::clicked,
            this, &TripManager::backButton_clicked);
}

TripManager::~TripManager()
{
    delete ui;
}

void TripManager::backButton_clicked() {
    this->close();
}
