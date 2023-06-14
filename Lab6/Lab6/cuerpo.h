#ifndef CUERPO_H
#define CUERPO_H

#include <math.h>
#include <QPainter>
#include <QGraphicsItem>
#include <QRectF>

class Cuerpo: public QGraphicsEllipseItem
{
    private:
        //Lo que se le pide al usuario:
        double posicionx;
        double posiciony;
        double velocidadx;
        double velocidady;
        double D;
        double masa;

        //Valores que se calculan para cada planeta:
        double ax;
        double ay;
        double radio;
        double Gravedad;

        QString nombreP;
        unsigned short int tipo; //para diferenciar el cuerpo central de los que están en orbita

    public:
        Cuerpo(double posicionInicialx_, double posicionInicialy_, double masa_, double velocidadx_, double velocidady_, QString nombre, double radio_, unsigned short int tipo_);
        double getPosicionx();  //muestra la posicion en x
        double getPosiciony();  //muestra la posicion en y
        double getMasa(); //muestra la masa del cuerpo
        double getRadio(); //muestra el radio del cuerpo

        void acelerar(float px2_, float py2_, float mass2);
        void actualizar(float dt);

        ///////////////////////////////////////////////////
        int getTipo(); //muestra el tipo de cuerpo que es
        double getAx(); //muestra la aceleracion en x
        double getAy(); //muestra la aceleracion en y
        double getVelocidadx(); //muestra la velocidad en x
        double getVelocidady(); //muestra la velocidad en y
        QString getNombre();
        void setMasa(double m); //necesario para poder cambiar la masa del cuerpo central
};
#endif // CUERPO_H
