#ifndef SCORE_H
#define SCORE_H
#include <QGraphicsTextItem>
#include <QMessageBox>



class Score: public QGraphicsTextItem
{
public:
    Score(QGraphicsItem * parent=0);
    void normal();
    void level4();

private:
    int score;
};
#endif // SCORE_H
