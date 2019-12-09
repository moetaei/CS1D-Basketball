#ifndef EDITTEAM_H
#define EDITTEAM_H

#include <QWidget>

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

private:
    Ui::editTeam *ui;
};

#endif // EDITTEAM_H
