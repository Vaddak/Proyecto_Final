/********************************************************************************
** Form generated from reading UI file 'uno.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UNO_H
#define UI_UNO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_uno
{
public:

    void setupUi(QDialog *uno)
    {
        if (uno->objectName().isEmpty())
            uno->setObjectName(QString::fromUtf8("uno"));
        uno->resize(1800, 1000);

        retranslateUi(uno);

        QMetaObject::connectSlotsByName(uno);
    } // setupUi

    void retranslateUi(QDialog *uno)
    {
        uno->setWindowTitle(QApplication::translate("uno", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class uno: public Ui_uno {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UNO_H
