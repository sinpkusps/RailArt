#ifndef TICKETDATA_H
#define TICKETDATA_H
#include <QString>
#include <QDateTime>

class TrainTicket {
public:
    QString trainNumber;  // 车次号
    QString departure;    // 出发站
    QString arrival;      // 到达站
    QDateTime startTime;  // 发车时间
    QDateTime endTime;    // 到达时间
    double price;         // 票价
    QString memo;         // 备注字段

    bool operator==(const TrainTicket& other) const {
        return trainNumber == other.trainNumber &&
               departure == other.departure &&
               arrival == other.arrival &&
               startTime == other.startTime &&
               endTime == other.endTime &&
               price == other.price;
    }
};

#endif // TICKETDATA_H
