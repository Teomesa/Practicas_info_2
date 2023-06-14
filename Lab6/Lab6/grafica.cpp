#include "grafica.h"
#include <QDebug>
#include <QRandomGenerator>

Grafica::Grafica(double posicionInicialx_, double posicionInicialy_, double masa_, double velocidadInicialx_, double velocidadInicialy_, QString nombre, double radio_, unsigned short int tipo_){
    cuerpo = new Cuerpo(posicionInicialx_, posicionInicialy_, masa_, velocidadInicialx_, velocidadInicialy_, nombre, radio_, tipo_);
}

Grafica::~Grafica(){ delete cuerpo; }

QRectF Grafica::boundingRect() const {
    return QRectF(-1*escala*cuerpo->getRadio(),-1*escala*cuerpo->getRadio(),2*escala*cuerpo->getRadio(),2*escala*cuerpo->getRadio());
}

void Grafica::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    if(cuerpo->getTipo()==2)
        painter->setBrush(Qt::yellow);        //asigna el color
    else
        painter->setBrush(QColor::fromRgb(QRandomGenerator::global()->generate()))  ;        //asigna el color
    painter->drawEllipse(boundingRect());    //dibuja una elipse encerrada en la boundingRect
}


void Grafica::actualizar(unsigned short int tipo_, float dt){ //le asigna la posición al cuerpo

    cuerpo->actualizar(dt); //se hacen los calculos correspondientes a la aceleración y la posición

    if(tipo_ == 2) qDebug() << "SOL:";
    else qDebug() << "PLANETA " << cuerpo->getNombre();

    qDebug() << "x[" << (cuerpo->getPosicionx()) << "], " <<
                "y[" << (cuerpo->getPosiciony()) << "], " <<
                "ax[" << cuerpo->getAx() << "], " <<
                "ay[" << cuerpo->getAy() << "], " <<
                "vx[" << cuerpo->getVelocidadx() << "], " <<
                "vy[" << cuerpo->getVelocidady() << "]";

    setPos(cuerpo->getPosicionx()*escala, (-cuerpo->getPosiciony())*escala);
}

Cuerpo *Grafica::getCuerpo(){ return cuerpo; }
