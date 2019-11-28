#ifndef ADMIN_H
#define ADMIN_H

#include <QWidget>
#include <QSqlDatabase>

namespace Ui {
class admin;
}

class admin : public QWidget
{
    Q_OBJECT

public:
    explicit admin(QWidget *parent = nullptr);
    ~admin();

private slots:
    void on_teamButton_clicked();

    void on_distanceButton_clicked();

    void on_souvinerButton_clicked();

    void on_logoutButton_clicked();
    //!< Admin window closes

private:
    Ui::admin *ui;

    QSqlDatabase myDB;
};

#endif // ADMIN_H
