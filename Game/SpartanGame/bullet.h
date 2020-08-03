#ifndef BULLET_H
#define BULLET_H
#include <QTimer>
#include <QPixmap>
#include <QIcon>
#include <QGraphicsPixmapItem>
#include <QObject>

class bullet: public QObject, public QGraphicsPixmapItem{
  Q_OBJECT

public:
  bullet(QGraphicsItem *parent=0);
  QRectF boundingRect() const;
  void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);



public slots:
  void move();

private:
  QPixmap *pixmap;

};

#endif // BULLET_H
