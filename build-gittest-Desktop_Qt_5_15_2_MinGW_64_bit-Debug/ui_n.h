/********************************************************************************
** Form generated from reading UI file 'n.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_N_H
#define UI_N_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_n
{
public:
    QLabel *label;

    void setupUi(QDialog *n)
    {
        if (n->objectName().isEmpty())
            n->setObjectName(QString::fromUtf8("n"));
        n->resize(400, 300);
        label = new QLabel(n);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 50, 241, 101));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);

        retranslateUi(n);

        QMetaObject::connectSlotsByName(n);
    } // setupUi

    void retranslateUi(QDialog *n)
    {
        n->setWindowTitle(QCoreApplication::translate("n", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("n", "nancy's workspace", nullptr));
    } // retranslateUi

};

namespace Ui {
    class n: public Ui_n {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_N_H
