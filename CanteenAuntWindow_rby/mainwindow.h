#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<dishruntime.h>
#include<dishselect.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    dishRuntime *dishRuntimeWindow = nullptr;
    dishSelect *dishSelectWindow = nullptr;
    bool used = true;
    int index;
signals:
    void update();
public:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
