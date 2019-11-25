#ifndef CONFIRMDETROIT_H
#define CONFIRMDETROIT_H

#include <QWidget>

namespace Ui {
class ConfirmDetroit;
}

class ConfirmDetroit : public QWidget
{
    Q_OBJECT

public:
    explicit ConfirmDetroit(QWidget *parent = nullptr);
    ~ConfirmDetroit();

private:
    Ui::ConfirmDetroit *ui;
};

#endif // CONFIRMDETROIT_H
