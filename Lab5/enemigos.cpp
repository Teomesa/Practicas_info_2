#include "enemigos.h"

Enemigos::Enemigos()
{
    Globito = new QPixmap;
    Movimiento=new QPixmap;

    Globito->load(":/Imagenes/NES - Bomberman - General Sprites.png");
    *Globito=Globito->copy(Enemigo_x_sprite,Enemigo_y_sprite,
                     Enemigo_Ancho*col_Enemigo,
                     Enemigo_Alto*filas_Enemigo);
    scale = 3;
    current_globito = 0;
    velocidad = 4;
}

Enemigos::~Enemigos()
{
    delete Globito;
    delete Movimiento;
}

void Enemigos::ElegirSprite(int x, int y)
{
    if(x < col_Enemigo && y<filas_Enemigo){
        *Movimiento=Globito->copy(x*Enemigo_Ancho,y*Enemigo_Alto,
                                  Enemigo_Ancho,Enemigo_Alto);
        setImage();
    }
}

void Enemigos::setImage()
{
    setPixmap(Movimiento->scaled(Movimiento->width()*scale,
                                 Movimiento->height()*scale));
}

int Enemigos::obtenerDireccion(int enemigoX, int enemigoY, int objetivoX, int objetivoY)
{
    // Calcular las diferencias en las coordenadas X e Y entre el enemigo y el objetivo
    int diffX = objetivoX - enemigoX;
    int diffY = objetivoY - enemigoY;

    // Comparar las magnitudes de las diferencias para determinar la dirección preferida
    if (abs(diffX) > abs(diffY)) {
        // Si la diferencia en X es mayor, moverse horizontalmente (izquierda o derecha)
        if (diffX > 0) {
            return 2; // Derecha
        } else {
            return 0; // Izquierda
        }
    } else {
        // Si la diferencia en Y es mayor o igual, moverse verticalmente (arriba o abajo)
        if (diffY > 0) {
            return 1; // Abajo
        } else {
            return 3; // Arriba
        }
    }
}


void Enemigos::ActualizarMovimiento(int type)
{
    int fila = 0;
    if(type>=2){
        fila=1;
        type -=2;
    }
    ElegirSprite(current_globito+total_sprites_enemigos*type,
                 fila);
    current_globito++;
    if(current_globito==6) current_globito = 0;
}




