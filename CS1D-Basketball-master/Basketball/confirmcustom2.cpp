#include "confirmcustom2.h"
#include "ui_confirmcustom2.h"

confirmCustom2::confirmCustom2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::confirmCustom2)
{
    ui->setupUi(this);
}

confirmCustom2::~confirmCustom2()
{
    delete ui;
}
