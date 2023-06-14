#include "bloques.h"

Bloques::Bloques()
{
    Muro=new QPixmap;
    Bloque_Actual=new QPixmap;
    time = new QTimer;

    connect(time,SIGNAL(timeout()),this,SLOT(death_routine()));

    Muro->load(":/Imagenes/NES - Bomberman - General Sprites.png");
    *Muro=Muro->copy(bloque_x_sprite,bloque_y_sprite,
                     Bloques_Ancho*col_bloques,
                     Bloques_Alto*filas_bloques);
    is_destructible = false;
    scale = 3;
    current_block = 0;
    is_a_wall = -1;
}

Bloques::~Bloques()
{
    delete Muro;
    delete Bloque_Actual;
    delete time;
}

void Bloques::setValorNuevo(int nuevoValor)
{
    is_a_wall=nuevoValor;
}

void Bloques::EscogerBloque(int x, int y)
{
    is_a_wall = x;
    if(y*col_bloques+x == destruct_bloque) is_destructible = true;
    if(x < col_bloques && y<filas_bloques){
        *Bloque_Actual=Muro->copy(x*Bloques_Ancho,y*Bloques_Alto,
                                  Bloques_Ancho,Bloques_Alto);
        setImagen();
    }
}

bool Bloques::is_dest()
{
    return is_destructible;
}

void Bloques::start_death()
{
    if(is_destructible) time->start(death_speed);
}

bool Bloques::is_wall()
{
    return is_a_wall !=-1;
}

void Bloques::setImagen()
{
    setPixmap(Bloque_Actual->scaled(Bloque_Actual->width()*scale,
                                    Bloque_Actual->height()*scale));
}

void Bloques::death_routine()
{
    EscogerBloque(current_block+2,0);
    current_block++;
    if(current_block >= total_death_blocks) time->stop();
}

