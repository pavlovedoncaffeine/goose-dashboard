/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QVBoxLayout *ttsContainer;
    QLabel *label_12;
    QLabel *tts;
    QVBoxLayout *podStateContainer;
    QLabel *label_10;
    QLabel *podState;
    QVBoxLayout *mbTempContainer;
    QLabel *label_8;
    QLabel *motherboardTemperature;
    QVBoxLayout *propTemperatureContainer;
    QLabel *label_6;
    QLabel *propulsionTemperature;
    QVBoxLayout *brakingTemperatureContainer;
    QLabel *label_7;
    QLabel *brakingTemperature;
    QVBoxLayout *accelerationContainer;
    QLabel *label_5;
    QLabel *acceleration;
    QVBoxLayout *velocityContainer;
    QLabel *label_3;
    QLabel *velocity;
    QVBoxLayout *distanceContainer;
    QLabel *label_4;
    QLabel *distance;
    QPushButton *brakeButton;
    QLabel *label;
    QLabel *label_2;
    QPushButton *readyButton;
    QPushButton *accelButton;

    void setupUi(QWidget *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 600);
        gridLayoutWidget = new QWidget(MainWindow);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 781, 581));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        ttsContainer = new QVBoxLayout();
        ttsContainer->setObjectName(QStringLiteral("ttsContainer"));
        label_12 = new QLabel(gridLayoutWidget);
        label_12->setObjectName(QStringLiteral("label_12"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_12->setFont(font);
        label_12->setStyleSheet(QLatin1String("margin-top: 5px;\n"
"margin-left: 5px;\n"
"margin-right: 5px;\n"
"background: black;\n"
"color: white;"));

        ttsContainer->addWidget(label_12);

        tts = new QLabel(gridLayoutWidget);
        tts->setObjectName(QStringLiteral("tts"));
        QFont font1;
        font1.setPointSize(15);
        tts->setFont(font1);
        tts->setStyleSheet(QLatin1String("margin-bottom: 5px;\n"
"margin-left: 5px;\n"
"margin-right: 5px;\n"
"background: white;"));

        ttsContainer->addWidget(tts);


        gridLayout->addLayout(ttsContainer, 2, 3, 1, 1);

        podStateContainer = new QVBoxLayout();
        podStateContainer->setObjectName(QStringLiteral("podStateContainer"));
        label_10 = new QLabel(gridLayoutWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setFont(font);
        label_10->setStyleSheet(QLatin1String("margin-top: 5px;\n"
"margin-left: 5px;\n"
"margin-right: 5px;\n"
"background: black;\n"
"color: white;"));

        podStateContainer->addWidget(label_10);

        podState = new QLabel(gridLayoutWidget);
        podState->setObjectName(QStringLiteral("podState"));
        podState->setFont(font1);
        podState->setStyleSheet(QLatin1String("margin-bottom: 5px;\n"
"margin-left: 5px;\n"
"margin-right: 5px;\n"
"background: white;"));

        podStateContainer->addWidget(podState);


        gridLayout->addLayout(podStateContainer, 2, 2, 1, 1);

        mbTempContainer = new QVBoxLayout();
        mbTempContainer->setObjectName(QStringLiteral("mbTempContainer"));
        label_8 = new QLabel(gridLayoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font);
        label_8->setStyleSheet(QLatin1String("margin-top: 5px;\n"
"margin-left: 5px;\n"
"margin-right: 5px;\n"
"background: black;\n"
"color: white;"));

        mbTempContainer->addWidget(label_8);

        motherboardTemperature = new QLabel(gridLayoutWidget);
        motherboardTemperature->setObjectName(QStringLiteral("motherboardTemperature"));
        motherboardTemperature->setFont(font1);
        motherboardTemperature->setStyleSheet(QLatin1String("margin-bottom: 5px;\n"
"margin-left: 5px;\n"
"margin-right: 5px;\n"
"background: white;"));

        mbTempContainer->addWidget(motherboardTemperature);


        gridLayout->addLayout(mbTempContainer, 2, 1, 1, 1);

        propTemperatureContainer = new QVBoxLayout();
        propTemperatureContainer->setObjectName(QStringLiteral("propTemperatureContainer"));
        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font);
        label_6->setStyleSheet(QLatin1String("margin-top: 5px;\n"
"margin-left: 5px;\n"
"margin-right: 5px;\n"
"background: black;\n"
"color: white;"));

        propTemperatureContainer->addWidget(label_6);

        propulsionTemperature = new QLabel(gridLayoutWidget);
        propulsionTemperature->setObjectName(QStringLiteral("propulsionTemperature"));
        propulsionTemperature->setFont(font1);
        propulsionTemperature->setStyleSheet(QLatin1String("margin-bottom: 5px;\n"
"margin-left: 5px;\n"
"margin-right: 5px;\n"
"background: white;"));

        propTemperatureContainer->addWidget(propulsionTemperature);


        gridLayout->addLayout(propTemperatureContainer, 1, 3, 1, 1);

        brakingTemperatureContainer = new QVBoxLayout();
        brakingTemperatureContainer->setObjectName(QStringLiteral("brakingTemperatureContainer"));
        label_7 = new QLabel(gridLayoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font);
        label_7->setStyleSheet(QLatin1String("margin-top: 5px;\n"
"margin-left: 5px;\n"
"margin-right: 5px;\n"
"background: black;\n"
"color: white;"));

        brakingTemperatureContainer->addWidget(label_7);

        brakingTemperature = new QLabel(gridLayoutWidget);
        brakingTemperature->setObjectName(QStringLiteral("brakingTemperature"));
        brakingTemperature->setFont(font1);
        brakingTemperature->setStyleSheet(QLatin1String("margin-bottom: 5px;\n"
"margin-left: 5px;\n"
"margin-right: 5px;\n"
"background: white;"));

        brakingTemperatureContainer->addWidget(brakingTemperature);


        gridLayout->addLayout(brakingTemperatureContainer, 2, 0, 1, 1);

        accelerationContainer = new QVBoxLayout();
        accelerationContainer->setObjectName(QStringLiteral("accelerationContainer"));
        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font);
        label_5->setStyleSheet(QLatin1String("margin-top: 5px;\n"
"margin-left: 5px;\n"
"margin-right: 5px;\n"
"background: black;\n"
"color: white;"));

        accelerationContainer->addWidget(label_5);

        acceleration = new QLabel(gridLayoutWidget);
        acceleration->setObjectName(QStringLiteral("acceleration"));
        acceleration->setFont(font1);
        acceleration->setStyleSheet(QLatin1String("margin-bottom: 5px;\n"
"margin-left: 5px;\n"
"margin-right: 5px;\n"
"background: white;"));

        accelerationContainer->addWidget(acceleration);


        gridLayout->addLayout(accelerationContainer, 1, 2, 1, 1);

        velocityContainer = new QVBoxLayout();
        velocityContainer->setObjectName(QStringLiteral("velocityContainer"));
        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QLatin1String("margin-top: 5px;\n"
"margin-left: 5px;\n"
"margin-right: 5px;\n"
"background: black;\n"
"color: white;"));

        velocityContainer->addWidget(label_3);

        velocity = new QLabel(gridLayoutWidget);
        velocity->setObjectName(QStringLiteral("velocity"));
        velocity->setFont(font1);
        velocity->setStyleSheet(QLatin1String("margin-bottom: 5px;\n"
"margin-left: 5px;\n"
"margin-right: 5px;\n"
"background: white;"));

        velocityContainer->addWidget(velocity);


        gridLayout->addLayout(velocityContainer, 1, 0, 1, 1);

        distanceContainer = new QVBoxLayout();
        distanceContainer->setObjectName(QStringLiteral("distanceContainer"));
        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QLatin1String("margin-top: 5px;\n"
"margin-left: 5px;\n"
"margin-right: 5px;\n"
"background: black;\n"
"color: white;"));

        distanceContainer->addWidget(label_4);

        distance = new QLabel(gridLayoutWidget);
        distance->setObjectName(QStringLiteral("distance"));
        distance->setFont(font1);
        distance->setStyleSheet(QLatin1String("margin-bottom: 5px;\n"
"margin-left: 5px;\n"
"margin-right: 5px;\n"
"background: white;"));

        distanceContainer->addWidget(distance);


        gridLayout->addLayout(distanceContainer, 1, 1, 1, 1);

        brakeButton = new QPushButton(gridLayoutWidget);
        brakeButton->setObjectName(QStringLiteral("brakeButton"));

        gridLayout->addWidget(brakeButton, 3, 3, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);

        gridLayout->addWidget(label, 3, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/res/logo.png")));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 0, 0, 1, 4);

        readyButton = new QPushButton(gridLayoutWidget);
        readyButton->setObjectName(QStringLiteral("readyButton"));

        gridLayout->addWidget(readyButton, 3, 1, 1, 1);

        accelButton = new QPushButton(gridLayoutWidget);
        accelButton->setObjectName(QStringLiteral("accelButton"));

        gridLayout->addWidget(accelButton, 3, 2, 1, 1);


        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QWidget *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Form", nullptr));
        label_12->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Time Since Startup</p></body></html>", nullptr));
        tts->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">0</p></body></html>", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Pod State</p></body></html>", nullptr));
        podState->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">ACCEL</p></body></html>", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Motherboard Temperature</p></body></html>", nullptr));
        motherboardTemperature->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">0</p></body></html>", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Propulsion Temperature</p></body></html>", nullptr));
        propulsionTemperature->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">0</p></body></html>", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Braking Temperature</p></body></html>", nullptr));
        brakingTemperature->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">0</p></body></html>", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Acceleration</p></body></html>", nullptr));
        acceleration->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">0</p></body></html>", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-weight:600;\">Velocity</span></p></body></html>", nullptr));
        velocity->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">0</p></body></html>", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-weight:600;\">Distance</span></p></body></html>", nullptr));
        distance->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">0</p></body></html>", nullptr));
        brakeButton->setText(QApplication::translate("MainWindow", "BRAKE", nullptr));
        label->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Change Pod State</p></body></html>", nullptr));
        label_2->setText(QString());
        readyButton->setText(QApplication::translate("MainWindow", "READY", nullptr));
        accelButton->setText(QApplication::translate("MainWindow", "ACCEL", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
