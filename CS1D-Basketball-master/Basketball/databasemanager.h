#ifndef DATABASEMANAGER_H
#define DATABASEMANAGER_H

#include <QObject>
#include <QSqlDatabase>
#include <QSqlError>

/****************************************************************************
 * SQLite FILENAME: CS1D_NBA_DB.db
 * --------------------------------------------------------------------------
 * TABLES:
 *      Distances
 *          Start:      starting city
 *          End:        ending city
 *          Kilometers: distance between starting and ending cities
 *      Info
 *          City:       the city of the food item
 *          foodName:   the name of the food item
 *          Price:      the cost for the food item
 ***************************************************************************/
class databaseManager : public QObject
{
public:
    explicit databaseManager();
     ~databaseManager();

    bool openDB();
    //!< Creates and opens a database connection if not open
    /*!< POSTCONDITONS: return database.open(); */

    bool closeDB();
    //!< Closes database connection
    /*!< POSTCONDITONS: return database.isOpen() */

    QSqlError lastError();
    //!< Returns last database related error
    /*!< POSTCONDITONS: return database.lastError(); */

    QSqlDatabase currentDB() const;
    //!< Returns connected database object
    /*!< POSTCONDITONS: return database */

private:
    QSqlDatabase database; /*!< SQL Database Object created for connection */
};

#endif // DATABASEMANAGER_H
