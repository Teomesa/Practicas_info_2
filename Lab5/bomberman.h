#ifndef BOMBERMAN_H
#define BOMBERMAN_H

#define Bomberman_Ancho 16
#define Bomberman_Alto 16
#define Bomberman_x_sprite 0
#define Bomberman_y_sprite 0
#define filas_Bomberman 3
#define col_Bomberman 7
#define indestruct_bloque 0
#define Time_move 5000
#define total_sprites_Bomberman 3
#define Velocidad_Bomberman 4

#include <QGraphicsPixmapItem>
#include <QTimer>
#include <QObject>

class bomberman : public QGraphicsPixmapItem
{
public:
    bomberman();
    ~bomberman();
    void ElegirSprite(int x, int y);
    void setImage();
    void ActualizarMovimiento(int type);
    void move_bomberman(int type);
private:
    QPixmap *Personaje, *Movimiento;
    int scale, current_boomberman; // número del sprite a utilizar
};

#endif // BOMBERMAN_H
