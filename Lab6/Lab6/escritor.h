#ifndef ESCRITOR_H
#define ESCRITOR_H

#include <QMainWindow>
#include <iostream>
#include <fstream>
#include "grafica.h"

using namespace std;

extern QVector<Grafica*> cuerposEnPantalla;

namespace Ui { class Escritor; }
class Escritor : public QMainWindow {
    Q_OBJECT

public:
    explicit Escritor(QWidget *parent = nullptr);
    ~Escritor();

    QVector<Grafica*> stringAvector(string archivo);
    string vectorAstring();
    void leeArchivoNombres();   //lee el archivo que contiene los nombres de las simulaciones y los pasa a un vector

private slots:
    void on_guardarSimulacion_clicked();
    void on_abrirSimulacion_clicked();

private:
    Ui::Escritor *ui;
    QString auxiliarQ; //para poder transformar un string a QString
    string auxiliarS;
    string archivo;
    bool estado; //para evaluar si un dato ingresado ya está en la lista
    double PX;
    double PY;
    double M;
    double VX;
    double VY;
    double R;
    QString nombre;
    unsigned short int tipo;
};

#endif // ESCRITOR_H
