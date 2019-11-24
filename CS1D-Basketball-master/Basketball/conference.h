#ifndef CONFERENCE_H
#define CONFERENCE_H

#include <QWidget>

namespace Ui {
class conference;
}

class conference : public QWidget
{
    Q_OBJECT

public:
    explicit conference(QWidget *parent = nullptr);
    ~conference();

private:
    Ui::conference *ui;
};

#endif // CONFERENCE_H
