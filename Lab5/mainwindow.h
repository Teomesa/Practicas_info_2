#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#define window_x_size 1008
#define window_y_size 672
#define graphics_offset_x 0
#define graphics_offset_y 48

#include <QMainWindow>
#include <QMessageBox>
#include <juego.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    void set_window_size();
    void set_graphiscview_size();
    Ui::MainWindow *ui;
    Juego *Escenario;
private slots:
    void handleGameLost();
};
#endif // MAINWINDOW_H
