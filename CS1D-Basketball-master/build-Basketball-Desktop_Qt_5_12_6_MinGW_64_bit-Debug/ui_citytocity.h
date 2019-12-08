/********************************************************************************
** Form generated from reading UI file 'citytocity.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CITYTOCITY_H
#define UI_CITYTOCITY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_cityToCity
{
public:
    QPushButton *exit;
    QTextBrowser *displayDistance;

    void setupUi(QDialog *cityToCity)
    {
        if (cityToCity->objectName().isEmpty())
            cityToCity->setObjectName(QString::fromUtf8("cityToCity"));
        cityToCity->resize(312, 132);
        exit = new QPushButton(cityToCity);
        exit->setObjectName(QString::fromUtf8("exit"));
        exit->setGeometry(QRect(210, 90, 75, 23));
        displayDistance = new QTextBrowser(cityToCity);
        displayDistance->setObjectName(QString::fromUtf8("displayDistance"));
        displayDistance->setGeometry(QRect(30, 20, 251, 41));

        retranslateUi(cityToCity);

        QMetaObject::connectSlotsByName(cityToCity);
    } // setupUi

    void retranslateUi(QDialog *cityToCity)
    {
        cityToCity->setWindowTitle(QApplication::translate("cityToCity", "Dialog", nullptr));
        exit->setText(QApplication::translate("cityToCity", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cityToCity: public Ui_cityToCity {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CITYTOCITY_H
