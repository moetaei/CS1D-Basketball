#ifndef EDITARENA_H
#define EDITARENA_H

#include <QWidget>
#include <QSqlQuery>
#include <QSqlQueryModel>

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
};

#endif // EDITARENA_H
