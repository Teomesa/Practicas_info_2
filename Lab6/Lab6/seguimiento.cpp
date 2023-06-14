#include "seguimiento.h"
#include "ui_seguimiento.h"

#include "grafica.h"

extern QVector<Grafica*> cuerposEnPantalla;
extern unsigned int posicion;

Seguimiento::Seguimiento(QWidget *parent) : QMainWindow(parent), ui(new Ui::Seguimiento){
    ui->setupUi(this);
}

Seguimiento::~Seguimiento(){
    delete ui;
}

void Seguimiento::actualizacion(){ //se asigna a la casilla correspondiente un valor determinado de QVector<Grafica*> cuerposEnPantalla
    ui->nombrePlaneta->setText(cuerposEnPantalla.at(posicion+1)->getCuerpo()->getNombre());

    ui->posicionX->setValue(cuerposEnPantalla.at(posicion+1)->getCuerpo()->getPosicionx());
    ui->posicionY->setValue(cuerposEnPantalla.at(posicion+1)->getCuerpo()->getPosiciony());
    ui->aceleracionX->setValue(cuerposEnPantalla.at(posicion+1)->getCuerpo()->getAx());
    ui->aceleracionY->setValue(cuerposEnPantalla.at(posicion+1)->getCuerpo()->getAy());
    ui->velocidadX->setValue(cuerposEnPantalla.at(posicion+1)->getCuerpo()->getVelocidadx());
    ui->velocidadY->setValue(cuerposEnPantalla.at(posicion+1)->getCuerpo()->getVelocidady());
}
