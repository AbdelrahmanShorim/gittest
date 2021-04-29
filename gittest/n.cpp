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

void n::on_pushButton_clicked()
{
    ui->message->setText("hi");
    QMessageBox::information(this,"Message","test error",QMessageBox::Ok);
}
//>>>>>>> 487539ba28fba1371c74c4e89c3780b61f2e7790
