#ifndef EDITARENA_H
#define EDITARENA_H

#include <QWidget>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include "databasemanager.h"

namespace Ui {
class editarena;
}

class editarena : public QWidget
{
    Q_OBJECT

public:
    explicit editarena(QWidget *parent = nullptr);

    void editLocation();

    //! destructor
    ~editarena();

private slots:
    void on_confirmLocation_clicked();

private:
    Ui::editarena *ui;
    QSqlQueryModel * list;
    QSqlDatabase myDB;
};

#endif // EDITARENA_H
