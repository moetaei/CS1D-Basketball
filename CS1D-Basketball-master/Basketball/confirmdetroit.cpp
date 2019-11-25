#include "confirmdetroit.h"
#include "ui_confirmdetroit.h"

ConfirmDetroit::ConfirmDetroit(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ConfirmDetroit)
{
    ui->setupUi(this);
}

ConfirmDetroit::~ConfirmDetroit()
{
    delete ui;
}
