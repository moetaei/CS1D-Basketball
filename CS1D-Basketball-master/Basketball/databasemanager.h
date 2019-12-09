#ifndef DATABASEMANAGER_H
#define DATABASEMANAGER_H

#include <QObject>
#include <QSqlDatabase>
#include <QSqlError>

/*!
 ****************************************************************************
 * SQLite FILENAME: CS1D_NBA_DB.db
 * --------------------------------------------------------------------------
 * TABLES:
 *      Distances
 *          Start:      starting team
 *          End:        ending team
 *          Kilometers: distance between starting and ending teams
 *      Info
 *          Team:           the team of the souvenir item
 *          souvenirName:   the name of the souvenir item
 *          Price:          the cost for the souvenir item
 ***************************************************************************/
class databaseManager : public QObject
{
public:
    explicit databaseManager();

    //! destructor
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

    void openSecondDb();
    //!< Creates and opens the updated database connection if not open
    /*!< POSTCONDITONS: return database.open(); */

private:
    QSqlDatabase database; /*!< SQL Database Object created for connection */
    bool secondDb;
};

#endif // DATABASEMANAGER_H
