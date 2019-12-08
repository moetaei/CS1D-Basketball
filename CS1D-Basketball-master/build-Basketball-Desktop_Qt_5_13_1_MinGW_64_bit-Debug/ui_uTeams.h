/********************************************************************************
** Form generated from reading UI file 'uTeams.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UTEAMS_H
#define UI_UTEAMS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_uTeams
{
public:
    QTableView *uTeamsTable;
    QComboBox *sortBox;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *uTeams)
    {
        if (uTeams->objectName().isEmpty())
            uTeams->setObjectName(QString::fromUtf8("uTeams"));
        uTeams->resize(1200, 640);
        uTeamsTable = new QTableView(uTeams);
        uTeamsTable->setObjectName(QString::fromUtf8("uTeamsTable"));
        uTeamsTable->setGeometry(QRect(80, 120, 461, 411));
        sortBox = new QComboBox(uTeams);
        sortBox->setObjectName(QString::fromUtf8("sortBox"));
        sortBox->setGeometry(QRect(1020, 580, 131, 31));
        label = new QLabel(uTeams);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 40, 331, 41));
        QFont font;
        font.setPointSize(13);
        font.setBold(true);
        font.setWeight(75);
        font.setKerning(true);
        label->setFont(font);
        label->setTextFormat(Qt::PlainText);
        label_2 = new QLabel(uTeams);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(910, 580, 101, 31));
        label_2->setFont(font);
        label_2->setTextFormat(Qt::PlainText);

        retranslateUi(uTeams);

        QMetaObject::connectSlotsByName(uTeams);
    } // setupUi

    void retranslateUi(QWidget *uTeams)
    {
        uTeams->setWindowTitle(QCoreApplication::translate("uTeams", "Form", nullptr));
        sortBox->setCurrentText(QString());
        label->setText(QCoreApplication::translate("uTeams", "All teams", nullptr));
        label_2->setText(QCoreApplication::translate("uTeams", "Sort by:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class uTeams: public Ui_uTeams {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UTEAMS_H
