#ifndef ENEMIGOS_H
#define ENEMIGOS_H

#define Enemigo_Ancho 16
#define Enemigo_Alto 16
#define Enemigo_x_sprite 0
#define Enemigo_y_sprite 240
#define filas_Enemigo 1
#define col_Enemigo 7
#define Time_move 5000
#define total_sprites_enemigos 11
#define Velocidad_Enemigo 4

#include <QGraphicsPixmapItem>
#include <QTimer>
#include <QObject>

class Enemigos : public QObject, public QGraphicsPixmapItem
{
public:
    Enemigos();
    ~Enemigos();
    void ElegirSprite(int x, int y);
    void setImage();
    int obtenerDireccion(int enemigoX, int enemigoY, int objetivoX, int objetivoY);
    qreal velocidad; // Variable para almacenar la velocidad del enemigo
    void ActualizarMovimiento(int type);
private:
    QPixmap *Globito, *Movimiento;
    int scale, current_globito;
};

#endif // ENEMIGOS_H
