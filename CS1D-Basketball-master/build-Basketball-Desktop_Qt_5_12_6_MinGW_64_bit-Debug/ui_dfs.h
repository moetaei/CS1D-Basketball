/********************************************************************************
** Form generated from reading UI file 'dfs.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DFS_H
#define UI_DFS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dfs
{
public:
    QLabel *label;
    QTextBrowser *path;
    QPushButton *exit;

    void setupUi(QWidget *dfs)
    {
        if (dfs->objectName().isEmpty())
            dfs->setObjectName(QString::fromUtf8("dfs"));
        dfs->resize(367, 483);
        label = new QLabel(dfs);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 471, 41));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        font.setKerning(true);
        label->setFont(font);
        label->setTextFormat(Qt::PlainText);
        path = new QTextBrowser(dfs);
        path->setObjectName(QString::fromUtf8("path"));
        path->setEnabled(true);
        path->setGeometry(QRect(30, 50, 231, 401));
        exit = new QPushButton(dfs);
        exit->setObjectName(QString::fromUtf8("exit"));
        exit->setGeometry(QRect(270, 230, 75, 23));

        retranslateUi(dfs);

        QMetaObject::connectSlotsByName(dfs);
    } // setupUi

    void retranslateUi(QWidget *dfs)
    {
        dfs->setWindowTitle(QApplication::translate("dfs", "Form", nullptr));
        label->setText(QApplication::translate("dfs", "DFS starting with Orlando Magic (shortest distance) ", nullptr));
        exit->setText(QApplication::translate("dfs", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dfs: public Ui_dfs {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DFS_H
