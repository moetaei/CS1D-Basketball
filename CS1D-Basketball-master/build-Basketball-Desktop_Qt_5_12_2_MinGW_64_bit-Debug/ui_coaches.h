/********************************************************************************
** Form generated from reading UI file 'coaches.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COACHES_H
#define UI_COACHES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_coaches
{
public:
    QTableView *coachTable;
    QLabel *label;
    QLabel *graph_pic2;

    void setupUi(QWidget *coaches)
    {
        if (coaches->objectName().isEmpty())
            coaches->setObjectName(QString::fromUtf8("coaches"));
        coaches->resize(1200, 700);
        coachTable = new QTableView(coaches);
        coachTable->setObjectName(QString::fromUtf8("coachTable"));
        coachTable->setGeometry(QRect(80, 80, 281, 511));
        label = new QLabel(coaches);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 10, 331, 41));
        QFont font;
        font.setPointSize(13);
        font.setBold(true);
        font.setWeight(75);
        font.setKerning(true);
        label->setFont(font);
        label->setTextFormat(Qt::PlainText);
        graph_pic2 = new QLabel(coaches);
        graph_pic2->setObjectName(QString::fromUtf8("graph_pic2"));
        graph_pic2->setGeometry(QRect(580, 60, 531, 501));

        retranslateUi(coaches);

        QMetaObject::connectSlotsByName(coaches);
    } // setupUi

    void retranslateUi(QWidget *coaches)
    {
        coaches->setWindowTitle(QApplication::translate("coaches", "Form", nullptr));
        label->setText(QApplication::translate("coaches", "The Coaches", nullptr));
        graph_pic2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class coaches: public Ui_coaches {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COACHES_H
