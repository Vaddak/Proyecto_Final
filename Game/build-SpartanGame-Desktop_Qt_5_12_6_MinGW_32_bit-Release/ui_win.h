/********************************************************************************
** Form generated from reading UI file 'win.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIN_H
#define UI_WIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_win
{
public:
    QGraphicsView *graphicsView;
    QPushButton *salir;
    QPushButton *text;

    void setupUi(QDialog *win)
    {
        if (win->objectName().isEmpty())
            win->setObjectName(QString::fromUtf8("win"));
        win->resize(1200, 900);
        graphicsView = new QGraphicsView(win);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(0, 0, 1200, 900));
        graphicsView->setStyleSheet(QString::fromUtf8("border-image: url(:/Imagenes/instrucciones.png);"));
        salir = new QPushButton(win);
        salir->setObjectName(QString::fromUtf8("salir"));
        salir->setGeometry(QRect(390, 770, 419, 100));
        salir->setStyleSheet(QString::fromUtf8("border-image: url(:/Imagenes/salir.png);"));
        text = new QPushButton(win);
        text->setObjectName(QString::fromUtf8("text"));
        text->setGeometry(QRect(210, 50, 800, 650));
        text->setStyleSheet(QString::fromUtf8("border-image: url(:/Imagenes/win.png);"));

        retranslateUi(win);

        QMetaObject::connectSlotsByName(win);
    } // setupUi

    void retranslateUi(QDialog *win)
    {
        win->setWindowTitle(QApplication::translate("win", "Dialog", nullptr));
        salir->setText(QString());
        text->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class win: public Ui_win {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIN_H
