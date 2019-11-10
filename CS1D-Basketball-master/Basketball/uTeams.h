#ifndef UTEAMS_H
#define UTEAMS_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>

namespace Ui {
class uTeams;
}

class uTeams : public QWidget
{
    Q_OBJECT

public:
    explicit uTeams(QWidget *parent = nullptr);
    //! Constructor

    ~uTeams();
    //! Destructor

    void defaultReset();

private:
    Ui::uTeams *ui;         /*!< class object */

    QSqlDatabase myDB;      /*!< database connection */
};

#endif // UTEAMS_H
