#ifndef GRAFICA_H
#define GRAFICA_H

#include <QPainter>
#include <QGraphicsItem>
#include <QGraphicsScene>
#include "cuerpo.h"

class Grafica: public QGraphicsItem
{
    public:
        Grafica(double posicionInicialx_, double posicionInicialy_, double masa_, double velocidadInicialx_, double velocidadInicialy_, QString nombre, double radio_, unsigned short int tipo_);
        ~Grafica();

        QRectF boundingRect() const;    //necesario definirla, devuelve el rectangulo que encierra el objeto
        void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget); //define como se pintara el objeto
        void actualizar(unsigned short int tipo_, float dt); //actualiza las velocidades y posiciones del cuerpo
        Cuerpo * getCuerpo();

    private:
        Cuerpo* cuerpo;
        float escala = 0.026;
};

#endif // GRAFICA_H
