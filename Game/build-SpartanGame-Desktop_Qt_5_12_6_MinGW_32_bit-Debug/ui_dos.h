/********************************************************************************
** Form generated from reading UI file 'dos.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOS_H
#define UI_DOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>

QT_BEGIN_NAMESPACE

class Ui_dos
{
public:
    QGraphicsView *graphicsView;

    void setupUi(QDialog *dos)
    {
        if (dos->objectName().isEmpty())
            dos->setObjectName(QString::fromUtf8("dos"));
        dos->resize(6000, 1000);
        dos->setMaximumSize(QSize(6000, 1000));
        graphicsView = new QGraphicsView(dos);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(0, 0, 6000, 1000));
        graphicsView->setMaximumSize(QSize(6000, 1000));
        graphicsView->setStyleSheet(QString::fromUtf8("border-image: url(:/Imagenes/mapa2.jpg);"));
        graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        retranslateUi(dos);

        QMetaObject::connectSlotsByName(dos);
    } // setupUi

    void retranslateUi(QDialog *dos)
    {
        dos->setWindowTitle(QApplication::translate("dos", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dos: public Ui_dos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOS_H
