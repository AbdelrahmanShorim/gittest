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

void n::on_pushButton_clicked()
{
    QMessageBox::information(this,"Message","hiiiiii",QMessageBox::Ok);
}

void n::on_lol_clicked()
{
    QMessageBox::information(this,"Message","lol",QMessageBox::Ok);
}
