#include "abdo.h"
#include "ui_abdo.h"

abdo::abdo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::abdo)
{
    ui->setupUi(this);
}

abdo::~abdo()
{
    delete ui;
}
