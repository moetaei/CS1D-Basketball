#ifndef CONFIRMDETROIT_H
#define CONFIRMDETROIT_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlError>
#include <QDebug>
#include <QListWidget>

namespace Ui {
class ConfirmDetroit;
}

class ConfirmDetroit : public QWidget
{
    Q_OBJECT

public:
    explicit ConfirmDetroit(QWidget *parent = nullptr);
    //!< Constructor

    ~ConfirmDetroit();
    //!< Destructor

    void defaultListView();
    //!< Sets the default view of the window by enabling and disabling items.

private:
    Ui::ConfirmDetroit *ui;

    QString startCity = "Detroit";          /*!< the starting city */
    QSqlDatabase myDB;                     /*!< database connection */
};

#endif // CONFIRMDETROIT_H
