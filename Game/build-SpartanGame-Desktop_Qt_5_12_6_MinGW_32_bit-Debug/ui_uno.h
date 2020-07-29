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
#include <QtWidgets/QGraphicsView>

QT_BEGIN_NAMESPACE

class Ui_uno
{
public:
    QGraphicsView *graphicsView;

    void setupUi(QDialog *uno)
    {
        if (uno->objectName().isEmpty())
            uno->setObjectName(QString::fromUtf8("uno"));
        uno->resize(3500, 1000);
        graphicsView = new QGraphicsView(uno);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(0, 0, 3500, 1000));
        graphicsView->setStyleSheet(QString::fromUtf8("background-image: url(:/Imagenes/mapa1.jpg);"));
        graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        graphicsView->setOptimizationFlags(QGraphicsView::DontAdjustForAntialiasing|QGraphicsView::DontClipPainter|QGraphicsView::DontSavePainterState|QGraphicsView::IndirectPainting);

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
