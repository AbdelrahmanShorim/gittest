#include "n.h"
#include "ui_n.h"

n::n(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::n)
{
    ui->setupUi(this);
}

n::~n()
{
    delete ui;
}
