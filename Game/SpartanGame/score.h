#ifndef SCORE_H
#define SCORE_H
#include <QGraphicsTextItem>
#include <QMessageBox>



class Score: public QGraphicsTextItem
{
public:
    Score(QGraphicsItem * parent=0);

private:
    int score;
};
#endif // SCORE_H
