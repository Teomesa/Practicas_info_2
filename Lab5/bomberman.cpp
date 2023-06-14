#include "bomberman.h"

bomberman::bomberman()
{
    Personaje=new QPixmap;
    Movimiento=new QPixmap;

    Personaje->load(":/Imagenes/NES - Bomberman - General Sprites.png");
    *Personaje=Personaje->copy(Bomberman_x_sprite,Bomberman_y_sprite,
                     Bomberman_Ancho*col_Bomberman,
                     Bomberman_Alto*filas_Bomberman);
    scale = 3;
    current_boomberman = 0;
}

bomberman::~bomberman()
{
    delete Personaje;
    delete Movimiento;
}

void bomberman::ElegirSprite(int x, int y)
{
    if(x < col_Bomberman && y<filas_Bomberman){
        *Movimiento=Personaje->copy(x*Bomberman_Ancho,y*Bomberman_Alto,
                                  Bomberman_Ancho,Bomberman_Alto);
        setImage();
    }
}

void bomberman::setImage()
{
    setPixmap(Movimiento->scaled(Movimiento->width()*scale,
                                 Movimiento->height()*scale));
}

void bomberman::ActualizarMovimiento(int type)
{
    int fila = 0;
    if(type>=2){
        fila=1;
        type -=2;
    }
    ElegirSprite(current_boomberman+total_sprites_Bomberman*type,
                 fila);
    current_boomberman++;
    if(current_boomberman==3) current_boomberman = 0;
}

void bomberman::move_bomberman(int type)
{
    switch (type) {
    case 0:
        setX(x()-Velocidad_Bomberman);
        break;
    case 1:
        setY(y()+Velocidad_Bomberman);
        break;
    case 2:
        setX(x()+Velocidad_Bomberman);
        break;
    case 3:
        setY(y()-Velocidad_Bomberman);
        break;
    default:
        break;
    }
}



