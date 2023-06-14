#ifndef JUEGO_H
#define JUEGO_H
#include "bomba.h"
#include "bomberman.h"
#include "bloques.h"
#include "enemigos.h"
#include <QGraphicsScene>
#include <QKeyEvent>
#include <QTimer>
#include <Qvector>
#include <QObject>
#include <cstdlib>

#define AnchoMapa 1008 // Ancho del mapa
#define AltoMapa 624 // Alto del mapa
#define Escala 3
#define total_x_bloques 21
#define total_y_bloques 13

class Juego : public QGraphicsScene
{
    Q_OBJECT
public:
    Juego();
    ~Juego();
private:
    QGraphicsScene* juegoScene;  // Miembro de datos para almacenar la referencia a la escena del juego
    bomberman *p_pal;
    Enemigos *enemy;
    bomba *Explotar, *Explosion;
    Bloques *bl_mapa[total_x_bloques][total_y_bloques];
    std::vector<Enemigos*> CantidadEnemigos;
    bool bombaPuesta;
    void removeBlock(int x, int y);
    bool ComprobarColision(QGraphicsItem *item, short dir);
    void ExplosionBomba();
    void PonerBomberman();
    void crear_mapa();
    bool random_event(int p);
    void PonerEnemigos();
    bool Gameover;
    void state_Gameover();
    void moverEnemigos();
    void ColisionMuros(bomba* explosion);
public slots:
    void keyPressEvent(QKeyEvent *event);
    void generar_explosion();
signals:
    void gameLost();
};

#endif // JUEGO_H
