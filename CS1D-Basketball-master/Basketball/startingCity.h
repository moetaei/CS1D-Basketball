#ifndef CONFIRMCUSTOM1_H
#define CONFIRMCUSTOM1_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlError>
#include <QDebug>
#include <QListWidget>

namespace Ui {
class confirmCustom1;
}

class confirmCustom1 : public QWidget
{
    Q_OBJECT

public:
    explicit confirmCustom1(QWidget *parent = nullptr);


    ~confirmCustom1();


    void defaultListView();
    //!< Sets the default view the window by enabling and disabling items.
private:
    Ui::confirmCustom1 *ui;

    QString startCity = "";          /*!< the starting city */
    QSqlDatabase myDB;               /*!< database connection */
};

#endif // CONFIRMCUSTOM1_H
