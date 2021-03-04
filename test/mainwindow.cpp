#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "form.h"
//#include "Test_Widget.h"
//#include<QLabel>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),//test_widget(new Test_Widget),
    ui(new Ui::MainWindow),form(new Form)
{
    ui->setupUi(this);
    //test_widget->setupUi(this);


    connect(ui->actionOpen,&QAction::triggered,form,[=](){
        form->show();
        form->setWindowTitle("newform");
    });

    /*
    QWidget *newWin = new QWidget;
    connect(ui->actionOpen,&QAction::triggered,newWin,[=](){
       newWin->show();
       newWin->setWindowTitle("new");
    });

    QPushButton *btn = new QPushButton("btn",this);
    btn->move(100,100);

    QLabel *label = new QLabel("kkk",this);
    //label->setObjectName(QStringLiteral("label"));
    label->setGeometry(QRect(160, 170, 50, 11));
    connect(btn,&QPushButton::clicked,label,[=](){
        label->setText("lll");
    });
    */
}

MainWindow::~MainWindow()
{
    delete ui;

}
