#ifndef MUSIC_H
#define MUSIC_H
#include <QMediaPlayer>
#include <QtMultimedia/QMediaPlayer>

class music
{
public:
  music();

private:
    QMediaPlayer *fondo = new QMediaPlayer();
    QMediaPlayer *map1 = new QMediaPlayer();
    QMediaPlayer *map2 = new QMediaPlayer();
    QMediaPlayer *map3 = new QMediaPlayer();
    QMediaPlayer *map4= new QMediaPlayer();

};

#endif // MUSIC_H
