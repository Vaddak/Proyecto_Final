#ifndef CUATRO_H
#define CUATRO_H
#include "mainwindow.h"
#include <QDialog>
#include "pelican.h"
#include "phantom.h"
#include "floor.h"
#include "bala.h"
#include "score.h"
#include "checkpoint.h"
#include "music.h"

namespace Ui {
  class cuatro;
}

class cuatro : public QDialog
{
  Q_OBJECT

public:
  explicit cuatro(QWidget *parent = nullptr);
  void scuatro(QWidget *parent = nullptr);
  void mcuatro(QWidget *parent = nullptr);
  void keyPressEvent(QKeyEvent *event);
  ~cuatro();
  QList<Pelican *> pelicans;
  QGraphicsScene *scene;
  Ui::cuatro *ui;
  checkpoint *guilty;
  Score *score;
  bala *bullet = new bala();
  Pelican *pelican1, *pelican2;
  phantom *phantom1, *phantom2;
  QList<phantom *> phantoms;
  QMediaPlayer *sound = new QMediaPlayer();
  QTimer *tim;
  QGraphicsView *view = new QGraphicsView(this);
  floor *wall1, *wall2, *wall3, *wall4, *wall5, *wall6, *wall7, *wall8, *wall9, *wall10, *wall11, *wall12;
};

#endif // CUATRO_H
