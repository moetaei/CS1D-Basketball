/********************************************************************************
** Form generated from reading UI file 'divisions.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIVISIONS_H
#define UI_DIVISIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_divisions
{
public:
    QTableWidget *tableWidget;

    void setupUi(QWidget *divisions)
    {
        if (divisions->objectName().isEmpty())
            divisions->setObjectName(QString::fromUtf8("divisions"));
        divisions->resize(1200, 700);
        tableWidget = new QTableWidget(divisions);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(180, 240, 256, 192));

        retranslateUi(divisions);

        QMetaObject::connectSlotsByName(divisions);
    } // setupUi

    void retranslateUi(QWidget *divisions)
    {
        divisions->setWindowTitle(QApplication::translate("divisions", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class divisions: public Ui_divisions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIVISIONS_H
