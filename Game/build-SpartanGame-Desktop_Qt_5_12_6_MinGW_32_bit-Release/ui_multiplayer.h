/********************************************************************************
** Form generated from reading UI file 'multiplayer.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MULTIPLAYER_H
#define UI_MULTIPLAYER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_multiplayer
{
public:
    QGraphicsView *graphicsView;
    QPushButton *registro;
    QPushButton *salir;
    QPushButton *title;

    void setupUi(QDialog *multiplayer)
    {
        if (multiplayer->objectName().isEmpty())
            multiplayer->setObjectName(QString::fromUtf8("multiplayer"));
        multiplayer->resize(1800, 1000);
        graphicsView = new QGraphicsView(multiplayer);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(0, 0, 1800, 1000));
        graphicsView->setStyleSheet(QString::fromUtf8("border-image: url(:/Imagenes/main.jpg);"));
        registro = new QPushButton(multiplayer);
        registro->setObjectName(QString::fromUtf8("registro"));
        registro->setGeometry(QRect(20, 420, 419, 100));
        registro->setStyleSheet(QString::fromUtf8("border-image: url(:/Imagenes/registro.png);"));
        salir = new QPushButton(multiplayer);
        salir->setObjectName(QString::fromUtf8("salir"));
        salir->setGeometry(QRect(20, 840, 419, 100));
        salir->setStyleSheet(QString::fromUtf8("border-image: url(:/Imagenes/salir.png);\n"
""));
        title = new QPushButton(multiplayer);
        title->setObjectName(QString::fromUtf8("title"));
        title->setGeometry(QRect(860, 90, 800, 200));
        title->setStyleSheet(QString::fromUtf8("border-image: url(:/Imagenes/haloc.png);"));

        retranslateUi(multiplayer);

        QMetaObject::connectSlotsByName(multiplayer);
    } // setupUi

    void retranslateUi(QDialog *multiplayer)
    {
        multiplayer->setWindowTitle(QApplication::translate("multiplayer", "Dialog", nullptr));
        registro->setText(QString());
        salir->setText(QString());
        title->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class multiplayer: public Ui_multiplayer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MULTIPLAYER_H
