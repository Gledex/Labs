#ifndef ELIPSE_H
#define ELIPSE_H
#include "circle.h"

class Elipse: public circle
{
protected:
    int height;
    QRectF boundingRect() const override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
public:
    Elipse(int height,int rad);

};

#endif // ELIPSE_H
