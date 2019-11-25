#ifndef DIVISIONS_H
#define DIVISIONS_H

#include <QWidget>

namespace Ui {
class divisions;
}

class divisions : public QWidget
{
    Q_OBJECT

public:
    explicit divisions(QWidget *parent = nullptr);
    ~divisions();

private:
    Ui::divisions *ui;
};

#endif // DIVISIONS_H
