#include "juego.h"

Juego::Juego()
{
    bombaPuesta = false;
    PonerBomberman();
    Explotar = new bomba;
    connect(Explotar,SIGNAL(is_bomb_explote()),this,SLOT(generar_explosion()));
    connect(Explotar,SIGNAL(ff()),this,SLOT(generar_explosion()));

    crear_mapa();
    PonerEnemigos();
    Gameover=false;
}

Juego::~Juego()
{
    delete p_pal;
    delete enemy;
    delete Explotar;
}

bool Juego::ComprobarColision(QGraphicsItem *item, short dir)
{
    unsigned short x = item->x(), y = item->y(),
            x1, y1;
    bool move = true;

    switch (dir) {
        case 0: // Izquierda
            x -= Velocidad_Bomberman;
            x1 = x;
            y1 = y + Bloques_Alto * Escala - 1;
            break;
        case 1: // Abajo
            y += Bloques_Alto * Escala - 1 + Velocidad_Bomberman;
            x1 = x + Bloques_Ancho * Escala - 1;
            y1 = y;
            break;
        case 2: // Derecha
            x += Bloques_Ancho * Escala - 1 + Velocidad_Bomberman;
            x1 = x;
            y1 = y + Bloques_Alto * Escala - 1;
            break;
        case 3: // Arriba
            y -= Velocidad_Bomberman;
            x1 = x + Bloques_Ancho * Escala - 1;
            y1 = y;
            break;
        default:
            break;
    }

    // Comprobar colisión con los bloques
    if (bl_mapa[x / (Bloques_Ancho * Escala)][y / (Bloques_Alto * Escala)]->is_wall() ||
        bl_mapa[x1 / (Bloques_Ancho * Escala)][y1 / (Bloques_Alto * Escala)]->is_wall()) {
        move = false;
    }

    if (p_pal->collidesWithItem(enemy))
        state_Gameover();

    // Comprobar colisión con los enemigos
    for (Enemigos* enemigo : CantidadEnemigos) {
        unsigned short enemyX = enemigo->x();
        unsigned short enemyY = enemigo->y();

        if (dir == 0 && y == enemyY && x - (Bloques_Ancho * Escala) == enemyX) {
            move = false;
            break;
        } else if (dir == 1 && x == enemyX && y + (Bloques_Alto * Escala) == enemyY) {
            move = false;
            break;
        } else if (dir == 2 && y == enemyY && x + (Bloques_Ancho * Escala) == enemyX) {
            move = false;
            break;
        } else if (dir == 3 && x == enemyX && y - (Bloques_Alto * Escala) == enemyY) {
            move = false;
            break;
        }
    }
    return move;
}


void Juego::ExplosionBomba()
{
    bombaPuesta = true;
    Explotar->Escogerbomba(0, 0);
    int jugadorX = p_pal->x();
    int jugadorY = p_pal->y();

    // Calcular las posiciones ajustadas al divisor de 16*Escala más cercano
    int ajusteX = jugadorX % (16 * Escala);
    int ajusteY = jugadorY % (16 * Escala);
    int x = jugadorX - ajusteX;
    int y = jugadorY - ajusteY;
    // Verificar si el ajuste es mayor o igual a la mitad del tamaño del bloque
    // para determinar si se ajusta hacia arriba o hacia abajo
    if (ajusteX >= (8 * Escala)) {
        x += (16 * Escala);
    }
    if (ajusteY >= (8 * Escala)) {
        y += (16 * Escala);
    }
    addItem(Explotar);
    Explotar->setPos(x, y);
    Explotar->setZValue(0);
    Explotar->start_death_bomba(0);
}

void Juego::ColisionMuros(bomba* explosion)
{
    for (int y = 0; y < total_y_bloques; y++) {
        for (int x = 0; x < total_x_bloques; x++) {
            if (bl_mapa[x][y]->is_dest() && explosion->collidesWithItem(bl_mapa[x][y])) {
                // Eliminar el bloque de la escena
                removeItem(bl_mapa[x][y]);
                if (bl_mapa[x][y]->is_wall())
                    bl_mapa[x][y]->setValorNuevo(-1);
            }
        }
    }
}
void Juego::PonerBomberman()
{
    p_pal=new bomberman();
    addItem(p_pal);
    p_pal->setZValue(1);
    p_pal->setPos(48,48);
    p_pal->ElegirSprite(0,0);
}

void Juego::crear_mapa()
{
    for(int y=0;y<total_y_bloques;y++){
        for(int x=0;x<total_x_bloques;x++){
            bl_mapa[x][y] = new Bloques;
            if(x==0 || y==0 || x == total_x_bloques-1 || y==total_y_bloques-1 || (y%2==0 && x%2==0)){
                bl_mapa[x][y]->EscogerBloque(0,0);
            }
            else if(random_event(40) && x != 1 && y != 1){
                bl_mapa[x][y]->EscogerBloque(1,0);
            }
            bl_mapa[x][y]->setPos(Bloques_Ancho*Escala*x,Bloques_Alto*Escala*y);
            addItem(bl_mapa[x][y]);
            bl_mapa[x][y]->setZValue(1);
        }
    }
}

bool Juego::random_event(int p)
{
    if (rand() % 100 + 1 <= p) {
        return true;
    }
    else
        return false;
}
void Juego::PonerEnemigos()
{
    int cont = 0;
    int maxEnemigos = 5;

    while (cont < maxEnemigos) {
        // Generar una posición aleatoria dentro de los límites del mapa
        int x = (rand() % (AnchoMapa - Bloques_Ancho*Escala)) + Bloques_Ancho*Escala;
        int y = (rand() % (AltoMapa - Bloques_Alto*Escala)) + Bloques_Alto*Escala;

        // Verificar si la posición coincide con un muro indestructible
        if (random_event(40) && x != 1 && y != 1) {
            continue;  // Saltar si la posición coincide con un muro indestructible
        }

        enemy = new Enemigos();
        enemy->ElegirSprite(0, 0);
        addItem(enemy);
        QTimer* timer = new QTimer(this);
        connect(timer, &QTimer::timeout, this, [=]() {
            moverEnemigos();
        });
        timer->start(100);
        enemy->setPos(x, y);
        enemy->setZValue(1);
        CantidadEnemigos.push_back(enemy);
        cont++;
    }
}

void Juego::state_Gameover()
{
    emit gameLost();
}


void Juego::moverEnemigos()
{
    for (Enemigos* enemigo : CantidadEnemigos) {
        int enemigoX = enemigo->x();
        int enemigoY = enemigo->y();

        // Obtener la dirección hacia la que se moverá el enemigo
        int direccion = enemigo->obtenerDireccion(enemigoX, enemigoY, p_pal->x(), p_pal->y());

        // Calcular la nueva posición del enemigo según la dirección
        int nuevaPosX = enemigoX;
        int nuevaPosY = enemigoY;
        switch (direccion) {
            case 0: // Izquierda
                nuevaPosX -= enemigo->velocidad;
                break;
            case 1: // Abajo
                nuevaPosY += enemigo->velocidad;
                break;
            case 2: // Derecha
                nuevaPosX += enemigo->velocidad;
                break;
            case 3: // Arriba
                nuevaPosY -= enemigo->velocidad;
                break;
            default:
                break;
        }
        // Comprobar colisión del enemigo con el mapa y otros enemigos
        if (ComprobarColision(enemigo, direccion)) {
            enemigo->setPos(nuevaPosX, nuevaPosY);
        }
    }
}


void Juego::keyPressEvent(QKeyEvent *event)
{
    switch (event->key())
    {
        case Qt::Key_W:
            p_pal->ActualizarMovimiento(3);
            if (ComprobarColision(p_pal,3)) {
                p_pal->move_bomberman(3);
            }
            break;
        case Qt::Key_S:
            p_pal->ActualizarMovimiento(1);
            if (ComprobarColision(p_pal,1)) {
                p_pal->move_bomberman(1);
            }
            break;
        case Qt::Key_A:
            p_pal->ActualizarMovimiento(0);
            if (ComprobarColision(p_pal,0)) {
                p_pal->move_bomberman(0);
            }
            break;
        case Qt::Key_D:
            p_pal->ActualizarMovimiento(2);
            if (ComprobarColision(p_pal,2)) {
                p_pal->move_bomberman(2);
            }
            break;
    case Qt::Key_Space:
        if(!bombaPuesta) ExplosionBomba();
        default:
            break;
    }
}

void Juego::generar_explosion()
{
    bombaPuesta = false;
    removeItem(Explotar);
    Explosion = new bomba();
    Explosion->EscogerExplosion(0,1);
    addItem(Explosion);
    Explosion->setPos(Explotar->x() - 2 * Bloques_Ancho * Escala, Explotar->y() - 2 * Bloques_Alto * Escala);
    Explosion->setZValue(0);
    Explosion->start_death_bomba(1);
    ColisionMuros(Explosion);
    if (Explosion->collidesWithItem(enemy))
        removeItem(enemy);
    QTimer::singleShot(3000, [=]() {
        removeItem(Explosion);
    });
}

