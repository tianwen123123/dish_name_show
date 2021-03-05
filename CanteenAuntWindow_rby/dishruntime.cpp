#include "dishruntime.h"
#include<QPushButton>
#include<QLabel>
#include<mypushbutton.h>
#include<imagechange.h>
#include<mainwindow.h>
#include<QDebug>
#include<QVector>

dishRuntime::dishRuntime(QWidget *parent) : QMainWindow(parent)
{
    this->setFixedSize(600,300);
    this->setWindowTitle("dishRuntime");
    QPushButton *btn1 = new QPushButton("返回配置菜品",this);
    btn1->move(this->width()*0.5-btn1->width()*0.5,this->height()*0.8);
    connect(btn1,&QPushButton::clicked,[=](){
        this->hide();
        emit this->choosebtn1();
    });

    ic = new imageChange;

    MainWindow *ptr = NULL;

    ptr = (MainWindow*)parentWidget();

    QVector<MyPushButton*> vm;

    int k = 8;
    for(int i = 1;i <= k;i++)
    {
        MyPushButton *mybtn = new MyPushButton(ic->images[ic->index]);
        mybtn->setParent(this);
        mybtn->setFixedSize(600/(k+1),300/5);
        if(i%(k/2)!=0)
        {
            mybtn->move((600/(k+1))*(2*(i%(k/2))-1),(300/5)*(2*(i/(k/2))+1));
        }
        else
        {
            mybtn->move((600/(k+1))*(2*(k/2)-1),(300/5)*(2*((i-1)/(k/2))+1));
        }
        vm.push_back(mybtn);

        QLabel *label = new QLabel;
        label->setParent(this);
        label->setFixedSize(600/(k+1),300/5);
        if(i%(k/2)!=0)
        {
            label->move((600/(k+1))*(2*(i%(k/2))-1),(300/5)*(2*(i/(k/2))+1));
        }
        else
        {
            label->move((600/(k+1))*(2*(k/2)-1),(300/5)*(2*((i-1)/(k/2))+1));
        }
        label->setText(QString::number(i));
        label->setAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
        label->setAttribute(Qt::WA_TransparentForMouseEvents);

        connect(mybtn,&MyPushButton::clicked,[=](){
            QPixmap pix(ic->NextImage());
            mybtn->setIcon(pix);
        });
    }
    connect(ptr,&MainWindow::update,[=](){
        qDebug()<<1;
        QPixmap pix(ic->NextImage());
        vm[ptr->index]->setIcon(pix);
    });
}
