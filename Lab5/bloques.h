#ifndef BLOQUES_H
#define BLOQUES_H

#define Bloques_Ancho 16
#define Bloques_Alto 16
#define bloque_x_sprite 48
#define bloque_y_sprite 48
#define filas_bloques 1
#define col_bloques 9
#define destruct_bloque 1
#define death_speed 2000
#define total_death_blocks 6

#include <QGraphicsPixmapItem>
#include <QTimer>
#include <QObject>

class Bloques : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Bloques();
    ~Bloques();
    void setValorNuevo(int nuevoValor);
    void EscogerBloque(int x, int y);
    bool is_dest();
    void start_death();
    bool is_wall();
private:
    void setImagen();
    QPixmap *Muro, *Bloque_Actual;
    QTimer *time;
    bool is_destructible;
    int scale, current_block, is_a_wall;
private slots:
    void death_routine();
};

#endif // BLOQUES_H
