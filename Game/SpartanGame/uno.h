#ifndef UNO_H
#define UNO_H
#include "mainwindow.h"
#include <QDialog>
#include "bala.h"
#include "score.h"
namespace Ui {
  class uno;
}

class uno : public QDialog
{
  Q_OBJECT

public:
  explicit uno(QWidget *parent = nullptr);
  void suno(QWidget *parent = nullptr);
  void muno(QWidget *parent = nullptr);
  void keyPressEvent(QKeyEvent *event);
  ~uno();
  Score *score;
  enemy1 *grunt1, *grunt2, *grunt3, *grunt4;
  QList<enemy1 *> grunts;
  QTimer *tim;
  QList<Spartan *>spartans;
  bala *bullet = new bala();
  Ui::uno *ui;
  QGraphicsScene *scene;
  Spartan *player1, *player2;
  floor *wall1, *wall2, *wall3, *wall4, *wall5;


};

#endif // UNO_H
