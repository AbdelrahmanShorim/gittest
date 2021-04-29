#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "abdo.h"
#include "n.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_abdobutton_clicked()
{
    //abdo abdo;
    //abdo.setModal(true);
    //abdo.exec();
    abdo abdo;
    abdo.setModal(true);
    abdo.exec();
}

void MainWindow::on_nbutton_clicked()
{
    n nancy;
    nancy.setModal(true);
    nancy.exec();
}
