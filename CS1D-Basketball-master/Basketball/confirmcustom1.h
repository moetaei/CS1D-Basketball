#ifndef CONFIRMCUSTOM1_H
#define CONFIRMCUSTOM1_H

#include <QWidget>

namespace Ui {
class confirmCustom1;
}

class confirmCustom1 : public QWidget
{
    Q_OBJECT

public:
    explicit confirmCustom1(QWidget *parent = nullptr);
    ~confirmCustom1();

private:
    Ui::confirmCustom1 *ui;
};

#endif // CONFIRMCUSTOM1_H
