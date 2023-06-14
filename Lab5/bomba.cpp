#include "bomba.h"

bomba::bomba()
{
    Bomba=new QPixmap;
    Bomba_Actual=new QPixmap;
    L_Explosion=new QPixmap;
    time = new QTimer;

    connect(time,SIGNAL(timeout()),this,SLOT(death_routine_bomba()));

    Bomba->load(":/Imagenes/NES - Bomberman - General Sprites.png");
    *Bomba=Bomba->copy(bomba_x_sprite,bomba_y_sprite,
                     Bomba_Ancho*col_bomba,
                     Bomba_Alto*filas_bomba);
    scale = 3;
    current_bomb = 0;
    fil_act=1;
    escoger=0;
    entro=false;
}

bomba::~bomba()
{
    delete Bomba;
    delete Bomba_Actual;
    delete time;
}

void bomba::start_death_bomba(int escoger)
{
    this->escoger = escoger;
    time->start(death_speed_bomb);
}


void bomba::death_routine_bomba()
{
    if (current_bomb < total_bombas && escoger == 0) {
        Escogerbomba(current_bomb, 0);
        current_bomb++;
    } else if (current_explosion < total_explosion && escoger == 1) {
        EscogerExplosion(current_explosion, fil_act);
        current_explosion += 5;
        if (current_explosion==10 && entro == false){
            fil_act=6;
            current_explosion=0;
            entro = true;
        }
    } else {
        time->stop();
        if (current_bomb > 0) {
            current_bomb=0;
            emit is_bomb_explote();
        }
    }
}

void bomba::Escogerbomba(int x, int y)
{
    *Bomba_Actual = Bomba->copy(x*Bomba_Ancho,y*Bomba_Alto,Bomba_Ancho,Bomba_Alto);
    setImagen(Bomba_Actual);
}

void bomba::EscogerExplosion(int x, int y)
{
    *L_Explosion = Bomba->copy(x*Bomba_Ancho,y*Bomba_Alto,Bomba_Ancho*5,Bomba_Alto*5);
    setImagen(L_Explosion);
}


void bomba::setImagen(QPixmap *item)
{
    setPixmap(item->scaled(item->width()*scale,
                                    item->height()*scale));
}

