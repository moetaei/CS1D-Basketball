#ifndef EDITARENA_H
#define EDITARENA_H

#include <QWidget>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include "databasemanager.h"

namespace Ui {
class editarena;
}

/*! Class editArena is used to be able to edit the arena location, capacity and name in the database */
class editarena : public QWidget
{
    Q_OBJECT

public:
    explicit editarena(QWidget *parent = nullptr);

    //! edits location in database
    void editLocation();

    //! edits capacity in database
    void editCapacity();

    //! edits arena name in database
    void editArenaName();

    //! destructor
    ~editarena();

private slots:
    //! on click calls editLocation()
    void on_confirmLocation_clicked();

    //! on click calls editCapacity()
    void on_confirmCapacity_clicked();

    //! on click calls editArenaName()
    void on_confirmArenaName_clicked();

private:
    Ui::editarena *ui;
    QSqlQueryModel * list;
    QSqlDatabase myDB;
};

#endif // EDITARENA_H
