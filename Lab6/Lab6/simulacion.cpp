#include "simulacion.h"
#include "ui_simulacion.h"

extern QVector<Grafica*> cuerposEnPantalla;
extern unsigned int posicion;
extern QGraphicsScene *escena;
extern float dt;

#include <QDebug> //

Simulacion::Simulacion(QWidget *parent) : QMainWindow(parent), ui(new Ui::Simulacion){
    ui->setupUi(this);

    h_limit=2000;                   //Asigna los valores leidos el archivo
    v_limit=1000;
    dt=1;   //Velocidad de los cuerpos en orbita

    timer = new QTimer(this);
    escena = new QGraphicsScene(this);
    escena->setSceneRect(-h_limit/2,-v_limit/2,h_limit,v_limit);     //asigna el rectangulo que encierra la scene, determinado por h_limit y v_limit

    ui->Grafica->setScene(escena);
    ui->centralwidget->adjustSize();

    timer->stop();  //para el timer
    connect(timer,SIGNAL(timeout()),this,SLOT(actualizar()));

    cuerposEnPantalla.append(new Grafica(0, 0, 0, 0, 0, "SOL", 300, 2));

    for(int i=0;i<cuerposEnPantalla.size();i++){
        cuerposEnPantalla.at(i)->actualizar(cuerposEnPantalla.at(i)->getCuerpo()->getTipo(), dt);
        escena->addItem(cuerposEnPantalla.at(i));
    }
}

Simulacion::~Simulacion(){
    delete timer;
    delete escena;
    delete ui;
}

void Simulacion::actualizar(){ //se ejecuta constantemente para la actualización de la aceleración, velocidad y posición de cada cuerpo

    for (int i=0; i<cuerposEnPantalla.size();i++){
        for (int j=0; i<cuerposEnPantalla.size();i++){
            if(i!=j){   //se hace una interacción de cada planeta con todos los demás
                cuerposEnPantalla.at(i)->getCuerpo()->acelerar( cuerposEnPantalla.at(j)->getCuerpo()->getPosicionx(), cuerposEnPantalla.at(j)->getCuerpo()->getPosiciony(), cuerposEnPantalla.at(j)->getCuerpo()->getMasa());
                cuerposEnPantalla.at(i)->actualizar(cuerposEnPantalla.at(i)->getCuerpo()->getTipo(),dt);
            }
        }
    }
    w_seguimiento.actualizacion(); //permite que se vayan actualizando los valores de algún cuerpo seleccionado en la QListWidget
}

void Simulacion::on_nuevoCuerpo_clicked(){
    if(inicio == false){
        estado = false; //supone que:
                        //el cuerpo no se encuentra en el QVector
                        //tiene nombre
                        //su masa es menor que la del sol y mayor a cero
                        //el cuerpo se encuentra dentro de la escena

        if(abs(ui->posicionInicialX_C->value())>=40000 || abs(ui->posicionInicialY_C->value())>=20000)  //verifica que el cuerpo esté dentro del plano (solo se hace una aproximación)
            estado = true; // el cuerpo se sale
        else if(ui->nombre_C->text()=="")
            estado = true; // el cuerpo no tiene nombre
        else if(ui->masa_C->value()==0 || ui->masa_C->value()>cuerposEnPantalla.at(0)->getCuerpo()->getMasa())
            estado = true;  // masa cero o mayor a la del sol
        else if(ui->radio_C->value()>cuerposEnPantalla.at(0)->getCuerpo()->getRadio()) //el radio del sol es 300
            estado = true; // radio mayor al del sol
        else{
            for(int i=0;i<cuerposEnPantalla.size();i++){
                if(cuerposEnPantalla.at(i)->getCuerpo()->getNombre() == ui->nombre_C->text().toUpper()){
                    estado = true;  //el nombre del cuerpo se encuentra en el vector
                    break;
                }
            }
        }

        if (estado == false){
            cuerposEnPantalla.append(new Grafica(ui->posicionInicialX_C->value(),
                                                 ui->posicionInicialY_C->value(),
                                                 ui->masa_C->value(),
                                                 ui->velocidadInicialX_C->value(),
                                                 ui->velocidadInicialY_C->value(),
                                                 ui->nombre_C->text().toUpper(),
                                                 ui->radio_C->value(),
                                                 1));

            for(int i=1;i<cuerposEnPantalla.size();i++){
                cuerposEnPantalla.at(i)->actualizar(cuerposEnPantalla.at(i)->getCuerpo()->getTipo(),dt);
                escena->addItem(cuerposEnPantalla.at(i));   //Añade los nuevos cuerpos
            }
        }
    }
}

void Simulacion::on_iniciarSimulacion_clicked(){
    ui->listaPlanetas->clear(); //se vacia la lista que contiene a los planetas

    for(int i=1; i<cuerposEnPantalla.size(); i++)
         ui->listaPlanetas->addItem(cuerposEnPantalla.at(i)->getCuerpo()->getNombre()); //comienza a agregarle todos los planetas a la lista que se limpió anteriormente

    if( inicio==false && cuerposEnPantalla.size()>1 ){
        inicio = true;  //no permite agregar más planetas ni guardar cambios o abrir alguna simulación
        timer->start(dt);   //inicia la simulación
    }
}

void Simulacion::on_listaPlanetas_clicked(){
    w_seguimiento.show(); //muestra la ventana que contiene el cambio de las posiciones, aceleración y velocidad

    QList<QListWidgetItem*> items = ui->listaPlanetas->selectedItems();
    foreach(QListWidgetItem * item, items){
        posicion = ui->listaPlanetas->row(item);   //le pasa a la variable posicion el número en la lista que fue seleccionado
        qDebug() << "selección: " << ui->listaPlanetas->row(item);
    }
}

void Simulacion::on_Cambios_clicked(){
    if(inicio == false){    //si no se ha presionado el botón de inicio se puede realizar ésta acción
        w_busqueda.show(); //muestra la ventana donde se puede guardar o usar alguna simulación
        w_busqueda.leeArchivoNombres(); //el archivo NOMBRES es aquel que contiene los titulos de cada uno de los documentos guardados (que contienen los datos de alguna simulación)
    }
}


void Simulacion::on_Detener_clicked()
{
    timer->stop();
    inicio=false;
}
