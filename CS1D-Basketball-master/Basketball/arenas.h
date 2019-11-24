#ifndef ARENAS_H
#define ARENAS_H

#include <QWidget>

namespace Ui {
class arenas;
}

class arenas : public QWidget
{
    Q_OBJECT

public:
    explicit arenas(QWidget *parent = nullptr);
    ~arenas();

private:
    Ui::arenas *ui;
};

#endif // ARENAS_H
