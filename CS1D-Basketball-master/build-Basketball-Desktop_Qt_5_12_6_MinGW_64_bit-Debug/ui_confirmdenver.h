/********************************************************************************
** Form generated from reading UI file 'confirmdenver.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIRMDENVER_H
#define UI_CONFIRMDENVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_confirmDenver
{
public:
    QListWidget *denverList;
    QPushButton *pushButton;
    QLabel *label;
    QPushButton *exitButton;

    void setupUi(QWidget *confirmDenver)
    {
        if (confirmDenver->objectName().isEmpty())
            confirmDenver->setObjectName(QString::fromUtf8("confirmDenver"));
        confirmDenver->resize(746, 552);
        denverList = new QListWidget(confirmDenver);
        denverList->setObjectName(QString::fromUtf8("denverList"));
        denverList->setGeometry(QRect(80, 90, 256, 421));
        denverList->setSelectionMode(QAbstractItemView::SingleSelection);
        pushButton = new QPushButton(confirmDenver);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(630, 500, 93, 28));
        label = new QLabel(confirmDenver);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 30, 331, 41));
        QFont font;
        font.setPointSize(13);
        font.setBold(true);
        font.setWeight(75);
        font.setKerning(true);
        label->setFont(font);
        label->setTextFormat(Qt::PlainText);
        exitButton = new QPushButton(confirmDenver);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));
        exitButton->setGeometry(QRect(630, 460, 93, 28));

        retranslateUi(confirmDenver);
        QObject::connect(exitButton, SIGNAL(clicked()), exitButton, SLOT(close()));

        QMetaObject::connectSlotsByName(confirmDenver);
    } // setupUi

    void retranslateUi(QWidget *confirmDenver)
    {
        confirmDenver->setWindowTitle(QApplication::translate("confirmDenver", "Form", nullptr));
        pushButton->setText(QApplication::translate("confirmDenver", "Confirm", nullptr));
        label->setText(QApplication::translate("confirmDenver", "Denver ", nullptr));
        exitButton->setText(QApplication::translate("confirmDenver", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class confirmDenver: public Ui_confirmDenver {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIRMDENVER_H
