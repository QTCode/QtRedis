#ifndef qReadisTest_H
#define qReadisTest_H

#include <QObject>
#include <QDebug>
#include <QMap>
#include "qRedis.h"
#include <QTime>

class qReadisTest : public QObject
{
    Q_OBJECT
public:
    explicit qReadisTest(QObject *parent = 0);
    ~qReadisTest();

    void startTest();

signals:
    
public slots:
    void slotMessage(qRedis::Reply);

private:
    qRedis *redis;
};

#endif // qReadisTest_H
