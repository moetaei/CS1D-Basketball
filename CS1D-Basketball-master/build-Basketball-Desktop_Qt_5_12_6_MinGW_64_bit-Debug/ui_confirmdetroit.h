/********************************************************************************
** Form generated from reading UI file 'confirmdetroit.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIRMDETROIT_H
#define UI_CONFIRMDETROIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConfirmDetroit
{
public:
    QLabel *label;
    QPushButton *confirm;
    QPushButton *cancel;
    QListWidget *detroitList;
    QLabel *confirmedDestLabel;

    void setupUi(QWidget *ConfirmDetroit)
    {
        if (ConfirmDetroit->objectName().isEmpty())
            ConfirmDetroit->setObjectName(QString::fromUtf8("ConfirmDetroit"));
        ConfirmDetroit->resize(326, 549);
        label = new QLabel(ConfirmDetroit);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 10, 231, 71));
        QFont font;
        font.setPointSize(13);
        font.setBold(true);
        font.setWeight(75);
        font.setKerning(true);
        label->setFont(font);
        label->setTextFormat(Qt::PlainText);
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(true);
        confirm = new QPushButton(ConfirmDetroit);
        confirm->setObjectName(QString::fromUtf8("confirm"));
        confirm->setGeometry(QRect(210, 490, 75, 31));
        cancel = new QPushButton(ConfirmDetroit);
        cancel->setObjectName(QString::fromUtf8("cancel"));
        cancel->setGeometry(QRect(30, 490, 75, 31));
        detroitList = new QListWidget(ConfirmDetroit);
        detroitList->setObjectName(QString::fromUtf8("detroitList"));
        detroitList->setGeometry(QRect(30, 120, 251, 311));
        confirmedDestLabel = new QLabel(ConfirmDetroit);
        confirmedDestLabel->setObjectName(QString::fromUtf8("confirmedDestLabel"));
        confirmedDestLabel->setGeometry(QRect(10, 90, 250, 20));

        retranslateUi(ConfirmDetroit);

        QMetaObject::connectSlotsByName(ConfirmDetroit);
    } // setupUi

    void retranslateUi(QWidget *ConfirmDetroit)
    {
        ConfirmDetroit->setWindowTitle(QApplication::translate("ConfirmDetroit", "Form", nullptr));
        label->setText(QApplication::translate("ConfirmDetroit", "Pick cities to travel to visit starting from Detroit", nullptr));
        confirm->setText(QApplication::translate("ConfirmDetroit", "Confirm", nullptr));
        cancel->setText(QApplication::translate("ConfirmDetroit", "Cancel", nullptr));
        confirmedDestLabel->setText(QApplication::translate("ConfirmDetroit", "<html><head/><body><p><span style=\" font-size:10pt;\">Your vacation plan:</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConfirmDetroit: public Ui_ConfirmDetroit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIRMDETROIT_H
