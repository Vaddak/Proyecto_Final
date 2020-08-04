#ifndef DOS_H
#define DOS_H
#include "mainwindow.h"
#include <QDialog>
#include "score.h"
#include "bala.h"
namespace Ui {
  class dos;
}

class dos : public QDialog
{
  Q_OBJECT

public:
  explicit dos(QWidget *parent = nullptr);
  void mdos(QWidget *parent = nullptr);
  void sdos(QWidget *parent = nullptr);
  void keyPressEvent(QKeyEvent *event);
  ~dos();

private:
  Ui::dos *ui;
  QGraphicsScene *scene;
  Score *score;
  Spartan *player1, *player2;
  QList<Spartan *>spartans;
  QList<enemy2 *> elites;
  enemy1 *grunt1, *grunt2;
  enemy2 *elite1, *elite2, *elite3, *elite4;
  floor *wall1, *wall2, *wall3, *wall4, *wall5, *wall6, *wall7, *wall8, *wall9, *wall10, *wall11, *wall12, *wall13, *wall14, *wall15;

};

#endif // DOS_H
