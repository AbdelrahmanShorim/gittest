#ifndef ABDO_H
#define ABDO_H

#include <QDialog>

namespace Ui {
class abdo;
}

class abdo : public QDialog
{
    Q_OBJECT

public:
    explicit abdo(QWidget *parent = nullptr);
    ~abdo();

private slots:
    void on_pushButton_clicked();

    void on_ohh_clicked();

private:
    Ui::abdo *ui;
};

#endif // ABDO_H
