#include "arenaedit.h"
#include "ui_arenaedit.h"

arenaedit::arenaedit(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::arenaedit)
{
    ui->setupUi(this);
}

arenaedit::~arenaedit()
{
    delete ui;
}
