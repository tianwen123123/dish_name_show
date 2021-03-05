#include "mypushbutton.h"
#include<QDebug>

MyPushButton::MyPushButton(QString normalImg)
{
    QPixmap pix;
    pix.load(normalImg);

    this->setFixedSize(150,150);
    this->setStyleSheet("QPushButton{border:0px;}");

    this->setIcon(pix);
    this->setIconSize(QSize(60,60));
}
