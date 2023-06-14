#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    srand(time(NULL));
    set_window_size();
    set_graphiscview_size();
    Escenario = new Juego;
    ui->graphicsView->setStyleSheet("background-color: #388700;");
    Escenario->setSceneRect(0,0,ui->graphicsView->width()-2,ui->graphicsView->height()-2);
    ui->graphicsView->setScene(Escenario);

    connect(Escenario, SIGNAL(gameLost()), this, SLOT(handleGameLost()));
}

MainWindow::~MainWindow()
{
    delete ui;
    delete Escenario;
}

void MainWindow::set_window_size()
{
    setMinimumSize(window_x_size,window_y_size);
    setMaximumSize(window_x_size,window_y_size);
}

void MainWindow::set_graphiscview_size()
{
    ui->graphicsView->setGeometry(graphics_offset_x,graphics_offset_y,
                                  window_x_size-graphics_offset_x,
                                  window_y_size-graphics_offset_y);
}

void MainWindow::handleGameLost()
{
    QMessageBox::information(this, "Game Over", "¡Perdiste el juego!");
}
