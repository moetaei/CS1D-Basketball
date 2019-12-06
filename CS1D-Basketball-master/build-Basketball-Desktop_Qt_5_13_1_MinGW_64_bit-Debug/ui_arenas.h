/********************************************************************************
** Form generated from reading UI file 'arenas.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ARENAS_H
#define UI_ARENAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_arenas
{
public:
    QTableView *arenaTable;

    void setupUi(QWidget *arenas)
    {
        if (arenas->objectName().isEmpty())
            arenas->setObjectName(QString::fromUtf8("arenas"));
        arenas->resize(1200, 700);
        arenaTable = new QTableView(arenas);
        arenaTable->setObjectName(QString::fromUtf8("arenaTable"));
        arenaTable->setGeometry(QRect(50, 70, 256, 192));

        retranslateUi(arenas);

        QMetaObject::connectSlotsByName(arenas);
    } // setupUi

    void retranslateUi(QWidget *arenas)
    {
        arenas->setWindowTitle(QCoreApplication::translate("arenas", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class arenas: public Ui_arenas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ARENAS_H
