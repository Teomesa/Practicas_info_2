#include "mainwindow.h"
#include "ui_mainwindow.h"

extern QVector<Grafica*> cuerposEnPantalla;

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow){
    ui->setupUi(this);
}

MainWindow::~MainWindow(){
    delete ui;
}

void MainWindow::on_simulacionNueva_clicked(){

    if(ui->masaSol_->value() > 1){
        cuerposEnPantalla.at(0)->getCuerpo()->setMasa(ui->masaSol_->value()); //se le da el valor de la masa al sol
        this->close();
        wS.show();
    }
}
