#ifndef DISHRUNTIME_H
#define DISHRUNTIME_H

#include <QMainWindow>
#include<imagechange.h>

class dishRuntime : public QMainWindow
{
    Q_OBJECT
public:
    explicit dishRuntime(QWidget *parent = nullptr);
    imageChange *ic = nullptr;
signals:
    void choosebtn1();

public slots:
};

#endif // DISHRUNTIME_H
