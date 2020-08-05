/********************************************************************************
** Form generated from reading UI file 'mregistro.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MREGISTRO_H
#define UI_MREGISTRO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_mregistro
{
public:
    QGraphicsView *graphicsView;
    QPushButton *title;
    QPushButton *nicknames;
    QPushButton *aceptar;
    QPushButton *salir;
    QPushButton *atras;
    QLineEdit *player1;
    QLineEdit *player2;

    void setupUi(QDialog *mregistro)
    {
        if (mregistro->objectName().isEmpty())
            mregistro->setObjectName(QString::fromUtf8("mregistro"));
        mregistro->resize(1800, 1000);
        graphicsView = new QGraphicsView(mregistro);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(0, 0, 1800, 1000));
        graphicsView->setStyleSheet(QString::fromUtf8("border-image: url(:/Imagenes/main.jpg);"));
        title = new QPushButton(mregistro);
        title->setObjectName(QString::fromUtf8("title"));
        title->setGeometry(QRect(860, 90, 800, 200));
        title->setStyleSheet(QString::fromUtf8("border-image: url(:/Imagenes/haloc.png);"));
        nicknames = new QPushButton(mregistro);
        nicknames->setObjectName(QString::fromUtf8("nicknames"));
        nicknames->setGeometry(QRect(20, 340, 800, 111));
        nicknames->setStyleSheet(QString::fromUtf8("border-image: url(:/Imagenes/nicknames.png);"));
        aceptar = new QPushButton(mregistro);
        aceptar->setObjectName(QString::fromUtf8("aceptar"));
        aceptar->setGeometry(QRect(1200, 500, 419, 100));
        aceptar->setStyleSheet(QString::fromUtf8("border-image: url(:/Imagenes/aceptar.jpg);"));
        salir = new QPushButton(mregistro);
        salir->setObjectName(QString::fromUtf8("salir"));
        salir->setGeometry(QRect(20, 840, 419, 100));
        salir->setStyleSheet(QString::fromUtf8("border-image: url(:/Imagenes/salir.png);"));
        atras = new QPushButton(mregistro);
        atras->setObjectName(QString::fromUtf8("atras"));
        atras->setGeometry(QRect(1360, 840, 419, 100));
        atras->setStyleSheet(QString::fromUtf8("border-image: url(:/Imagenes/atras.png);"));
        player1 = new QLineEdit(mregistro);
        player1->setObjectName(QString::fromUtf8("player1"));
        player1->setGeometry(QRect(20, 500, 550, 100));
        QFont font;
        font.setFamily(QString::fromUtf8("Halo"));
        font.setPointSize(72);
        player1->setFont(font);
        player1->setStyleSheet(QString::fromUtf8("border-image: url(:/Imagenes/barra.png);"));
        player2 = new QLineEdit(mregistro);
        player2->setObjectName(QString::fromUtf8("player2"));
        player2->setGeometry(QRect(610, 500, 550, 100));
        player2->setFont(font);
        player2->setStyleSheet(QString::fromUtf8("border-image: url(:/Imagenes/barra.png);"));

        retranslateUi(mregistro);

        QMetaObject::connectSlotsByName(mregistro);
    } // setupUi

    void retranslateUi(QDialog *mregistro)
    {
        mregistro->setWindowTitle(QApplication::translate("mregistro", "Dialog", nullptr));
        title->setText(QString());
        nicknames->setText(QString());
        aceptar->setText(QString());
        salir->setText(QString());
        atras->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class mregistro: public Ui_mregistro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MREGISTRO_H
