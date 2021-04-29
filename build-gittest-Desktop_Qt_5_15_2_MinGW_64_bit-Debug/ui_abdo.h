/********************************************************************************
** Form generated from reading UI file 'abdo.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABDO_H
#define UI_ABDO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_abdo
{
public:
    QLabel *label;
    QPushButton *pushButton;
//<<<<<<< HEAD
    QLabel *hi;
//=======
//>>>>>>> e1adeb8fe1348369d87c8d2b4da8af35e8b98acf

    void setupUi(QDialog *abdo)
    {
        if (abdo->objectName().isEmpty())
            abdo->setObjectName(QString::fromUtf8("abdo"));
        abdo->resize(400, 300);
        label = new QLabel(abdo);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 70, 301, 131));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        pushButton = new QPushButton(abdo);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(100, 190, 80, 22));
//<<<<<<< HEAD
        hi = new QLabel(abdo);
        hi->setObjectName(QString::fromUtf8("hi"));
        hi->setGeometry(QRect(240, 200, 101, 16));
//=======
//>>>>>>> e1adeb8fe1348369d87c8d2b4da8af35e8b98acf

        retranslateUi(abdo);

        QMetaObject::connectSlotsByName(abdo);
    } // setupUi

    void retranslateUi(QDialog *abdo)
    {
        abdo->setWindowTitle(QCoreApplication::translate("abdo", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("abdo", "Abdo's workspace", nullptr));
        pushButton->setText(QCoreApplication::translate("abdo", "hiiiiiiiiii", nullptr));
//<<<<<<< HEAD
        hi->setText(QCoreApplication::translate("abdo", "TextLabel", nullptr));
//=======
//>>>>>>> e1adeb8fe1348369d87c8d2b4da8af35e8b98acf
    } // retranslateUi

};

namespace Ui {
    class abdo: public Ui_abdo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABDO_H
