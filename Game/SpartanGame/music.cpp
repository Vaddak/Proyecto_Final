#include "music.h"

music::music()
{
  fondo->setMedia(QUrl("qrc:/Music/theme.mp3"));
  fondo->play();
}
