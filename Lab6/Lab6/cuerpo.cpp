#include "cuerpo.h"
#include "grafica.h"

extern QVector<Grafica*> cuerposEnPantalla;

Cuerpo::Cuerpo(double posicionInicialx_, double posicionInicialy_, double masa_, double velocidadx_, double velocidady_, QString nombreC, double radio_, unsigned short int tipo_){

    posicionx = posicionInicialx_;
    posiciony = posicionInicialy_;
    velocidadx = velocidadx_;
    velocidady = velocidady_;
    masa = masa_;
    ax = 0;
    ay = 0;
    Gravedad = 6.67384*(pow(10,-11));
    D = radio_;
    nombreP = nombreC;
    tipo = tipo_;
}

double Cuerpo::getPosicionx(){ return posicionx; }

double Cuerpo::getPosiciony(){ return posiciony; }

double Cuerpo::getMasa(){ return masa; }

double Cuerpo::getRadio(){ return D; } //radio del cuerpo

void Cuerpo::acelerar(float px2_, float py2_, float mass2){
    radio = pow((pow((px2_-posicionx), 2) + pow((py2_-posiciony),2)),1/2);
    ax = Gravedad*mass2*(px2_-posicionx)/pow(radio,3);
    ay = Gravedad*mass2*(px2_-posiciony)/pow(radio,3);
}

void Cuerpo::actualizar(float dt){

    velocidadx = velocidadx + (ax*dt);
    velocidady = velocidady + (ay*dt);
    posicionx = posicionx + (velocidadx*dt);
    posiciony = posiciony + (velocidady*dt);
}

int Cuerpo::getTipo(){ return tipo; }
double Cuerpo::getAx(){ return ax; }
double Cuerpo::getAy(){ return ay; }
double Cuerpo::getVelocidadx(){ return velocidadx; }
double Cuerpo::getVelocidady(){ return velocidady; }
QString Cuerpo::getNombre(){ return nombreP; }
void Cuerpo::setMasa(double m){ masa = m; } //permite cambiar la masa de algún cuerpo
