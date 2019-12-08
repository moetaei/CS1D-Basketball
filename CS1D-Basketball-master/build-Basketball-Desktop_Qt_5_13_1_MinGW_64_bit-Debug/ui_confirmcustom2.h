/********************************************************************************
** Form generated from reading UI file 'confirmcustom2.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIRMCUSTOM2_H
#define UI_CONFIRMCUSTOM2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_confirmCustom2
{
public:
    QListWidget *customList;
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QWidget *confirmCustom2)
    {
        if (confirmCustom2->objectName().isEmpty())
            confirmCustom2->setObjectName(QString::fromUtf8("confirmCustom2"));
        confirmCustom2->resize(594, 552);
        customList = new QListWidget(confirmCustom2);
        customList->setObjectName(QString::fromUtf8("customList"));
        customList->setGeometry(QRect(60, 80, 256, 421));
        customList->setSelectionMode(QAbstractItemView::MultiSelection);
        pushButton = new QPushButton(confirmCustom2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(480, 510, 93, 28));
        label = new QLabel(confirmCustom2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 30, 331, 41));
        QFont font;
        font.setPointSize(13);
        font.setBold(true);
        font.setWeight(75);
        font.setKerning(true);
        label->setFont(font);
        label->setTextFormat(Qt::PlainText);

        retranslateUi(confirmCustom2);

        QMetaObject::connectSlotsByName(confirmCustom2);
    } // setupUi

    void retranslateUi(QWidget *confirmCustom2)
    {
        confirmCustom2->setWindowTitle(QCoreApplication::translate("confirmCustom2", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("confirmCustom2", "Confirm", nullptr));
        label->setText(QCoreApplication::translate("confirmCustom2", "Option 4", nullptr));
    } // retranslateUi

};

namespace Ui {
    class confirmCustom2: public Ui_confirmCustom2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIRMCUSTOM2_H
