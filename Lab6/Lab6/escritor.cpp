#include "escritor.h"
#include "ui_escritor.h"
#include <QMessageBox>
#include <QDebug>

extern QVector<QString> Simulaciones;
extern QGraphicsScene *escena;
extern QVector<Grafica*> cuerposEnPantalla;
extern float dt;

Escritor::Escritor(QWidget *parent) : QMainWindow(parent), ui(new Ui::Escritor){ ui->setupUi(this); }
Escritor::~Escritor(){ delete ui; }

QVector<Grafica *> Escritor::stringAvector(string archivo){
    ifstream Archivo;
    Archivo.open(archivo+".txt");
    if(!Archivo.is_open()){
        qDebug() << "Error abriendo el archivo";
        exit(1);
    }
    while(!Archivo.eof()){
        Archivo >> auxiliarS;
        PX = stod(auxiliarS);
        Archivo >> auxiliarS;
        PY = stod(auxiliarS);
        Archivo >> auxiliarS;
        M = stod(auxiliarS);
        Archivo >> auxiliarS;
        VX = stod(auxiliarS);
        Archivo >> auxiliarS;
        VY = stod(auxiliarS);
        Archivo >> auxiliarS;
        nombre = QString::fromStdString(auxiliarS);
        Archivo >> auxiliarS;
        R = stod(auxiliarS);
        Archivo >> auxiliarS;
        tipo = stoi(auxiliarS);
        cuerposEnPantalla.append(new Grafica(PX, PY, M, VX, VY, nombre, R, tipo));
    }

    for(int i=0;i<cuerposEnPantalla.size();i++){
        cuerposEnPantalla.at(i)->actualizar(cuerposEnPantalla.at(i)->getCuerpo()->getTipo(), dt);
        escena->addItem(cuerposEnPantalla.at(i));
    }
    return cuerposEnPantalla;
}

string Escritor::vectorAstring(){
    archivo = "";
    for(int i=0; i<cuerposEnPantalla.size(); i++){
        archivo += to_string(cuerposEnPantalla.at(i)->getCuerpo()->getPosicionx());
        archivo += "\t";
        archivo += to_string(cuerposEnPantalla.at(i)->getCuerpo()->getPosiciony());
        archivo += "\t";
        archivo += to_string(cuerposEnPantalla.at(i)->getCuerpo()->getMasa());
        archivo += "\t";
        archivo += to_string(cuerposEnPantalla.at(i)->getCuerpo()->getVelocidadx());
        archivo += "\t";
        archivo += to_string(cuerposEnPantalla.at(i)->getCuerpo()->getVelocidady());
        archivo += "\t";

        auxiliarS = (cuerposEnPantalla.at(i)->getCuerpo()->getNombre()).toStdString();
        archivo += auxiliarS;
        archivo += "\t";
        archivo += to_string(cuerposEnPantalla.at(i)->getCuerpo()->getRadio());
        archivo += "\t";
        archivo += to_string(cuerposEnPantalla.at(i)->getCuerpo()->getTipo());

        if((cuerposEnPantalla.size())-1 != i)
            archivo += "\n";
    }
    return  archivo;
}

void Escritor::leeArchivoNombres(){
    ui->listaNombres->clear();                              //Evita que los datos se puedan clonar en la lista
    Simulaciones.clear();

    string nombreSimulacion;

    ifstream fichero;                                           //Abre el archivo en modo lectura
    fichero.open("Nombres.txt");      //Se abre el archivo NOMBRES.txt del cual se sacará un QVector con todos los nombres de las simulaciones

    if(!fichero.is_open()){                                     //Se comprueba si el archivo fue abierto exitosamente
        qDebug() << "Error abriendo el archivo";                //Si el archivo no se logra abrir, se imprime ese mensaje
        exit(1);
    }

    while(!fichero.eof()){                                       //Se itera mientras que no se haya llegado al final del archivo
        fichero >> nombreSimulacion;
        auxiliarQ = QString::fromStdString(nombreSimulacion);
        Simulaciones.push_back(auxiliarQ);
        ui->listaNombres->addItem(auxiliarQ);
    }
    fichero.close();                                             //Se cierra el archivo
}

void Escritor::on_guardarSimulacion_clicked() {
    estado = false; //inicia suponiendo que el nombre ingresado no está

    auxiliarS = (ui->nombre_simulacion->text()).toStdString();
    if( auxiliarS!="" && auxiliarS!="Nombres" ){ //si verdaderamente se ingresó un valor, se procede a guardar

        for(int i=0; i<Simulaciones.size(); i++){
            if(Simulaciones.at(i) == ui->nombre_simulacion->text()){
                estado = true;
                break;
            }
        }

        if(estado == false){ //si el nombre no está se agrega al final de la lista el nombre
            ofstream fichero;
            fichero.open("Nombres.txt",ios::app);
            fichero << endl << auxiliarS;
            fichero.close();
        }

        else{ //el nombre está se procede a preguntarle al usuario si desea reemplazarlo
            qDebug() << "¿Reemplazar?";

            QMessageBox msgBox;
            msgBox.setText("Existe un documento con el mismo nombre");
            msgBox.setInformativeText("¿Desea reemplazarlo?");
            msgBox.setStandardButtons(QMessageBox::Save | QMessageBox::Discard | QMessageBox::Cancel);
            msgBox.setDefaultButton(QMessageBox::Save);
            int ret = msgBox.exec();

            switch (ret) {
                case QMessageBox::Save:
                    estado = false;
                    break;
                default:
                  break;
            }
        }

        if(estado == false){
            //SE GUARDAN LOS DATOS EN UN ARCHIVO NUEVO O LO SOBRE-ESCRIBE SI YA EXISTE
            ofstream streamEscritura(auxiliarS+".txt");
            streamEscritura << this->vectorAstring();
            streamEscritura.close();
        }
        this->close();
    }
}

void Escritor::on_abrirSimulacion_clicked(){
    estado = false; //inicia suponiendo que el nombre ingresado no está

    auxiliarS = (ui->nombre_simulacion->text()).toStdString();
    if( auxiliarS!="" && auxiliarS!="Nombres" ){ //si verdaderamente se ingresó un valor correcto, se procede a guardar

        for(int i=0; i<Simulaciones.size(); i++){
            if(Simulaciones.at(i) == ui->nombre_simulacion->text()){
                estado = true;
                break;
            }
        }

        if(estado == true){ //si el nombre ingresado está presente en NOMBRES.txt
            //SE BORRAN LOS DATOS DEL PLANO
            for(int i=0; i<cuerposEnPantalla.size(); i++){
                escena->removeItem(cuerposEnPantalla.at(i));
            }

            //SE VACIA EL VECTOR
            cuerposEnPantalla.clear();

            //SE SACAN LOS DATOS DEL ARCHIVO
            this->stringAvector(auxiliarS);
        }
        this->close();
    }
}
