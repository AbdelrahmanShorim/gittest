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

QT_BEGIN_NAMESPACE

class Ui_abdo
{
public:
    QLabel *label;

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

        retranslateUi(abdo);

        QMetaObject::connectSlotsByName(abdo);
    } // setupUi

    void retranslateUi(QDialog *abdo)
    {
        abdo->setWindowTitle(QCoreApplication::translate("abdo", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("abdo", "Abdo's workspace", nullptr));
    } // retranslateUi

};

namespace Ui {
    class abdo: public Ui_abdo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABDO_H
