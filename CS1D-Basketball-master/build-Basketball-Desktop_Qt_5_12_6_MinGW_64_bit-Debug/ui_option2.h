/********************************************************************************
** Form generated from reading UI file 'option2.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPTION2_H
#define UI_OPTION2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Option2
{
public:
    QListWidget *newList;
    QLabel *label;
    QPushButton *confirm;

    void setupUi(QWidget *Option2)
    {
        if (Option2->objectName().isEmpty())
            Option2->setObjectName(QString::fromUtf8("Option2"));
        Option2->resize(640, 480);
        newList = new QListWidget(Option2);
        newList->setObjectName(QString::fromUtf8("newList"));
        newList->setGeometry(QRect(100, 60, 256, 421));
        newList->setSelectionMode(QAbstractItemView::MultiSelection);
        label = new QLabel(Option2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 10, 331, 41));
        QFont font;
        font.setPointSize(13);
        font.setBold(true);
        font.setWeight(75);
        font.setKerning(true);
        label->setFont(font);
        label->setTextFormat(Qt::PlainText);
        confirm = new QPushButton(Option2);
        confirm->setObjectName(QString::fromUtf8("confirm"));
        confirm->setGeometry(QRect(500, 470, 93, 28));

        retranslateUi(Option2);

        QMetaObject::connectSlotsByName(Option2);
    } // setupUi

    void retranslateUi(QWidget *Option2)
    {
        Option2->setWindowTitle(QApplication::translate("Option2", "Form", nullptr));
        label->setText(QApplication::translate("Option2", "Select Starting City", nullptr));
        confirm->setText(QApplication::translate("Option2", "Confirm", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Option2: public Ui_Option2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPTION2_H
