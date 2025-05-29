#include "trainsearch.h"
#include "ui_trainsearch.h"

TrainSearch::TrainSearch(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::TrainSearch)
{
    ui->setupUi(this);

    setWindowTitle("车票查询");

    connect(ui->backButton, &QPushButton::clicked,
            this, &TrainSearch::backButton_clicked);
}

TrainSearch::~TrainSearch()
{
    delete ui;
}

void TrainSearch::backButton_clicked() {
    this->close();
}
