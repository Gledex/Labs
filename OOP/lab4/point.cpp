#include "point.h"

Point::Point(QObject  *parent) : QObject(parent), QGraphicsItem ()
{
    srand(time(NULL));
    int x = qrand()%632;
    int y = qrand()%632;
    speedX = 4;
    rgb = qrand()%256256256;
    setPos(x,y);
}
Point::Point(int x, int y,int rgb,int speedX,QObject *parent):QObject(parent)
{
    this->x = x;
    this->y = y;
    this->rgb = rgb;
    this->speedX = speedX;
    setPos(x,y);

}
QRectF Point::boundingRect() const{
    //Размеры
    return QRect(0,0,8,8);
}
void  Point::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget){
    //Отрисовка
    //painter->setBrush()
    painter->setBrush(QBrush(QColor(rgb),Qt::SolidPattern));
    painter->drawEllipse(0,0,2,2);
    Q_UNUSED(option);
    Q_UNUSED(widget);
}
void Point::move(){
    //Возможно перепишу
    //Отражение
    if ((scene()->collidingItems(this).isDetached())){
        speedX = -speedX;}
    setPos(mapToParent(0,speedX));
    //x+=speedX;
}
