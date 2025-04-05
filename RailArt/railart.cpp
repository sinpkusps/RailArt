#include "railart.h"
#include "ui_railart.h"

RailArt::RailArt(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::RailArt)
{
    ui->setupUi(this);
}

RailArt::~RailArt()
{
    delete ui;
}
