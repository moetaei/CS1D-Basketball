/********************************************************************************
** Form generated from reading UI file 'denverto.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DENVERTO_H
#define UI_DENVERTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_denverTo
{
public:
    QTextBrowser *displayDistance;
    QPushButton *exit;

    void setupUi(QDialog *denverTo)
    {
        if (denverTo->objectName().isEmpty())
            denverTo->setObjectName(QString::fromUtf8("denverTo"));
        denverTo->resize(238, 149);
        displayDistance = new QTextBrowser(denverTo);
        displayDistance->setObjectName(QString::fromUtf8("displayDistance"));
        displayDistance->setGeometry(QRect(30, 30, 171, 41));
        exit = new QPushButton(denverTo);
        exit->setObjectName(QString::fromUtf8("exit"));
        exit->setGeometry(QRect(130, 110, 75, 23));

        retranslateUi(denverTo);

        QMetaObject::connectSlotsByName(denverTo);
    } // setupUi

    void retranslateUi(QDialog *denverTo)
    {
        denverTo->setWindowTitle(QCoreApplication::translate("denverTo", "Dialog", nullptr));
        exit->setText(QCoreApplication::translate("denverTo", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class denverTo: public Ui_denverTo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DENVERTO_H
