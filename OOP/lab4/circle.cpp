#include "circle.h"

circle::circle(int radius):Point()
{
    this->radius = radius;

}
QRectF circle::boundingRect() const{
    //Размеры
    return QRect(0,0,radius,radius);
}
void  circle::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget){
    //Отрисовка
    //painter->setBrush()
    painter->setPen(QPen(QColor(rgb)));
    painter->drawEllipse(0,0,radius,radius);
    Q_UNUSED(option);
    Q_UNUSED(widget);
}
