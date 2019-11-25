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
void login::connectToDB()
{
    bool isOpen = false; // CALC - Set database open status to false

    // Create and open a database connection
    // Return if database opened successfully or not
    isOpen = myDB.openDB();

    // Display message if database connection was successful
    if(isOpen)
    {
        qDebug() << "Success: Able to access open database";
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
//                    QMessageBox::information(this,QObject::tr("System Message"),tr("Login successful!"),QMessageBox::Ok);
                    qDebug() << "SUCCESS";

                    userDB.close();
                    userDB.removeDatabase(QSqlDatabase::defaultConnection);

                    myDB.openDB();
                    userWindow = new user();
                    userWindow->show();
                }
                else // not in the database;
                {

                }
            }
        }
    }
}
