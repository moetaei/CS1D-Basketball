#include "databasemanager.h"

#include <QDebug>
#include <QSqlError>
#include <QSqlError>
#include <QMessageBox>
#include <QFile>
#include <QFileDialog>

databaseManager::databaseManager() {}   //Constructor
databaseManager::~databaseManager() {}  //Destructor

/*!
****************************************************************************
 * METHOD - openDB
 * --------------------------------------------------------------------------
 * This method creates and opens a sqlite database connection if not
 * opened created/opened already.  It also returns if the database was
 * successfully created and opened.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      No parameters are required.
 *
 * POST-CONDITIONS
 *      ==> Returns if database was succesfully opened or failed to open.
 ***************************************************************************/
bool databaseManager::openDB()
{

        const QString DB_PATH = "CS1D_NBA_DB.db";


    // If database is already opened, skip creation and connection process
    if(!database.open())
    {
        // Create database object
        database = QSqlDatabase::addDatabase("QSQLITE");
        // Create database connection
        database.setDatabaseName(DB_PATH);

        // Check if database was successfully opened
        if(!database.open())
        {
            qDebug() << "Error: connection to database failed";
        }
        else
        {
            qDebug() << "Success: database opened";
        }
    }

    return database.open();
}

/*!
 ****************************************************************************
 * METHOD - closeDB
 * --------------------------------------------------------------------------
 * This method closes the sqlite database connection.  It also
 * returns if the database is still open or not.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      No parameters are required.
 *
 * POST-CONDITIONS
 *      ==> Returns if database is still open after attempt to close it.
 ***************************************************************************/
bool databaseManager::closeDB()
{
    // Close the database connection and delete if still open
    if(database.isOpen())
    {
        database.close();
        database.removeDatabase(QSqlDatabase::defaultConnection);
        qDebug() << ("Success: database closed");
    }

    return database.isOpen();
}

/*!
 ****************************************************************************
 * METHOD - lastError
 * --------------------------------------------------------------------------
 * This method returns the last database error created
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      No parameters are required.
 *
 * POST-CONDITIONS
 *      ==> Returns last database error
 ***************************************************************************/
QSqlError databaseManager::lastError()
{
    return database.lastError();
}

/*!
 ****************************************************************************
 * METHOD - currentDB
 * --------------------------------------------------------------------------
 * This method returns the currently connected database object
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      No parameters are required.
 *
 * POST-CONDITIONS
 *      ==> Returns current connected database
 ***************************************************************************/
QSqlDatabase databaseManager::currentDB() const
{
    return database;
}


