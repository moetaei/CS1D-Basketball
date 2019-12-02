/********************************************************************************
** Form generated from reading UI file 'confirmdetroit.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
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
    QListWidget *detroitList;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QWidget *ConfirmDetroit)
    {
        if (ConfirmDetroit->objectName().isEmpty())
            ConfirmDetroit->setObjectName(QString::fromUtf8("ConfirmDetroit"));
        ConfirmDetroit->resize(620, 550);
        detroitList = new QListWidget(ConfirmDetroit);
        detroitList->setObjectName(QString::fromUtf8("detroitList"));
        detroitList->setGeometry(QRect(90, 80, 256, 421));
        detroitList->setSelectionMode(QAbstractItemView::MultiSelection);
        label = new QLabel(ConfirmDetroit);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 30, 331, 41));
        QFont font;
        font.setPointSize(13);
        font.setBold(true);
        font.setWeight(75);
        font.setKerning(true);
        label->setFont(font);
        label->setTextFormat(Qt::PlainText);
        pushButton = new QPushButton(ConfirmDetroit);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(490, 490, 93, 28));

        retranslateUi(ConfirmDetroit);

        QMetaObject::connectSlotsByName(ConfirmDetroit);
    } // setupUi

    void retranslateUi(QWidget *ConfirmDetroit)
    {
        ConfirmDetroit->setWindowTitle(QApplication::translate("ConfirmDetroit", "Form", nullptr));
        label->setText(QApplication::translate("ConfirmDetroit", "Detroit", nullptr));
        pushButton->setText(QApplication::translate("ConfirmDetroit", "Confirm", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConfirmDetroit: public Ui_ConfirmDetroit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIRMDETROIT_H
