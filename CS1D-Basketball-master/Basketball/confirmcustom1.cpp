#include "confirmcustom1.h"
#include "ui_confirmcustom1.h"

confirmCustom1::confirmCustom1(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::confirmCustom1)
{
    ui->setupUi(this);
}

confirmCustom1::~confirmCustom1()
{
    delete ui;
}
