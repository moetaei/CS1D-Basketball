#include "login.h"
#include "ui_login.h"
#include "QMessageBox"
#include "mainwindow.h"
#include "qdebug.h"
#include "mainwindow.h"
#include "data.h"
#include "graph.h"
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
/****************************************************************************
 * METHOD - connectToDB
 * --------------------------------------------------------------------------
 * This method creates and opens a database connection and displays a
 * qDebug message that the database access is open.  This method is used
 * with a valid login (traveler or admin).  If database is already
 * connected and open, then only the qDebug message is displayed.
 * NOTE: Use with valid login username/password only (traveler or admin)
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      No parameters are required.
 *
 * POST-CONDITIONS
 *      ==> Returns nothing.
 *      ==> Creates and connects to SQLite database if not open
 ***************************************************************************/
void login::on_pushButton_login_clicked()
{
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password_2->text();


        if("admin"== username && "admin" == password)
        {
            QMessageBox::information(this,QObject::tr("System Message"),tr("Login successful!"),QMessageBox::Ok);
            myDB.openDB();
            adminWindow = new admin();
            adminWindow->show();
        }
        else if(""== username && "" == password)
        {

            //QMessageBox::information(this,QObject::tr("System Message"),tr("Login successful!"),QMessageBox::Ok);
            myDB.openDB();
            userWindow = new user();
            userWindow->show();
        }
        else
        {
            qDebug() << "NOT VALID LOGIN";
        }


}
