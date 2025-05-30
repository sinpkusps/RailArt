#include "ticketgenerator.h"
#include "ui_ticketgenerator.h"
#include <QPainter>
#include <QtMath>

TicketGenerator::TicketGenerator(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::TicketGenerator)
{
    ui->setupUi(this);

    setWindowTitle("车票生成器");

    this->setFixedSize(720, 490);

    connect(ui->backButton, &QPushButton::clicked,
            this, &TicketGenerator::backButton_clicked);
    connect(ui->saveButton, &QPushButton::clicked,
            this, &TicketGenerator::saveButton_clicked);
    connect(ui->buttom_text, &QTextEdit::textChanged,
            this, &TicketGenerator::updateTicketGenerator);
    connect(ui->jianpiaokou, &QTextEdit::textChanged,
            this, &TicketGenerator::updateTicketGenerator);
    connect(ui->shifa, &QTextEdit::textChanged,
            this, &TicketGenerator::updateTicketGenerator);
    connect(ui->zhongdao, &QTextEdit::textChanged,
            this, &TicketGenerator::updateTicketGenerator);
    connect(ui->zhongdao_English, &QTextEdit::textChanged,
            this, &TicketGenerator::updateTicketGenerator);
    connect(ui->shifa_English, &QTextEdit::textChanged,
            this, &TicketGenerator::updateTicketGenerator);
    connect(ui->price, &QTextEdit::textChanged,
            this, &TicketGenerator::updateTicketGenerator);
    connect(ui->text, &QTextEdit::textChanged,
            this, &TicketGenerator::updateTicketGenerator);
    connect(ui->id_and_name, &QTextEdit::textChanged,
            this, &TicketGenerator::updateTicketGenerator);
    connect(ui->train_number, &QTextEdit::textChanged,
            this, &TicketGenerator::updateTicketGenerator);
    connect(ui->day, &QLineEdit::textChanged,
            this, &TicketGenerator::updateTicketGenerator);
    connect(ui->month, &QLineEdit::textChanged,
            this, &TicketGenerator::updateTicketGenerator);
    connect(ui->year, &QLineEdit::textChanged,
            this, &TicketGenerator::updateTicketGenerator);
    connect(ui->seat, &QLineEdit::textChanged,
            this, &TicketGenerator::updateTicketGenerator);
    connect(ui->seat_class, &QLineEdit::textChanged,
            this, &TicketGenerator::updateTicketGenerator);
    connect(ui->set_out_time, &QLineEdit::textChanged,
            this, &TicketGenerator::updateTicketGenerator);
    connect(ui->train_index, &QLineEdit::textChanged,
            this, &TicketGenerator::updateTicketGenerator);

    // 所有的连接函数

    //设置字体
    ui->jianpiaokou->setFont(QFont("Arial", 18));
    ui->shifa->setFont(QFont("微软雅黑", 26));
    ui->zhongdao->setFont(QFont("微软雅黑", 26));
    ui->train_number->setFont(QFont("Arial", 26));
    ui->shifa_English->setFont(QFont("Arial", 18));
    ui->zhongdao_English->setFont(QFont("Arial", 18));
    ui->day->setFont(QFont("Arial", 26));
    ui->month->setFont(QFont("Arial", 26));
    ui->year->setFont(QFont("Arial", 26));
    ui->set_out_time->setFont(QFont("Arial", 26));
    ui->train_index->setFont(QFont("Arial", 26));
    ui->price->setFont(QFont("Arial", 20));
    ui->seat_class->setFont(QFont("宋体", 26));
    ui->id_and_name->setFont(QFont("微软雅黑", 22));
    ui->text->setFont(QFont("微软雅黑", 14));
    ui->buttom_text->setFont(QFont("Arial", 18));
    ui->seat->setFont(QFont("Arial", 26));

    // 将所有控件设置为可编辑状态
    ui->shifa->setReadOnly(false);
    ui->shifa->setEnabled(true);
    ui->zhongdao->setReadOnly(false);
    ui->zhongdao->setEnabled(true);
    ui->zhongdao_English->setReadOnly(false);
    ui->zhongdao_English->setEnabled(true);
    ui->shifa_English->setReadOnly(false);
    ui->shifa_English->setEnabled(true);
    ui->buttom_text->setReadOnly(false);
    ui->buttom_text->setEnabled(true);
    ui->text->setReadOnly(false);
    ui->text->setEnabled(true);
    ui->set_out_time->setReadOnly(false);
    ui->day->setEnabled(true);
    ui->day->setReadOnly(false);
    ui->year->setEnabled(true);
    ui->year->setReadOnly(false);
    ui->month->setEnabled(true);
    ui->month->setReadOnly(false);
    ui->id_and_name->setEnabled(true);
    ui->id_and_name->setReadOnly(false);
    ui->jianpiaokou->setEnabled(true);
    ui->jianpiaokou->setReadOnly(false);
    ui->price->setEnabled(true);
    ui->price->setReadOnly(false);
    ui->seat->setEnabled(true);
    ui->seat->setReadOnly(false);
    ui->seat_class->setEnabled(true);
    ui->seat_class->setReadOnly(false);
    ui->set_out_time->setEnabled(true);
    ui->train_index->setReadOnly(false);
    ui->train_index->setEnabled(true);
    ui->train_number->setReadOnly(false);
    ui->train_number->setEnabled(true);

}

QString getFilename() {
    bool ok;
    QString text = QInputDialog::getText(nullptr, "保存车票", "请输入文件名：", QLineEdit::Normal, "车票", &ok);
    return ok ? text + ".png" : QString();
}

QString getSaveDirectory() {
                           return QFileDialog::getExistingDirectory(nullptr, "选择保存位置",
                                                                    QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation),
                                                                    QFileDialog::ShowDirsOnly);
}

TicketGenerator::~TicketGenerator()
{
    delete ui;
}

void TicketGenerator::backButton_clicked() {
    this->close();
}

void TicketGenerator::updateTicketGenerator() {
    ui->ticket->repaint();
}

void TicketGenerator::saveButton_clicked() {
    this->save_ticket();
}

void TicketGenerator::save_ticket() {
    QString filename = getFilename();
    if(filename.isEmpty()) return;

    QString dir = getSaveDirectory();
    if(dir.isEmpty()) return;

    QString fullPath = QDir(dir).filePath(filename);

    QPixmap ticket_img = ui->ticket->grab();

    QPixmap final_ticket(ticket_img);
    final_ticket.fill(Qt::transparent);
    QPainter painter(&final_ticket);
    painter.drawPixmap(0, 0, ticket_img);

    int qrSize = ticket_img.width() / 5;
    QPixmap qrCode = generateQRCode(qrSize);
    painter.drawPixmap(ticket_img.width() - qrSize - 20, ticket_img.height() - qrSize - 20, qrCode);
    painter.end();

    final_ticket.save(fullPath);
}

QPixmap TicketGenerator::generateQRCode(int size) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, 2);

    QPixmap qrPixmap(size, size);
    qrPixmap.fill(Qt::white);

    QPainter painter(&qrPixmap);
    painter.setRenderHint(QPainter::Antialiasing);

    int moduleSize = size / 21;

    for (int y = 0; y < 21; y++) {
        for (int x = 0; x < 21; x++) {
            if (dis(gen) == 0) {
                painter.fillRect(
                    x * moduleSize,
                    y * moduleSize,
                    moduleSize,
                    moduleSize,
                    Qt::black
                    );
            }
        }
    }

    painter.setPen(QPen(Qt::black, 2));
    painter.drawRect(0, 0, 7 * moduleSize, 7 * moduleSize);
    painter.drawRect(14 * moduleSize, 0, 7 * moduleSize, 7 * moduleSize);
    painter.drawRect(0, 14 * moduleSize, 7 * moduleSize, 7 * moduleSize);

    return qrPixmap;
}
