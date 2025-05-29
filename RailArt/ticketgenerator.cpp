#include "ticketgenerator.h"
#include "ui_ticketgenerator.h"

TicketGenerator::TicketGenerator(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::TicketGenerator)
{
    ui->setupUi(this);

    setWindowTitle("车票生成器");

    connect(ui->backButton, &QPushButton::clicked,
            this, &TicketGenerator::backButton_clicked);
}

TicketGenerator::~TicketGenerator()
{
    delete ui;
}

void TicketGenerator::backButton_clicked() {
    this->close();
}
