#include "n.h"
#include <QMessageBox>
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
//<<<<<<< HEAD
//=======


//>>>>>>> 487539ba28fba1371c74c4e89c3780b61f2e7790
