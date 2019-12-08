/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QLineEdit *lineEdit_username;
    QLineEdit *lineEdit_password_2;
    QPushButton *pushButton_login;
    QTextBrowser *textBrowser;
    QGraphicsView *graphicsView;

    void setupUi(QDialog *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QString::fromUtf8("login"));
        login->resize(900, 475);
        login->setAutoFillBackground(false);
        login->setStyleSheet(QString::fromUtf8("login{\n"
"	rgb(0, 0, 0)\n"
"}"));
        lineEdit_username = new QLineEdit(login);
        lineEdit_username->setObjectName(QString::fromUtf8("lineEdit_username"));
        lineEdit_username->setGeometry(QRect(250, 90, 391, 41));
        lineEdit_password_2 = new QLineEdit(login);
        lineEdit_password_2->setObjectName(QString::fromUtf8("lineEdit_password_2"));
        lineEdit_password_2->setGeometry(QRect(250, 140, 391, 41));
        lineEdit_password_2->setEchoMode(QLineEdit::Password);
        pushButton_login = new QPushButton(login);
        pushButton_login->setObjectName(QString::fromUtf8("pushButton_login"));
        pushButton_login->setGeometry(QRect(380, 210, 141, 41));
        textBrowser = new QTextBrowser(login);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(20, 20, 851, 61));
        textBrowser->setAutoFillBackground(false);
        textBrowser->setFrameShape(QFrame::NoFrame);
        textBrowser->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsView = new QGraphicsView(login);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(0, 0, 901, 481));
        graphicsView->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0, angle:135, stop:0 rgba(255, 255, 0, 69), stop:0.375 rgba(255, 255, 0, 69), stop:0.423533 rgba(251, 255, 0, 145), stop:0.45 rgba(247, 255, 0, 208), stop:0.477581 rgba(255, 244, 71, 130), stop:0.518717 rgba(255, 218, 71, 130), stop:0.55 rgba(255, 255, 0, 255), stop:0.57754 rgba(255, 203, 0, 130), stop:0.625 rgba(255, 255, 0, 69), stop:1 rgba(255, 255, 0, 69));"));
        graphicsView->raise();
        lineEdit_username->raise();
        lineEdit_password_2->raise();
        pushButton_login->raise();
        textBrowser->raise();

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QDialog *login)
    {
        login->setWindowTitle(QApplication::translate("login", "Dialog", nullptr));
        lineEdit_username->setPlaceholderText(QApplication::translate("login", "Username", nullptr));
        lineEdit_password_2->setPlaceholderText(QApplication::translate("login", "Password", nullptr));
        pushButton_login->setText(QApplication::translate("login", "Login", nullptr));
        textBrowser->setHtml(QApplication::translate("login", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:22pt;\">Let's Play NBA Basketball</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
