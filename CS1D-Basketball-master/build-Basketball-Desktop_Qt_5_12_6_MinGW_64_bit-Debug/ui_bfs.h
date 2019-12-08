/********************************************************************************
** Form generated from reading UI file 'bfs.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BFS_H
#define UI_BFS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_bfs
{
public:
    QTextBrowser *path;
    QPushButton *exit;
    QLabel *label;

    void setupUi(QWidget *bfs)
    {
        if (bfs->objectName().isEmpty())
            bfs->setObjectName(QString::fromUtf8("bfs"));
        bfs->resize(392, 479);
        path = new QTextBrowser(bfs);
        path->setObjectName(QString::fromUtf8("path"));
        path->setEnabled(true);
        path->setGeometry(QRect(30, 50, 231, 401));
        exit = new QPushButton(bfs);
        exit->setObjectName(QString::fromUtf8("exit"));
        exit->setGeometry(QRect(290, 230, 75, 23));
        label = new QLabel(bfs);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 471, 41));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        font.setKerning(true);
        label->setFont(font);
        label->setTextFormat(Qt::PlainText);

        retranslateUi(bfs);

        QMetaObject::connectSlotsByName(bfs);
    } // setupUi

    void retranslateUi(QWidget *bfs)
    {
        bfs->setWindowTitle(QApplication::translate("bfs", "Form", nullptr));
        exit->setText(QApplication::translate("bfs", "Exit", nullptr));
        label->setText(QApplication::translate("bfs", "BFS starting with Los Angeles Lakers (shortest distance) ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class bfs: public Ui_bfs {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BFS_H
