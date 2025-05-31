#include <QMessageBox>
#include "trainsearch.h"
#include "searchresult.h"
#include "ui_trainsearch.h"

TrainSearch::TrainSearch(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::TrainSearch),
    resultWindow(nullptr)
{
    ui->setupUi(this);

    setWindowTitle("车票查询");
    dataloader.loadFromCSV(":/resources/data/trains.csv");

    connect(ui->backButton, &QPushButton::clicked,
            this, &TrainSearch::backButton_clicked);
    connect(ui->SearchButton, &QPushButton::clicked,
            this, &TrainSearch::searchButton_clicked);
}

TrainSearch::~TrainSearch()
{
    delete ui;
}

void TrainSearch::backButton_clicked() {
    this->close();
}

void TrainSearch::searchButton_clicked() {
    QString from = ui->departure->text().trimmed();
    QString to = ui->arrival->text().trimmed();

    if(from.isEmpty() || to.isEmpty()) {
        QMessageBox::warning(this, "提示", "请输入出发地与目的地");
        return;
    }

    QVector<TrainInfo> results;
    results = dataloader.search(from, to);
    results += dataloader.findTransferRoutes(from, to);

    showResultWindow(results);
}

void TrainSearch::showResultWindow(const QVector<TrainInfo>& results) {
    if(!resultWindow) {
        resultWindow = new SearchResult();
        connect(resultWindow, &SearchResult::back_clicked, this, [this]() {
            resultWindow->hide();
            this->show();
        });
    }

    resultWindow->dispalyResults(results);
    resultWindow->show();
}
