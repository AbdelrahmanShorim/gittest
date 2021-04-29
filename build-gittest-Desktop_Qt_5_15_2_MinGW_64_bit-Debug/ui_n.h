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
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_n
{
public:
    QLabel *no;
    QLabel *message;
    QPushButton *pushButton;

    void setupUi(QDialog *n)
    {
        if (n->objectName().isEmpty())
            n->setObjectName(QString::fromUtf8("n"));
        n->resize(400, 300);
        no = new QLabel(n);
        no->setObjectName(QString::fromUtf8("no"));
        no->setGeometry(QRect(80, 50, 241, 101));
        QFont font;
        font.setPointSize(14);
        no->setFont(font);
        message = new QLabel(n);
        message->setObjectName(QString::fromUtf8("message"));
        message->setGeometry(QRect(160, 180, 171, 61));
        pushButton = new QPushButton(n);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(20, 200, 93, 28));

        retranslateUi(n);

        QMetaObject::connectSlotsByName(n);
    } // setupUi

    void retranslateUi(QDialog *n)
    {
        n->setWindowTitle(QCoreApplication::translate("n", "Dialog", nullptr));
        no->setText(QCoreApplication::translate("n", "nancy's workspace", nullptr));
        message->setText(QCoreApplication::translate("n", "This is a message", nullptr));
        pushButton->setText(QCoreApplication::translate("n", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class n: public Ui_n {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_N_H
