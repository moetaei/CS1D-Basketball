#ifndef CITYTOCITY_H
#define CITYTOCITY_H

#include <QDialog>
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
class cityToCity;
}

class cityToCity : public QDialog
{
    Q_OBJECT

public:
    explicit cityToCity(QWidget *parent = nullptr);
    ~cityToCity();
    void setCityName(QString start, QString end);

private slots:
    void on_exit_clicked();

private:
    Ui::cityToCity *ui;
    class Graph graf;
    class data datah;
};

#endif // CITYTOCITY_H
