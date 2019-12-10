#ifndef NEXT_H
#define NEXT_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlError>
#include <QDebug>
#include <QListWidget>
#include <QVector>
#include "data.h"
#include "graph.h"

namespace Ui {
class next;
}

class next : public QWidget
{
    Q_OBJECT

public:
    explicit next(QWidget *parent = nullptr);
    void setCity(QVector<QString> s);

    //! destructor
    ~next();

private slots:

    //! exits out
    void on_exitButton_clicked();

    void on_route_textChanged();

private:
    Ui::next *ui;
    QVector<QString> cityOrder;
    class Graph graf;
    class data datah;

};

#endif // NEXT_H
