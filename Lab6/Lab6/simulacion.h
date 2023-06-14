#ifndef SIMULACION_H
#define SIMULACION_H

#include <QMainWindow>

#include <QGraphicsView>
#include <QGraphicsScene>
#include "seguimiento.h"
#include "escritor.h"
#include <QTimer>

#include <QListWidgetItem>

namespace Ui {class Simulacion;}

class Simulacion : public QMainWindow {
    Q_OBJECT

public:
    explicit Simulacion(QWidget *parent = nullptr);
    ~Simulacion();
    bool inicio = false;    //permite saber si se deshabilita la opción de añadir planetas e inicia la simulación
    Seguimiento w_seguimiento;
    Escritor w_busqueda;

private slots:
    void actualizar();
    void on_nuevoCuerpo_clicked();
    void on_iniciarSimulacion_clicked();
    void on_listaPlanetas_clicked();
    void on_Cambios_clicked();
    void on_Detener_clicked();
    void on_posicionInicialX_C_textChanged(const QString &arg1);

private:
    Ui::Simulacion *ui;
    QTimer *timer;              //timer para los intervalos de tiempo entre cada frame
    int h_limit;                //longitud en X del plano
    int v_limit;                //longitud en Y del plano
    bool estado;                //ayuda a delimitar el uso de los botones

};

#endif // SIMULACION_H
