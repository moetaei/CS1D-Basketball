/********************************************************************************
** Form generated from reading UI file 'checkout.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHECKOUT_H
#define UI_CHECKOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_checkout
{
public:
    QLabel *titleLabel;
    QPushButton *endVacationButton;
    QPushButton *exitSimulationButton;
    QGroupBox *groupBox;
    QLabel *totalDistLabel;
    QLineEdit *totalDistLine;
    QLabel *totalCostLabel;
    QLineEdit *totalCostLine;
    QLabel *label_2;
    QLabel *label_3;
    QGroupBox *foodGroupBox;
    QLabel *welcomeLabel;
    QLabel *currCityLabel;
    QTableWidget *itemTableWidget;
    QPushButton *nextDestButton;
    QLabel *currDestCostLabel;
    QLineEdit *currDestCostLine;
    QLabel *label;
    QPushButton *confirmFoodButton;
    QLabel *label_4;
    QListWidget *destinationWidget;

    void setupUi(QWidget *checkout)
    {
        if (checkout->objectName().isEmpty())
            checkout->setObjectName(QString::fromUtf8("checkout"));
        checkout->resize(593, 605);
        titleLabel = new QLabel(checkout);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));
        titleLabel->setGeometry(QRect(10, 10, 461, 41));
        QFont font;
        font.setPointSize(14);
        titleLabel->setFont(font);
        endVacationButton = new QPushButton(checkout);
        endVacationButton->setObjectName(QString::fromUtf8("endVacationButton"));
        endVacationButton->setGeometry(QRect(440, 550, 130, 31));
        endVacationButton->setStyleSheet(QString::fromUtf8(""));
        exitSimulationButton = new QPushButton(checkout);
        exitSimulationButton->setObjectName(QString::fromUtf8("exitSimulationButton"));
        exitSimulationButton->setGeometry(QRect(10, 550, 121, 31));
        exitSimulationButton->setStyleSheet(QString::fromUtf8(""));
        groupBox = new QGroupBox(checkout);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 380, 220, 121));
        groupBox->setStyleSheet(QString::fromUtf8(""));
        totalDistLabel = new QLabel(groupBox);
        totalDistLabel->setObjectName(QString::fromUtf8("totalDistLabel"));
        totalDistLabel->setGeometry(QRect(10, 10, 201, 20));
        QFont font1;
        font1.setPointSize(9);
        font1.setBold(true);
        font1.setWeight(75);
        totalDistLabel->setFont(font1);
        totalDistLabel->setAlignment(Qt::AlignCenter);
        totalDistLine = new QLineEdit(groupBox);
        totalDistLine->setObjectName(QString::fromUtf8("totalDistLine"));
        totalDistLine->setGeometry(QRect(50, 30, 80, 25));
        QFont font2;
        font2.setPointSize(9);
        totalDistLine->setFont(font2);
        totalDistLine->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        totalDistLine->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        totalDistLine->setReadOnly(true);
        totalCostLabel = new QLabel(groupBox);
        totalCostLabel->setObjectName(QString::fromUtf8("totalCostLabel"));
        totalCostLabel->setGeometry(QRect(10, 66, 201, 20));
        totalCostLabel->setFont(font1);
        totalCostLabel->setAlignment(Qt::AlignCenter);
        totalCostLine = new QLineEdit(groupBox);
        totalCostLine->setObjectName(QString::fromUtf8("totalCostLine"));
        totalCostLine->setGeometry(QRect(50, 85, 80, 25));
        totalCostLine->setFont(font2);
        totalCostLine->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        totalCostLine->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        totalCostLine->setReadOnly(true);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(135, 40, 71, 20));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 90, 16, 20));
        foodGroupBox = new QGroupBox(checkout);
        foodGroupBox->setObjectName(QString::fromUtf8("foodGroupBox"));
        foodGroupBox->setGeometry(QRect(240, 50, 330, 451));
        welcomeLabel = new QLabel(foodGroupBox);
        welcomeLabel->setObjectName(QString::fromUtf8("welcomeLabel"));
        welcomeLabel->setGeometry(QRect(10, 10, 121, 21));
        QFont font3;
        font3.setPointSize(10);
        welcomeLabel->setFont(font3);
        currCityLabel = new QLabel(foodGroupBox);
        currCityLabel->setObjectName(QString::fromUtf8("currCityLabel"));
        currCityLabel->setGeometry(QRect(130, 10, 161, 21));
        QFont font4;
        font4.setPointSize(10);
        font4.setBold(true);
        font4.setWeight(75);
        currCityLabel->setFont(font4);
        itemTableWidget = new QTableWidget(foodGroupBox);
        itemTableWidget->setObjectName(QString::fromUtf8("itemTableWidget"));
        itemTableWidget->setGeometry(QRect(10, 80, 310, 271));
        itemTableWidget->verticalHeader()->setVisible(false);
        nextDestButton = new QPushButton(foodGroupBox);
        nextDestButton->setObjectName(QString::fromUtf8("nextDestButton"));
        nextDestButton->setGeometry(QRect(200, 410, 121, 28));
        nextDestButton->setStyleSheet(QString::fromUtf8(""));
        currDestCostLabel = new QLabel(foodGroupBox);
        currDestCostLabel->setObjectName(QString::fromUtf8("currDestCostLabel"));
        currDestCostLabel->setGeometry(QRect(10, 365, 141, 16));
        currDestCostLabel->setFont(font1);
        currDestCostLine = new QLineEdit(foodGroupBox);
        currDestCostLine->setObjectName(QString::fromUtf8("currDestCostLine"));
        currDestCostLine->setGeometry(QRect(160, 360, 71, 25));
        currDestCostLine->setFont(font2);
        currDestCostLine->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        currDestCostLine->setReadOnly(true);
        label = new QLabel(foodGroupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 40, 311, 31));
        label->setWordWrap(true);
        confirmFoodButton = new QPushButton(foodGroupBox);
        confirmFoodButton->setObjectName(QString::fromUtf8("confirmFoodButton"));
        confirmFoodButton->setGeometry(QRect(250, 360, 71, 28));
        confirmFoodButton->setStyleSheet(QString::fromUtf8(""));
        label_4 = new QLabel(foodGroupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(150, 360, 16, 20));
        destinationWidget = new QListWidget(checkout);
        destinationWidget->setObjectName(QString::fromUtf8("destinationWidget"));
        destinationWidget->setGeometry(QRect(10, 50, 221, 321));

        retranslateUi(checkout);

        QMetaObject::connectSlotsByName(checkout);
    } // setupUi

    void retranslateUi(QWidget *checkout)
    {
        checkout->setWindowTitle(QApplication::translate("checkout", "Form", nullptr));
        titleLabel->setText(QApplication::translate("checkout", "Checkout", nullptr));
        endVacationButton->setText(QApplication::translate("checkout", "Leave Checout", nullptr));
        exitSimulationButton->setText(QApplication::translate("checkout", "Exit Checkout", nullptr));
        groupBox->setTitle(QString());
        totalDistLabel->setText(QApplication::translate("checkout", "TOTAL DISTANCE", nullptr));
        totalCostLabel->setText(QApplication::translate("checkout", "TOTAL COST", nullptr));
        label_2->setText(QApplication::translate("checkout", "Miles", nullptr));
        label_3->setText(QApplication::translate("checkout", "$", nullptr));
        foodGroupBox->setTitle(QString());
        welcomeLabel->setText(QApplication::translate("checkout", "You are now at:", nullptr));
        currCityLabel->setText(QApplication::translate("checkout", "TextLabel", nullptr));
        nextDestButton->setText(QApplication::translate("checkout", "Next Arena", nullptr));
        currDestCostLabel->setText(QApplication::translate("checkout", "Current Cost: ", nullptr));
        label->setText(QApplication::translate("checkout", "<html><head/><body><p>Select souvenirs quantities for this arena below and click Confirm.</p></body></html>", nullptr));
        confirmFoodButton->setText(QApplication::translate("checkout", "Confirm", nullptr));
        label_4->setText(QApplication::translate("checkout", "$", nullptr));
    } // retranslateUi

};

namespace Ui {
    class checkout: public Ui_checkout {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHECKOUT_H
