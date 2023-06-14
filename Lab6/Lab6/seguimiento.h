#ifndef SEGUIMIENTO_H
#define SEGUIMIENTO_H

#include <QMainWindow>

namespace Ui { class Seguimiento; }

class Seguimiento : public QMainWindow{
    Q_OBJECT

public:
    explicit Seguimiento(QWidget *parent = nullptr);
    ~Seguimiento();

public slots:
    void actualizacion();

private:
    Ui::Seguimiento *ui;
};

#endif // SEGUIMIENTO_H
