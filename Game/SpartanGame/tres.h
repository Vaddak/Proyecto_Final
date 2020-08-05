#ifndef TRES_H
#define TRES_H
#include "mainwindow.h"
#include <QDialog>
#include "bala.h"
#include "score.h"
#include "checkpoint.h"
#include "music.h"

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
  void keyPressEvent(QKeyEvent *event);
  ~tres();
  Ui::tres *ui;
  QGraphicsScene *scene;
  QGraphicsView *view = new QGraphicsView(this);
  QTimer *time;
  bala *bullet = new bala();
  Score *score;
  Spartan *player1, *player2;
  enemy3 *elite1, *elite2, *elite3, *elite4, *elite5, *elite6;
  QList<enemy3 *> elites;
  checkpoint *guilty;
  QList <Spartan *> spartans;
  QMediaPlayer *sound = new QMediaPlayer();
  enemy4 *yanme1, *yanme2;
  floor *wall1, *wall2, *wall3, *wall4, *wall5;

};

#endif // TRES_H
