#ifndef TEST_WIDGET_H
#define TEST_WIDGET_H
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>


class Test_Widget
{
public:
    QWidget *centralWidget;
       QScrollArea *scrollArea;
       QWidget *scrollAreaWidgetContents;
       QVBoxLayout *verticalLayout;
       QPushButton *pushButton;
       QPushButton *pushButton_2;
       QPushButton *pushButton_3;
       QPushButton *pushButton_4;
       QPushButton *pushButton_5;
       QPushButton *pushButton_6;
       QPushButton *pushButton_7;
       QPushButton *pushButton_8;
       QPushButton *pushButton_9;
       QPushButton *pushButton_10;
       QPushButton *pushButton_11;
       QPushButton *pushButton_12;
       QPushButton *pushButton_13;
       QPushButton *pushButton_14;
       QPushButton *pushButton_15;
       QPushButton *pushButton_16;
       QPushButton *pushButton_22;
       QPushButton *pushButton_21;
       QPushButton *pushButton_20;
       QPushButton *pushButton_19;
       QPushButton *pushButton_18;
       QPushButton *pushButton_17;
       QMenuBar *menuBar;
       QToolBar *mainToolBar;
       QStatusBar *statusBar;

       void setupUi(QMainWindow *MainWindow);
       void retranslateUi(QMainWindow *MainWindow);
};



#endif // TEST_WIDGET_H
