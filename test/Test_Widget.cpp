#include "Test_Widget.h"

void Test_Widget::setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1000, 1000);
        MainWindow->setMinimumSize(QSize(1000, 1000));
        MainWindow->setMaximumSize(QSize(1000, 1000));


        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));


        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(0, 100, 991, 941));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 989, 939));


        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));



        pushButton = new QPushButton(scrollAreaWidgetContents);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(scrollAreaWidgetContents);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(scrollAreaWidgetContents);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(scrollAreaWidgetContents);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        verticalLayout->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(scrollAreaWidgetContents);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        verticalLayout->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(scrollAreaWidgetContents);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));

        verticalLayout->addWidget(pushButton_6);

        pushButton_7 = new QPushButton(scrollAreaWidgetContents);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));

        verticalLayout->addWidget(pushButton_7);

        pushButton_8 = new QPushButton(scrollAreaWidgetContents);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));

        verticalLayout->addWidget(pushButton_8);

        pushButton_9 = new QPushButton(scrollAreaWidgetContents);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));

        verticalLayout->addWidget(pushButton_9);

        pushButton_10 = new QPushButton(scrollAreaWidgetContents);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));

        verticalLayout->addWidget(pushButton_10);

        pushButton_11 = new QPushButton(scrollAreaWidgetContents);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));

        verticalLayout->addWidget(pushButton_11);

        pushButton_12 = new QPushButton(scrollAreaWidgetContents);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));

        verticalLayout->addWidget(pushButton_12);

        pushButton_13 = new QPushButton(scrollAreaWidgetContents);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));

        verticalLayout->addWidget(pushButton_13);

        pushButton_14 = new QPushButton(scrollAreaWidgetContents);
        pushButton_14->setObjectName(QStringLiteral("pushButton_14"));

        verticalLayout->addWidget(pushButton_14);

        pushButton_15 = new QPushButton(scrollAreaWidgetContents);
        pushButton_15->setObjectName(QStringLiteral("pushButton_15"));

        verticalLayout->addWidget(pushButton_15);

        pushButton_16 = new QPushButton(scrollAreaWidgetContents);
        pushButton_16->setObjectName(QStringLiteral("pushButton_16"));

        verticalLayout->addWidget(pushButton_16);

        pushButton_22 = new QPushButton(scrollAreaWidgetContents);
        pushButton_22->setObjectName(QStringLiteral("pushButton_22"));

        verticalLayout->addWidget(pushButton_22);

        pushButton_21 = new QPushButton(scrollAreaWidgetContents);
        pushButton_21->setObjectName(QStringLiteral("pushButton_21"));

        verticalLayout->addWidget(pushButton_21);

        pushButton_20 = new QPushButton(scrollAreaWidgetContents);
        pushButton_20->setObjectName(QStringLiteral("pushButton_20"));

        verticalLayout->addWidget(pushButton_20);

        pushButton_19 = new QPushButton(scrollAreaWidgetContents);
        pushButton_19->setObjectName(QStringLiteral("pushButton_19"));

        verticalLayout->addWidget(pushButton_19);

        pushButton_18 = new QPushButton(scrollAreaWidgetContents);
        pushButton_18->setObjectName(QStringLiteral("pushButton_18"));

        verticalLayout->addWidget(pushButton_18);

        pushButton_17 = new QPushButton(scrollAreaWidgetContents);
        pushButton_17->setObjectName(QStringLiteral("pushButton_17"));

        verticalLayout->addWidget(pushButton_17);

        scrollArea->setWidget(scrollAreaWidgetContents);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1000, 19));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi



void Test_Widget::retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "PushButton", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "PushButton", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "PushButton", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainWindow", "PushButton", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("MainWindow", "PushButton", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("MainWindow", "PushButton", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("MainWindow", "PushButton", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("MainWindow", "PushButton", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("MainWindow", "PushButton", Q_NULLPTR));
        pushButton_10->setText(QApplication::translate("MainWindow", "PushButton", Q_NULLPTR));
        pushButton_11->setText(QApplication::translate("MainWindow", "PushButton", Q_NULLPTR));
        pushButton_12->setText(QApplication::translate("MainWindow", "PushButton", Q_NULLPTR));
        pushButton_13->setText(QApplication::translate("MainWindow", "PushButton", Q_NULLPTR));
        pushButton_14->setText(QApplication::translate("MainWindow", "PushButton", Q_NULLPTR));
        pushButton_15->setText(QApplication::translate("MainWindow", "PushButton", Q_NULLPTR));
        pushButton_16->setText(QApplication::translate("MainWindow", "PushButton", Q_NULLPTR));
        pushButton_22->setText(QApplication::translate("MainWindow", "PushButton", Q_NULLPTR));
        pushButton_21->setText(QApplication::translate("MainWindow", "PushButton", Q_NULLPTR));
        pushButton_20->setText(QApplication::translate("MainWindow", "PushButton", Q_NULLPTR));
        pushButton_19->setText(QApplication::translate("MainWindow", "PushButton", Q_NULLPTR));
        pushButton_18->setText(QApplication::translate("MainWindow", "PushButton", Q_NULLPTR));
        pushButton_17->setText(QApplication::translate("MainWindow", "PushButton", Q_NULLPTR));
    } // retranslateUi

