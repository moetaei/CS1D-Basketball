#ifndef CONFIRMCUSTOM2_H
#define CONFIRMCUSTOM2_H

#include <QWidget>

namespace Ui {
class confirmCustom2;
}

class confirmCustom2 : public QWidget
{
    Q_OBJECT

public:
    explicit confirmCustom2(QWidget *parent = nullptr);
    ~confirmCustom2();

private:
    Ui::confirmCustom2 *ui;
};

#endif // CONFIRMCUSTOM2_H
