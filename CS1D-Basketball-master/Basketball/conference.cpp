#include "conference.h"
#include "ui_conference.h"

conference::conference(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::conference)
{
    ui->setupUi(this);
}

conference::~conference()
{
    delete ui;
}
