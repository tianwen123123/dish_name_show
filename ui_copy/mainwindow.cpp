#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "newwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    newwindow (new NewWindow(this))
{
    ui->setupUi(this);
    connect(ui->newwindow_Button,&QPushButton::clicked,newwindow,[=](){
        newwindow->show();
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}
