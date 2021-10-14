#ifndef POINT_H
#define POINT_H

#include <QWidget>
#include <QGraphicsItem>
class Point :  public QObject,public QGraphicsItem

{
    Q_OBJECT
public:
    Point(QObject *parent = nullptr);
    Point(int x, int y,int rgb,int speedX, QObject *parent = nullptr);
public slots:
    void move();//Функция движения
protected:
    int x;
    int y;
    int rgb;//Цвет
    int speedX;//Скорость по оси
    QRectF boundingRect() const override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
};

#endif // POINT_H
