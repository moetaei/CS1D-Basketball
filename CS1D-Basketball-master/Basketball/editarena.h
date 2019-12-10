#ifndef EDITARENA_H
#define EDITARENA_H

#include <QWidget>

namespace Ui {
class editarena;
}

class editarena : public QWidget
{
    Q_OBJECT

public:
    explicit editarena(QWidget *parent = nullptr);
    ~editarena();

private:
    Ui::editarena *ui;
};

#endif // EDITARENA_H
