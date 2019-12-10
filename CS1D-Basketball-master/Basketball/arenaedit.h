#ifndef ARENAEDIT_H
#define ARENAEDIT_H

#include <QWidget>

namespace Ui {
class arenaedit;
}

class arenaedit : public QWidget
{
    Q_OBJECT

public:
    explicit arenaedit(QWidget *parent = nullptr);
    ~arenaedit();

private:
    Ui::arenaedit *ui;
};

#endif // ARENAEDIT_H
