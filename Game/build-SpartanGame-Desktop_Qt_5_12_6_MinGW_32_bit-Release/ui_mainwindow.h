/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *solitario;
    QPushButton *multiplayer;
    QPushButton *salir;
    QPushButton *title;
    QGraphicsView *graphicsView;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1800, 1000);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        solitario = new QPushButton(centralwidget);
        solitario->setObjectName(QString::fromUtf8("solitario"));
        solitario->setGeometry(QRect(20, 420, 421, 101));
        solitario->setStyleSheet(QString::fromUtf8("background-image: url(:/solitario.png);\n"
"border-image: url(:/Imagenes/solitario.png);"));
        multiplayer = new QPushButton(centralwidget);
        multiplayer->setObjectName(QString::fromUtf8("multiplayer"));
        multiplayer->setGeometry(QRect(20, 551, 421, 100));
        multiplayer->setStyleSheet(QString::fromUtf8("border-image: url(:/Imagenes/multijugador.png);"));
        salir = new QPushButton(centralwidget);
        salir->setObjectName(QString::fromUtf8("salir"));
        salir->setGeometry(QRect(20, 841, 411, 100));
        salir->setStyleSheet(QString::fromUtf8("background-image: url(:/salir.png);\n"
"border-image: url(:/Imagenes/salir.png);"));
        title = new QPushButton(centralwidget);
        title->setObjectName(QString::fromUtf8("title"));
        title->setGeometry(QRect(860, 91, 800, 200));
        title->setMaximumSize(QSize(800, 200));
        title->setStyleSheet(QString::fromUtf8("border-image: url(:/Imagenes/haloc.png);"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(0, 0, 1800, 1000));
        graphicsView->setMaximumSize(QSize(1800, 1000));
        graphicsView->setStyleSheet(QString::fromUtf8("border-image: url(:/Imagenes/main.jpg);"));
        graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsView->setInteractive(false);
        MainWindow->setCentralWidget(centralwidget);
        graphicsView->raise();
        multiplayer->raise();
        salir->raise();
        solitario->raise();
        title->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1800, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        solitario->setText(QString());
        multiplayer->setText(QString());
        salir->setText(QString());
        title->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
