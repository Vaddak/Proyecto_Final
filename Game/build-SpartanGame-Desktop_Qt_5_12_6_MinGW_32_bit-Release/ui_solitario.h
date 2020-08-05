/********************************************************************************
** Form generated from reading UI file 'solitario.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SOLITARIO_H
#define UI_SOLITARIO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_solitario
{
public:
    QGraphicsView *solitarioview;
    QPushButton *registro;
    QPushButton *salir;
    QPushButton *title;

    void setupUi(QDialog *solitario)
    {
        if (solitario->objectName().isEmpty())
            solitario->setObjectName(QString::fromUtf8("solitario"));
        solitario->resize(1800, 1000);
        solitarioview = new QGraphicsView(solitario);
        solitarioview->setObjectName(QString::fromUtf8("solitarioview"));
        solitarioview->setGeometry(QRect(0, 0, 1800, 1000));
        solitarioview->setStyleSheet(QString::fromUtf8("border-image: url(:/Imagenes/main.jpg);"));
        registro = new QPushButton(solitario);
        registro->setObjectName(QString::fromUtf8("registro"));
        registro->setGeometry(QRect(20, 419, 419, 100));
        registro->setStyleSheet(QString::fromUtf8("border-image: url(:/Imagenes/registro.png);"));
        salir = new QPushButton(solitario);
        salir->setObjectName(QString::fromUtf8("salir"));
        salir->setGeometry(QRect(20, 840, 419, 100));
        salir->setStyleSheet(QString::fromUtf8("border-image: url(:/Imagenes/salir.png);"));
        title = new QPushButton(solitario);
        title->setObjectName(QString::fromUtf8("title"));
        title->setGeometry(QRect(860, 90, 800, 200));
        title->setStyleSheet(QString::fromUtf8("border-image: url(:/Imagenes/haloc.png);"));

        retranslateUi(solitario);

        QMetaObject::connectSlotsByName(solitario);
    } // setupUi

    void retranslateUi(QDialog *solitario)
    {
        solitario->setWindowTitle(QApplication::translate("solitario", "Dialog", nullptr));
        registro->setText(QString());
        salir->setText(QString());
        title->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class solitario: public Ui_solitario {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SOLITARIO_H
