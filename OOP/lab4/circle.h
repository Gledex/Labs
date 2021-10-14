#ifndef CIRCLE_H
#define CIRCLE_H
#include "point.h"

class circle:public Point
{
protected:
    int radius;
    QRectF boundingRect() const override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

public:
    circle(int radius);
};

#endif // CIRCLE_H
