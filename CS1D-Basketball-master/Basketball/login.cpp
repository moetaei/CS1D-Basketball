#include "login.h"
#include "ui_login.h"
#include "QMessageBox"
#include "mainwindow.h"
#include "qdebug.h"
#include "mainwindow.h"
#include "data.h"
login::login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
}

login::~login()
{
    delete ui;
}

void login::on_pushButton_login_clicked()
{
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password_2->text();

    if(username ==  "test" && password == "test") {
         QMessageBox::information(this,QObject::tr("System Message"),tr("Login successful!"),QMessageBox::Ok);
         qDebug() << "SUCCESS";
         MainWindow *w = new MainWindow(this);
         this->close();
         w->show();
    }
    if(username ==  "admin" && password == "admin") {
        QMessageBox::information(this,QObject::tr("System Message"),tr("Login successful!"),QMessageBox::Ok);
        qDebug() << "SUCCESS";
    }


}
