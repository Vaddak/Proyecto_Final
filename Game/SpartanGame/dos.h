#ifndef DOS_H
#define DOS_H
#include "mainwindow.h"
#include <QDialog>
#include "score.h"
#include "checkpoint.h"
#include "bala.h"
#include "music.h"

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
  Score *score;
  bala *bullet;
  Ui::dos *ui;
  QGraphicsScene *scene;
  checkpoint *guilty;
  Spartan *player1, *player2;
  QList<Spartan *>spartans;
  QList<enemy2 *> elites;
  QTimer *tim;
  enemy2 *elite1, *elite2, *elite3, *elite4, *elite5;
  floor *wall1, *wall2, *wall3, *wall4, *wall5;
  QMediaPlayer *sound = new QMediaPlayer();

};

#endif // DOS_H
