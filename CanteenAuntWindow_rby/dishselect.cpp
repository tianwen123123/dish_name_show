#include "dishselect.h"
#include<QPushButton>
#include<QLabel>
#include<QDebug>
#include<QVector>
#include<food.h>

dishSelect::dishSelect(int btn_number)
{
    this->setWindowTitle("dishSelect");
    this->btn_number = btn_number;
    this->setFixedSize(300,500);

    dishSelect *ds = new dishSelect;

    scrollArea = new QScrollArea(this);
    scrollArea->setGeometry(QRect(0, 0, this->width(), this->height()));
    scrollArea->setWidgetResizable(false);
    scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);

    scrollAreaWidgetContents = new QWidget(scrollArea);
    scrollAreaWidgetContents->setGeometry(QRect(0, 0,this->width(),btn_number*50));

    scrollArea->setWidget(scrollAreaWidgetContents);

    QVector<char*> v = {"ji","yu","niu","dan","rousi","xiangguo","mifan","xigua"};
    QVector<Food> vf;
    QVector<QPushButton*> vb;
    QVector<QLabel*> vl;
    for(int i = 0;i<8;i++)
    {
        Food food ;
        food.name = v[i];
        vf.push_back(food);
    }

    for(int i = 0;i < 8;i++)
    {
        QPushButton *btn = new QPushButton(scrollAreaWidgetContents);
        btn->setFixedSize(scrollArea->width()-22,50);
        btn->move(0,i*50);
        vb.push_back(btn);

        QLabel *label = new QLabel;
        label->setParent(btn);
        label->setFixedSize(scrollArea->width()-22,50);
        label->setText(vf[i].name);
        label->setAlignment(Qt::AlignVCenter|Qt::AlignHCenter);
        label->setAttribute(Qt::WA_TransparentForMouseEvents);

        connect(vb[i],&QPushButton::clicked,[=](){
            this->name = vf[i].name;
            emit this->choosebtn();
            emit this->update();
        });
    }

}
dishSelect::dishSelect(){}

