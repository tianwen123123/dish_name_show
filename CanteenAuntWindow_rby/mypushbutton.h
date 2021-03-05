#ifndef MYPUSHBUTTON_H
#define MYPUSHBUTTON_H

#include <QWidget>
#include<QPushButton>
#include<QString>

class MyPushButton : public QPushButton
{
    Q_OBJECT
public:
    MyPushButton(QString normalImgPath);
    QString normalImgPath;
signals:

public slots:
};

#endif // MYPUSHBUTTON_H
