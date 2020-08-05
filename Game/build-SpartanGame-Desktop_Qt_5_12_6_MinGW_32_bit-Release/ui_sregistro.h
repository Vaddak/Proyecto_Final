/********************************************************************************
** Form generated from reading UI file 'sregistro.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SREGISTRO_H
#define UI_SREGISTRO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_sregistro
{
public:
    QGraphicsView *graphicsView;
    QPushButton *title;
    QPushButton *salir;
    QPushButton *atras;
    QPushButton *nickname;
    QPushButton *aceptar;
    QLineEdit *player1;

    void setupUi(QDialog *sregistro)
    {
        if (sregistro->objectName().isEmpty())
            sregistro->setObjectName(QString::fromUtf8("sregistro"));
        sregistro->resize(1800, 1000);
        graphicsView = new QGraphicsView(sregistro);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(0, 0, 1800, 1000));
        graphicsView->setStyleSheet(QString::fromUtf8("border-image: url(:/Imagenes/main.jpg);"));
        title = new QPushButton(sregistro);
        title->setObjectName(QString::fromUtf8("title"));
        title->setGeometry(QRect(860, 90, 800, 200));
        title->setStyleSheet(QString::fromUtf8("border-image: url(:/Imagenes/haloc.png);"));
        salir = new QPushButton(sregistro);
        salir->setObjectName(QString::fromUtf8("salir"));
        salir->setGeometry(QRect(20, 840, 419, 100));
        salir->setStyleSheet(QString::fromUtf8("border-image: url(:/Imagenes/salir.png);"));
        atras = new QPushButton(sregistro);
        atras->setObjectName(QString::fromUtf8("atras"));
        atras->setGeometry(QRect(1360, 840, 419, 100));
        atras->setStyleSheet(QString::fromUtf8("border-image: url(:/Imagenes/atras.png);"));
        nickname = new QPushButton(sregistro);
        nickname->setObjectName(QString::fromUtf8("nickname"));
        nickname->setGeometry(QRect(20, 340, 800, 111));
        nickname->setStyleSheet(QString::fromUtf8("border-image: url(:/Imagenes/nickname.jpg);\n"
""));
        aceptar = new QPushButton(sregistro);
        aceptar->setObjectName(QString::fromUtf8("aceptar"));
        aceptar->setGeometry(QRect(610, 500, 419, 100));
        aceptar->setStyleSheet(QString::fromUtf8("border-image: url(:/Imagenes/aceptar.jpg);"));
        player1 = new QLineEdit(sregistro);
        player1->setObjectName(QString::fromUtf8("player1"));
        player1->setGeometry(QRect(20, 500, 550, 100));
        QFont font;
        font.setFamily(QString::fromUtf8("Halo"));
        font.setPointSize(72);
        player1->setFont(font);
        player1->setStyleSheet(QString::fromUtf8("border-image: url(:/Imagenes/barra.png);"));

        retranslateUi(sregistro);

        QMetaObject::connectSlotsByName(sregistro);
    } // setupUi

    void retranslateUi(QDialog *sregistro)
    {
        sregistro->setWindowTitle(QApplication::translate("sregistro", "Dialog", nullptr));
        title->setText(QString());
        salir->setText(QString());
        atras->setText(QString());
        nickname->setText(QString());
        aceptar->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class sregistro: public Ui_sregistro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SREGISTRO_H
