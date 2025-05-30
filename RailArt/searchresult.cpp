#include "searchresult.h"
#include "ui_searchresult.h"
#include "datamodel.h"

SearchResult::SearchResult(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::SearchResult)
    , model(new QStandardItemModel(this))
{

    ui->setupUi(this);
    setWindowTitle("查询结果");

    model->setColumnCount(5);
    model->setHorizontalHeaderLabels({"车次", "始发站", "终到站", "时间", "价格"});
    ui->Result->setModel(model);
    ui->Result->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    connect(ui->back, &QPushButton::clicked,
            this, &SearchResult::backButton_clicked);
    connect(ui->sort_bytime, &QPushButton::clicked,
            this, &SearchResult::sort_bytime_clicked);
    connect(ui->sort_byprice, &QPushButton::clicked,
            this, &SearchResult::sort_byprice_clicked);
    connect(ui->switchButton, &QPushButton::clicked,
            this, &SearchResult::switchButton_clicked);
}

SearchResult::~SearchResult()
{
    delete ui;
}

void SearchResult::dispalyResults(const QVector<TrainInfo>& results) {
    allResults = results;
    showingDirect = true;
    updateTable();
}

void SearchResult::updateTable() {
    model->removeRows(0, model->rowCount());

    currentResults.clear();
    for (const auto& train : allResults) {
        bool isDirect = !train.num.contains("->");
        if ((showingDirect && isDirect) || (!showingDirect && !isDirect)) {
            currentResults.append(train);
        }
    }

    for (const auto &train : currentResults) {
        QList<QStandardItem*> row;

        // 车次（中转车次显示换乘标记）
        row << new QStandardItem(train.num + (showingDirect ? "" : " (中转)"));

        // 站点信息
        row << new QStandardItem(train.departure);
        row << new QStandardItem(train.arrival);

        // 计算并格式化时间
        int minutes = train.startTime.secsTo(train.endTime) / 60;
        QString duration = QString("%1h%2m").arg(minutes/60).arg(minutes%60, 2, 10, QChar('0'));
        QString timeText = QString("%1→%2  %3")
                               .arg(train.startTime.toString("hh:mm"))
                               .arg(train.endTime.toString("hh:mm"))
                               .arg(duration);
        row << new QStandardItem(timeText);

        // 价格
        row << new QStandardItem(QString::number(train.price, 'f', 1));

        model->appendRow(row);
    }

    // 更新按钮文字
    ui->switchButton->setText(showingDirect ? "显示中转" : "显示直达");
}

void SearchResult::backButton_clicked() {
    emit back_clicked();
}

void SearchResult::sort_bytime_clicked() {
    std::sort(allResults.begin(), allResults.end(),
        [](const TrainInfo& a, const TrainInfo& b) {
            return a.startTime.secsTo(a.endTime) < b.startTime.secsTo(b.endTime);
        });
    updateTable();
}

void SearchResult::sort_byprice_clicked() {

    std::sort(allResults.begin(), allResults.end(),
        [](const TrainInfo& a, const TrainInfo& b) {
        return a.price < b.price;
    });
    updateTable();
}

void SearchResult::switchButton_clicked() {
    showingDirect = !showingDirect;
    updateTable();
}
