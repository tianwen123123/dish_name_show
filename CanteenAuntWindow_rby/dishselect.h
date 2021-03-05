#ifndef DISHSELECT_H
#define DISHSELECT_H

#include <QMainWindow>
#include<QScrollArea>
#include<QWidget>
#include<QVBoxLayout>

class dishSelect : public QMainWindow
{
    Q_OBJECT
public:
    explicit dishSelect(int btn_number);
    dishSelect();
    QScrollArea *scrollArea = nullptr;
    QWidget *centralWidget = nullptr;

    QWidget *scrollAreaWidgetContents = nullptr;
    QVBoxLayout *verticalLayout = nullptr;

    QString name;
    int index;
    int dishIndex;
    void getIndex(int index)
    {
        this->index = index;
    }
    void getDishIndex(int index)
    {
        this->dishIndex = index;
    }
signals:
    void choosebtn();
    void update();
public slots:
private:
    int btn_number;
};

#endif // DISHSELECT_H
