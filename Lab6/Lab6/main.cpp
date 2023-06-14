#include "mainwindow.h"

#include <QApplication>

QVector<Grafica*> cuerposEnPantalla = {};   //Para crear varios planetas
unsigned int posicion; //posicion del dato en el QVector
QVector<QString> Simulaciones = {}; //Para almacenar los nombres de las simulaciones guardadas
QGraphicsScene *escena;      //escena que muestra los objetos animados
float dt;                   //intervalo de tiempo entre frames

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
