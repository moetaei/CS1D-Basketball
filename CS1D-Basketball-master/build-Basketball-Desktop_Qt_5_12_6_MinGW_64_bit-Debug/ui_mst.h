/********************************************************************************
** Form generated from reading UI file 'mst.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MST_H
#define UI_MST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mst
{
public:
    QTextBrowser *path;
    QPushButton *exit;
    QLabel *label;

    void setupUi(QWidget *mst)
    {
        if (mst->objectName().isEmpty())
            mst->setObjectName(QString::fromUtf8("mst"));
        mst->resize(471, 640);
        path = new QTextBrowser(mst);
        path->setObjectName(QString::fromUtf8("path"));
        path->setEnabled(true);
        path->setGeometry(QRect(40, 60, 341, 551));
        exit = new QPushButton(mst);
        exit->setObjectName(QString::fromUtf8("exit"));
        exit->setGeometry(QRect(390, 240, 75, 23));
        label = new QLabel(mst);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 20, 471, 41));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        font.setKerning(true);
        label->setFont(font);
        label->setTextFormat(Qt::PlainText);

        retranslateUi(mst);

        QMetaObject::connectSlotsByName(mst);
    } // setupUi

    void retranslateUi(QWidget *mst)
    {
        mst->setWindowTitle(QApplication::translate("mst", "Form", nullptr));
        exit->setText(QApplication::translate("mst", "Exit", nullptr));
        label->setText(QApplication::translate("mst", "MST (Prim\342\200\231s algorithm)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mst: public Ui_mst {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MST_H
