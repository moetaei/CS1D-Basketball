#ifndef CONFERENCE_H
#define CONFERENCE_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlError>
#include <QDebug>

namespace Ui {
class conference;
}

class conference : public QWidget
{
    Q_OBJECT

public:
    explicit conference(QWidget *parent = nullptr);
    ~conference();

    void defaultReset();

private:
    Ui::conference *ui;
    QSqlDatabase myDB;      /*!< database connection */
};

#endif // CONFERENCE_H
