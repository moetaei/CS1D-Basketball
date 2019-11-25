#include "coaches.h"
#include "ui_coaches.h"

coaches::coaches(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::coaches)
{
    ui->setupUi(this);
}

coaches::~coaches()
{
    delete ui;
}
