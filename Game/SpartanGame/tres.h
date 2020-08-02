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
  void stres(QWidget *parent = nullptr);
  void mtres(QWidget *parent = nullptr);
  ~tres();

private:
  Ui::tres *ui;
  QGraphicsScene *scene;
  enemy1 *test;
  Spartan *player1, *player2;
  enemy1 *grunt1, *grunt2;
  enemy2 *elite1, *elite2;
  enemy3 *elite3, *elite4, *elite5;
  enemy4 *yanme1, *yanme2;
  floor *wall1, *wall2, *wall3, *wall4, *wall5, *wall6, *wall7, *wall8, *wall9, *wall10, *wall11, *wall12, *wall13, *wall14, *wall15;

};

#endif // TRES_H
