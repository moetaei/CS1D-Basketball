/********************************************************************************
** Form generated from reading UI file 'next.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEXT_H
#define UI_NEXT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_next
{
public:
    QPushButton *confirm;
    QLabel *label;
    QListWidget *newList;

    void setupUi(QWidget *next)
    {
        if (next->objectName().isEmpty())
            next->setObjectName(QString::fromUtf8("next"));
        next->resize(640, 480);
        confirm = new QPushButton(next);
        confirm->setObjectName(QString::fromUtf8("confirm"));
        confirm->setGeometry(QRect(490, 490, 93, 28));
        label = new QLabel(next);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 30, 331, 41));
        QFont font;
        font.setPointSize(13);
        font.setBold(true);
        font.setWeight(75);
        font.setKerning(true);
        label->setFont(font);
        label->setTextFormat(Qt::PlainText);
        newList = new QListWidget(next);
        newList->setObjectName(QString::fromUtf8("newList"));
        newList->setGeometry(QRect(90, 80, 256, 421));
        newList->setSelectionMode(QAbstractItemView::MultiSelection);

        retranslateUi(next);

        QMetaObject::connectSlotsByName(next);
    } // setupUi

    void retranslateUi(QWidget *next)
    {
        next->setWindowTitle(QCoreApplication::translate("next", "Form", nullptr));
        confirm->setText(QCoreApplication::translate("next", "Confirm", nullptr));
        label->setText(QCoreApplication::translate("next", "Select Destination City", nullptr));
    } // retranslateUi

};

namespace Ui {
    class next: public Ui_next {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEXT_H
