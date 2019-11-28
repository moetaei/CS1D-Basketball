#ifndef COACHES_H
#define COACHES_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlError>
#include <QDebug>

namespace Ui {
class coaches;
}

class coaches : public QWidget
{
    Q_OBJECT

public:
    explicit coaches(QWidget *parent = nullptr);
    ~coaches();

    void defaultReset();

private:
    Ui::coaches *ui;
    QSqlDatabase myDB;      /*!< database connection */
};

#endif // COACHES_H
