#include "arenas.h"
#include "ui_arenas.h"

arenas::arenas(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::arenas)
{
    ui->setupUi(this);
}

arenas::~arenas()
{
    delete ui;
}
