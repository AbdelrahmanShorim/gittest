#ifndef N_H
#define N_H

#include <QDialog>

namespace Ui {
class n;
}

class n : public QDialog
{
    Q_OBJECT

public:
    explicit n(QWidget *parent = nullptr);
    ~n();

private slots:
    void on_pushButton_clicked();

    void on_lol_clicked();

private:
    Ui::n *ui;
};

#endif // N_H
