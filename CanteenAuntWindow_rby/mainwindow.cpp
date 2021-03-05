#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QPushButton>
#include<QString>
#include<QLabel>
#include<QVector>
#include<QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    this->setWindowTitle("dishConfig");
    dishRuntimeWindow = new dishRuntime;
    dishSelectWindow = new dishSelect(20);

    QVector<QPushButton*> vb;
    QVector<QLabel*> vl;

    int k = 8;
    for(int i = 1;i <= k;i++)
    {
        QPushButton *btn = new QPushButton;
        btn->setParent(this);

        btn->setFixedSize(600/(k+1),300/5);
        if(i%(k/2)!=0)
        {
            btn->move((600/(k+1))*(2*(i%(k/2))-1),(300/5)*(2*(i/(k/2))+1));
        }
        else
        {
            btn->move((600/(k+1))*(2*(k/2)-1),(300/5)*(2*((i-1)/(k/2))+1));
        }
        vb.push_back(btn);

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
        vl.push_back(label);


    }

    for(int i = 1;i<=k;i++)
    {
        connect(vb[i-1],&QPushButton::clicked,[=](){
            this->hide();
            dishSelectWindow->show();
            dishSelectWindow->getIndex(i-1);
            this->used = true;
            connect(dishSelectWindow,&dishSelect::choosebtn,this,[=](){
            dishSelectWindow->hide();
            if(this->used)
            {
                QString name = dishSelectWindow->name;
                vl[dishSelectWindow->index]->setText(name);
                this->show();
                this->used = false;
                emit this->update();
                this->index = dishSelectWindow->index;
            }
            });
        });
    }



    QPushButton *btn0 = new QPushButton("用餐进行时",this);
    btn0->move(this->width()*0.5-btn0->width()*0.5,this->height()*0.8);
    connect(btn0,&QPushButton::clicked,[=](){
       this->hide();
       dishRuntimeWindow->show();
       connect(dishRuntimeWindow,&dishRuntime::choosebtn1,this,[=](){
           dishRuntimeWindow->hide();
           this->show();
       });
    });

}

MainWindow::~MainWindow()
{
    delete ui;
}
