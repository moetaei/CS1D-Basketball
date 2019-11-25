#ifndef CONFIRMCUSTOM2_H
#define CONFIRMCUSTOM2_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlError>
#include <QDebug>
#include <QListWidget>

namespace Ui {
class confirmCustom2;
}

class confirmCustom2 : public QWidget
{
    Q_OBJECT

public:
    explicit confirmCustom2(QWidget *parent = nullptr);


    ~confirmCustom2();

    void defaultListView();
    //!< Sets the default view the window by enabling and disabling items.
private:
    Ui::confirmCustom2 *ui;

    QString startCity = "";          /*!< the starting city */
    QSqlDatabase myDB;               /*!< database connection */
};

#endif // CONFIRMCUSTOM2_H
