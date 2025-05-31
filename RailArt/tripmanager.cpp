#include "tripmanager.h"
#include "ui_tripmanager.h"
#include "ticketadder.h"
#include <QFile>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonDocument>
#include <QInputDialog>
#include <QMessageBox>
#include <QSettings>
#include <QFileDialog>
#include <QStandardPaths>
#include <QSaveFile>

TripManager::TripManager(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::TripManager)
    , model(new QStandardItemModel(this))
{
    ui->setupUi(this);

    setWindowTitle("行程管理");

    connect(ui->backButton, &QPushButton::clicked,
            this, &TripManager::backButton_clicked);
    connect(ui->newTicket, &QPushButton::clicked,
            this, &TripManager::addTicket);
    connect(ui->EditTicket, &QPushButton::clicked,
            this, &TripManager::editTicket);
    connect(ui->RemoveTicket, &QPushButton::clicked,
            this, &TripManager::removeTicket);
    connect(ui->selectFile, &QPushButton::clicked,
            this, &TripManager::selectJsonFile);
    QSettings settings;
    currentJsonPath = settings.value("lastJsonPath").toString();

    // if(currentJsonPath.isEmpty() || !QFile::exists(currentJsonPath)) {
    //     selectJsonFile();
    // } else {
    //     loadTickets();
    // }

    setupTableHeader();
    ui->TicketList->setModel(model);
    initDataFile();
    loadTickets();
    refreshTable();

}

QString TripManager::getDefaultDataPath()
{
    QString appDir = QCoreApplication::applicationDirPath();
    return QDir(appDir).filePath("tickets.json");
}

void TripManager::initDataFile()
{
    QString defaultPath = getDefaultDataPath();

    if (!QFile::exists(defaultPath)) {
        QFile file(defaultPath);
        if (file.open(QIODevice::WriteOnly)) {
            file.write("[]");
            file.close();
        }
    }

    currentJsonPath = defaultPath;
    QSettings().setValue("lastJsonPath", defaultPath); // 记住路径
}

void TripManager::selectJsonFile()
{
    QString path = QFileDialog::getOpenFileName(
        this,
        "选择车票数据文件",
        QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation),
        "JSON文件 (*.json);;所有文件 (*.*)"
        );

    if(!path.isEmpty()) {
        currentJsonPath = path;
        QSettings().setValue("lastJsonPath", path);
        loadTickets();
        updateWindowTitle();
    }
}

void TripManager::updateWindowTitle()
{
    QString fileName = QFileInfo(currentJsonPath).fileName();
    setWindowTitle(QString("行程管理 - %1").arg(fileName));
}

TripManager::~TripManager()
{
    delete ui;
}

void TripManager::backButton_clicked() {
    this->close();
}

void TripManager::setupTableHeader() {
    // 设置列标题
    model->setHorizontalHeaderLabels({
        "车次", "出发站", "到达站",
        "发车时间", "到达时间", "票价", "备注"
    });

    // 设置列宽自适应
    ui->TicketList->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    // 启用排序（点击表头排序）
    ui->TicketList->setSortingEnabled(true);
}

void TripManager::loadTickets()
{
    QFile file(currentJsonPath);
    if (file.open(QIODevice::ReadOnly)) {
        QJsonDocument doc = QJsonDocument::fromJson(file.readAll());
        QJsonArray array = doc.array();

        tickets.clear();
        for (const QJsonValue &value : array) {
            QJsonObject obj = value.toObject();
            TrainTicket ticket;
            ticket.trainNumber = obj["trainNumber"].toString();
            ticket.departure = obj["departure"].toString();
            ticket.arrival = obj["arrival"].toString();
            ticket.startTime = QDateTime::fromString(obj["startTime"].toString(), Qt::ISODate);
            ticket.endTime = QDateTime::fromString(obj["endTime"].toString(), Qt::ISODate);
            ticket.price = obj["price"].toDouble();
            ticket.memo = obj["memo"].toString();
            tickets.append(ticket);
        }
        file.close();
    }
}

void TripManager::saveTickets()
{
    if(currentJsonPath.isEmpty()) {
        QMessageBox::warning(this, "错误", "未选择数据文件");
        return;
    }

    QSaveFile file(currentJsonPath);
    if(file.open(QIODevice::WriteOnly)) {
        QJsonArray array;
        for (const TrainTicket &ticket : tickets) {
            QJsonObject obj;
            obj["trainNumber"] = ticket.trainNumber;
            obj["departure"] = ticket.departure;
            obj["arrival"] = ticket.arrival;
            obj["startTime"] = ticket.startTime.toString(Qt::ISODate);
            obj["endTime"] = ticket.endTime.toString(Qt::ISODate);
            obj["price"] = ticket.price;
            obj["memo"] = ticket.memo;
            array.append(obj);
        }

        QJsonDocument doc(array);
        if(file.write(doc.toJson()) == -1) {
            QMessageBox::warning(this, "错误", "写入文件失败");
            return;
        }

        if(!file.commit()) {
            QMessageBox::warning(this, "错误", "保存文件失败: " + file.errorString());
        }
    } else {
        QMessageBox::warning(this, "错误", "无法打开文件: " + file.errorString());
    }

}

void TripManager::refreshTable() {
    model->removeRows(0, model->rowCount());  // 清空现有数据

    for (const TrainTicket &ticket : tickets) {
        QList<QStandardItem*> rowItems;

        rowItems << new QStandardItem(ticket.trainNumber);
        rowItems << new QStandardItem(ticket.departure);
        rowItems << new QStandardItem(ticket.arrival);
        rowItems << new QStandardItem(ticket.startTime.toString("yyyy-MM-dd hh:mm"));
        rowItems << new QStandardItem(ticket.endTime.toString("yyyy-MM-dd hh:mm"));
        rowItems << new QStandardItem(QString::number(ticket.price));
        rowItems << new QStandardItem(ticket.memo);

        model->appendRow(rowItems);
    }
}

void TripManager::addTicket()
{
    // 添加新车票
    ticketAdder = new TicketAdder(this);
    if (ticketAdder->exec() == QDialog::Accepted) {
        TrainTicket newTicket = ticketAdder->getTicketData();
        tickets.append(newTicket);
        saveTickets();
        refreshTable();
    }
    delete ticketAdder;
}

void TripManager::editTicket()
{
    QModelIndexList selected = ui->TicketList->selectionModel()->selectedRows();
    if (selected.isEmpty()) {
        QMessageBox::warning(this, "警告", "请先选择要编辑的车票");
        return;
    }

    int currentRow = selected.first().row();
    if (currentRow >= 0 && currentRow < tickets.size()) {
        TicketAdder *ticketAdder = new TicketAdder(this);

        // 将当前车票数据传入编辑对话框
        ticketAdder->setTicketData(tickets[currentRow]);

        if (ticketAdder->exec() == QDialog::Accepted) {
            TrainTicket editedTicket = ticketAdder->getTicketData();
            tickets.replace(currentRow, editedTicket);
            saveTickets();
            refreshTable();
        }
        delete ticketAdder;
    }
}

void TripManager::removeTicket() {
    // 获取选中行
    QModelIndexList selected = ui->TicketList->selectionModel()->selectedRows();
    if (selected.isEmpty()) {
        QMessageBox::warning(this, "警告", "请先选择要删除的车票");
        return;
    }

    // 确认对话框
    if (QMessageBox::question(this, "确认删除",
                              "确定要删除选中的车票吗？",
                              QMessageBox::Yes | QMessageBox::No) == QMessageBox::No) {
        return;
    }

    // 从后往前删除避免索引错乱
    QList<int> rows;
    for (const QModelIndex &index : selected) {
        rows.append(index.row());
    }
    std::sort(rows.begin(), rows.end(), std::greater<int>());

    for (int row : rows) {
        if (row >= 0 && row < tickets.size()) {
            tickets.removeAt(row);
        }
    }

    saveTickets();
    refreshTable();
}
