#ifndef TRES_H
#define TRES_H
#include "mainwindow.h"
#include <QDialog>

namespace Ui {
  class tres;
}

class tres : public QDialog
{
Q_OBJECT

public:
explicit tres(QWidget *parent = nullptr);
void mtres(QWidget *parent = nullptr);
void stres(QWidget *parent = nullptr);
~tres();

private:
Ui::tres *ui;
QGraphicsScene *scene;
Spartan *player1, *player2;
floor *wall1, *wall2, *wall3, *wall4, *wall5, *wall6, *wall7, *wall8, *wall9;

};

#endif // TRES_H


