#ifndef COACHES_H
#define COACHES_H

#include <QWidget>

namespace Ui {
class coaches;
}

class coaches : public QWidget
{
    Q_OBJECT

public:
    explicit coaches(QWidget *parent = nullptr);
    ~coaches();

private:
    Ui::coaches *ui;
};

#endif // COACHES_H
