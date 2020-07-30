/********************************************************************************
** Form generated from reading UI file 'tres.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRES_H
#define UI_TRES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>

QT_BEGIN_NAMESPACE

class Ui_tres
{
public:
    QGraphicsView *graphicsView;

    void setupUi(QDialog *tres)
    {
        if (tres->objectName().isEmpty())
            tres->setObjectName(QString::fromUtf8("tres"));
        tres->resize(3500, 1000);
        graphicsView = new QGraphicsView(tres);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(0, 0, 3500, 1000));
        graphicsView->setStyleSheet(QString::fromUtf8("border-image: url(:/Imagenes/mapa3.jpg);"));

        retranslateUi(tres);

        QMetaObject::connectSlotsByName(tres);
    } // setupUi

    void retranslateUi(QDialog *tres)
    {
        tres->setWindowTitle(QApplication::translate("tres", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tres: public Ui_tres {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRES_H
