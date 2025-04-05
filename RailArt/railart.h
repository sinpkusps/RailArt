#ifndef RAILART_H
#define RAILART_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class RailArt;
}
QT_END_NAMESPACE

class RailArt : public QMainWindow
{
    Q_OBJECT

public:
    RailArt(QWidget *parent = nullptr);
    ~RailArt();

private:
    Ui::RailArt *ui;
};
#endif // RAILART_H
