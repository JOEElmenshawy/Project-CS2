#include "mainwindow.h"

#include <QApplication>
#include<QGraphicsScene>
#include<QGraphicsView>
#include<QBrush>
#include<QFile>
#include<QTextStream>
#include<QGraphicsPixmapItem>//>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    QGraphicsView view;

    view.setWindowTitle("Game Project");
    QGraphicsScene scene;
    scene.setSceneRect(0,0,1200,1000);

    view.setFixedSize(1200,1000);
    view.setBackgroundBrush(QBrush(Qt::black));


    QGraphicsRectItem* rect = new QGraphicsRectItem();
    rect->setRect(0,0,1000,1200);
    scene.addItem(rect);
    view.setScene(&scene);



    w.show();
    return a.exec();
}
