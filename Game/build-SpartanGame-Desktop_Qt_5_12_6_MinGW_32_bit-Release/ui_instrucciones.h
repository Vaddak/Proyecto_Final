/********************************************************************************
** Form generated from reading UI file 'instrucciones.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSTRUCCIONES_H
#define UI_INSTRUCCIONES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_instrucciones
{
public:
    QGraphicsView *graphicsView;
    QPushButton *aceptar;
    QPushButton *pushButton_3;

    void setupUi(QDialog *instrucciones)
    {
        if (instrucciones->objectName().isEmpty())
            instrucciones->setObjectName(QString::fromUtf8("instrucciones"));
        instrucciones->resize(1200, 900);
        graphicsView = new QGraphicsView(instrucciones);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(0, 0, 1200, 900));
        graphicsView->setStyleSheet(QString::fromUtf8("border-image: url(:/Imagenes/instrucciones.png);"));
        aceptar = new QPushButton(instrucciones);
        aceptar->setObjectName(QString::fromUtf8("aceptar"));
        aceptar->setGeometry(QRect(400, 740, 419, 100));
        aceptar->setStyleSheet(QString::fromUtf8("border-image: url(:/Imagenes/aceptar.jpg);"));
        pushButton_3 = new QPushButton(instrucciones);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(50, 70, 1100, 580));
        pushButton_3->setStyleSheet(QString::fromUtf8("border-image: url(:/Imagenes/instructivo.png);"));

        retranslateUi(instrucciones);

        QMetaObject::connectSlotsByName(instrucciones);
    } // setupUi

    void retranslateUi(QDialog *instrucciones)
    {
        instrucciones->setWindowTitle(QApplication::translate("instrucciones", "Dialog", nullptr));
        aceptar->setText(QString());
        pushButton_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class instrucciones: public Ui_instrucciones {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSTRUCCIONES_H
