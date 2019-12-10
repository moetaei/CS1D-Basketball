#ifndef EDITTEAM_H
#define EDITTEAM_H

#include <QWidget>
#include "data.h"

namespace Ui {
class editTeam;
}

class editTeam : public QWidget
{
    Q_OBJECT

public:
    explicit editTeam(QWidget *parent = nullptr);

    //! destructor
    ~editTeam();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::editTeam *ui;

    class data test;        ///////////////////////////
};

#endif // EDITTEAM_H
