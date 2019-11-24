#include "divisions.h"
#include "ui_divisions.h"

divisions::divisions(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::divisions)
{
    ui->setupUi(this);
}

divisions::~divisions()
{
    delete ui;
}
