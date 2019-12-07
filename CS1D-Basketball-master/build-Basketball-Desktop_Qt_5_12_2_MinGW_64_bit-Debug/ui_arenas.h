/********************************************************************************
** Form generated from reading UI file 'arenas.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ARENAS_H
#define UI_ARENAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_arenas
{
public:
    QTableView *arenaTable;
    QLabel *graphPic;

    void setupUi(QWidget *arenas)
    {
        if (arenas->objectName().isEmpty())
            arenas->setObjectName(QString::fromUtf8("arenas"));
        arenas->resize(1200, 700);
        arenaTable = new QTableView(arenas);
        arenaTable->setObjectName(QString::fromUtf8("arenaTable"));
        arenaTable->setGeometry(QRect(50, 70, 256, 192));
        graphPic = new QLabel(arenas);
        graphPic->setObjectName(QString::fromUtf8("graphPic"));
        graphPic->setGeometry(QRect(580, 60, 561, 491));

        retranslateUi(arenas);

        QMetaObject::connectSlotsByName(arenas);
    } // setupUi

    void retranslateUi(QWidget *arenas)
    {
        arenas->setWindowTitle(QApplication::translate("arenas", "Form", nullptr));
        graphPic->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class arenas: public Ui_arenas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ARENAS_H
