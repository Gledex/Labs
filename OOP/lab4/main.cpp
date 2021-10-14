#include "mainwindow.h"
#include "point.h"
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QApplication>
#include <QTimer>
#include <QWidget>
#include <QtGui>
#include <QtCore>
#include <QObject>
#include <mainwindow.h>
#include "scene.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Scene scene;
    QGraphicsView w(&scene);
    w.setRenderHint(QPainter::Antialiasing);
    w.show();
    return a.exec();
}
