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
    UserDB();
}

login::~login()
{
    delete ui;
}
void login :: UserDB()
{
    userDB = QSqlDatabase:: addDatabase("QSQLITE");
    userDB.setDatabaseName(QDir::currentPath() + "/userDB.sqlite");
    if(!userDB.open())
    {
        qDebug() << "ERROR opening Database(userDB)";
    }
    QString query = "CREATE TABLE userDB (Type VARCHAR(20), Username VARCHAR(20), Password VARCHAR(20));";
    QSqlQuery qry;

    if(!qry.exec(query))
    {
        qDebug() << "Table already exists (userDB)";
        return;
    }
    QString admin = "admin";
    QString adminU = "admin";
    QString adminP = "admin";
    QString user = "customer";
    QString userU = "test";
    QString userP = "test";

    qry.prepare("INSERT INTO userDB (Type, Username, Password) VALUES (?,?,?);");
    qry.addBindValue(admin);
    qry.addBindValue(adminU);
    qry.addBindValue(adminP);
    if(!qry.exec())
    {
        qDebug() << "THIS SHOULD NOT HAPPEN (userInfo)";
    }

    qry.prepare("INSERT INTO userDB (Type, Username, Password) VALUES (?,?,?);");
    qry.addBindValue(user);
    qry.addBindValue(userU);
    qry.addBindValue(userP);
    if(!qry.exec())
    {
        qDebug() << "THIS SHOULD NOT HAPPEN (userInfo)";
    }


}
void login::on_pushButton_login_clicked()
{
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password_2->text();

    if(!userDB.isOpen())
    {
        qDebug() << "ERROR Opening database (userDB)";
    }

    QSqlQuery qry;
    if(qry.exec("SELECT * FROM userDB WHERE Type = 'admin' AND Username =\'"+username+"\' AND Password = \'"+password+"\'"))
    {
        int count = 0;
        while(qry.next())
        {
            count++;
        }
        if(count >= 1) //it is in the database
        {
            QMessageBox::information(this,QObject::tr("System Message"),tr("Login successful!"),QMessageBox::Ok);
            qDebug() << "SUCCESS";
            close();
        }
        else //checking for customer
        {
            if(qry.exec("SELECT * FROM userDB WHERE Type = 'customer' AND Username =\'"+username+"\' AND Password = \'"+password+"\'"))
            {
                int count = 0;
                while(qry.next())
                {
                    count++;
                }
                if(count >= 1) //it is in the database
                {
                    QMessageBox::information(this,QObject::tr("System Message"),tr("Login successful!"),QMessageBox::Ok);
                    qDebug() << "SUCCESS";
                    MainWindow *w = new MainWindow(this);
                    this->close();
                    w->show();
                }
                else // not in the database;
                {

                }
            }
        }
    }
}
