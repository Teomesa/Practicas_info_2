#ifndef BOMBA_H
#define BOMBA_H

#include <QGraphicsPixmapItem>
#include <QTimer>

#define Bomba_Ancho 16
#define Bomba_Alto 16
#define bomba_x_sprite 0
#define bomba_y_sprite 48
#define filas_bomba 11
#define col_bomba 10
#define death_speed_bomb 700
#define total_bombas 3
#define total_explosion 10

class bomba : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    bomba();
    ~bomba();
    void start_death_bomba(int escoger);
    void Escogerbomba(int x, int y);
    void EscogerExplosion(int x, int y);
private:
    void setImagen(QPixmap *item);
    QPixmap *Bomba, *Bomba_Actual, *L_Explosion;
    QTimer *time;
    int scale, escoger, current_bomb, is_a_wall, current_explosion, fil_act;
    bool entro;
private slots:
    void death_routine_bomba();
signals:
    void is_bomb_explote();
    void ff();
};

#endif // BOMBA_H
