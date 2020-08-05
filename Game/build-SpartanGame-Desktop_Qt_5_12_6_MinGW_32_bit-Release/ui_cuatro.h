/********************************************************************************
** Form generated from reading UI file 'cuatro.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUATRO_H
#define UI_CUATRO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>

QT_BEGIN_NAMESPACE

class Ui_cuatro
{
public:
    QGraphicsView *graphicsView;

    void setupUi(QDialog *cuatro)
    {
        if (cuatro->objectName().isEmpty())
            cuatro->setObjectName(QString::fromUtf8("cuatro"));
        cuatro->resize(1800, 1000);
        graphicsView = new QGraphicsView(cuatro);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(0, 0, 1800, 1000));
        graphicsView->setStyleSheet(QString::fromUtf8("border-image: url(:/Imagenes/mapa4.jpg);"));
        graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);

        retranslateUi(cuatro);

        QMetaObject::connectSlotsByName(cuatro);
    } // setupUi

    void retranslateUi(QDialog *cuatro)
    {
        cuatro->setWindowTitle(QApplication::translate("cuatro", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cuatro: public Ui_cuatro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUATRO_H
