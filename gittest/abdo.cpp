#include "abdo.h"
#include "ui_abdo.h"
#include <QMessageBox>

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

void abdo::on_pushButton_clicked()
{
    ui->hi->setText("yow");
    QMessageBox::information(this,"Message","test error",QMessageBox::Ok);
}
