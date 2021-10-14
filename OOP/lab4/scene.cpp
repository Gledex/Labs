#include "scene.h"
#include "point.h"
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QApplication>
#include <QTimer>
#include <QWidget>
#include <QtGui>
#include <QtCore>
#include <QObject>
#include <QtWidgets>
#include <mainwindow.h>
#include "circle.h"
#include "elipse.h"
Scene::Scene(QObject  *parent) :QGraphicsScene (parent)
{

    Elipse * pull[100];//Массив точек, в конечном итоге должно быть 100
    this->setSceneRect(0,0,640,640);//Размер ограниченной зоны
    //Обводим ограниченную зону красным квадратико
    QPen pen  = QPen(QColor(Qt::red));
    QLineF TopL(this->sceneRect().topLeft(),this->sceneRect().topRight());
    QLineF LeftL(this->sceneRect().topLeft(),this->sceneRect().bottomLeft());
    QLineF RightL(this->sceneRect().topRight(),this->sceneRect().bottomRight());
    QLineF BotL(this->sceneRect().bottomLeft(),this->sceneRect().bottomRight());

    this->addLine(TopL,pen);
    this->addLine(LeftL,pen);
    this->addLine(RightL,pen);
    this->addLine(BotL,pen);
    //Таймер
    QTimer *timer = new QTimer();
    //Инициализируем все указатели
    for(int i = 0; i < 2; i++){
       pull[i] = new Elipse(40,20);
    }
    //Добавляем точку и соединяем каждую точку с таймером и сценой
    for(int i = 0; i < 2; i++){
        this->addItem(pull[i]);
        connect(timer,SIGNAL(timeout()),pull[i],SLOT(move()));
    }
    //Запускаем таймер
    timer->start(10);

}
