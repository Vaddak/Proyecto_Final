#include "score.h"
#include <QFont>

Score::Score(QGraphicsItem *parent): QGraphicsTextItem(parent)
{

    //draw the text
    setPlainText(QString("Mata a los enemigos y alcanza a 343 Guilty Spark al final del mapa para que te lleve al siguiente nivel"));
    setDefaultTextColor(Qt::black);
    setFont(QFont("Halo",17));
}







