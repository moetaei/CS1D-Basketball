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
    QLabel *label;
    QTextBrowser *path;
    QPushButton *exit;

    void setupUi(QWidget *bfs)
    {
        if (bfs->objectName().isEmpty())
            bfs->setObjectName(QString::fromUtf8("bfs"));
        bfs->resize(475, 487);
        label = new QLabel(bfs);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 471, 41));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        font.setKerning(true);
        label->setFont(font);
        label->setTextFormat(Qt::PlainText);
        path = new QTextBrowser(bfs);
        path->setObjectName(QString::fromUtf8("path"));
        path->setEnabled(true);
        path->setGeometry(QRect(20, 50, 231, 401));
        exit = new QPushButton(bfs);
        exit->setObjectName(QString::fromUtf8("exit"));
        exit->setGeometry(QRect(260, 230, 75, 23));

        retranslateUi(bfs);

        QMetaObject::connectSlotsByName(bfs);
    } // setupUi

    void retranslateUi(QWidget *bfs)
    {
        bfs->setWindowTitle(QApplication::translate("bfs", "Form", nullptr));
        label->setText(QApplication::translate("bfs", "BFS starting with Los Angeles (shortest distance) ", nullptr));
        exit->setText(QApplication::translate("bfs", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class bfs: public Ui_bfs {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BFS_H
