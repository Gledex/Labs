#include "elipse.h"

Elipse::Elipse(int height,int rad):circle(rad)
{
    this->height = height;

}
QRectF Elipse::boundingRect() const{
    //Размеры
    return QRect(0,0,radius,height);
}
void  Elipse::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget){
    //Отрисовка
    //painter->setBrush()
    painter->setBrush(QBrush(QColor(rgb),Qt::SolidPattern));
    painter->drawEllipse(0,0,radius,height);
    Q_UNUSED(option);
    Q_UNUSED(widget);
}

