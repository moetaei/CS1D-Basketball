/********************************************************************************
** Form generated from reading UI file 'info.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFO_H
#define UI_INFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_info
{
public:
    QTableWidget *teamTable;
    QComboBox *teamOptions;

    void setupUi(QWidget *info)
    {
        if (info->objectName().isEmpty())
            info->setObjectName(QString::fromUtf8("info"));
        info->resize(1200, 700);
        teamTable = new QTableWidget(info);
        teamTable->setObjectName(QString::fromUtf8("teamTable"));
        teamTable->setGeometry(QRect(120, 230, 256, 192));
        teamOptions = new QComboBox(info);
        teamOptions->setObjectName(QString::fromUtf8("teamOptions"));
        teamOptions->setGeometry(QRect(670, 150, 201, 31));

        retranslateUi(info);

        QMetaObject::connectSlotsByName(info);
    } // setupUi

    void retranslateUi(QWidget *info)
    {
        info->setWindowTitle(QCoreApplication::translate("info", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class info: public Ui_info {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFO_H
