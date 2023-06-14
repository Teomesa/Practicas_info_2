/********************************************************************************
** Form generated from reading UI file 'escritor.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ESCRITOR_H
#define UI_ESCRITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Escritor
{
public:
    QWidget *centralwidget;
    QListWidget *listaNombres;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *nombre_simulacion;
    QPushButton *guardarSimulacion;
    QPushButton *abrirSimulacion;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Escritor)
    {
        if (Escritor->objectName().isEmpty())
            Escritor->setObjectName(QString::fromUtf8("Escritor"));
        Escritor->resize(351, 321);
        centralwidget = new QWidget(Escritor);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        listaNombres = new QListWidget(centralwidget);
        listaNombres->setObjectName(QString::fromUtf8("listaNombres"));
        listaNombres->setGeometry(QRect(8, 30, 333, 192));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 10, 141, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 230, 131, 23));
        nombre_simulacion = new QLineEdit(centralwidget);
        nombre_simulacion->setObjectName(QString::fromUtf8("nombre_simulacion"));
        nombre_simulacion->setGeometry(QRect(170, 230, 161, 23));
        guardarSimulacion = new QPushButton(centralwidget);
        guardarSimulacion->setObjectName(QString::fromUtf8("guardarSimulacion"));
        guardarSimulacion->setGeometry(QRect(90, 260, 75, 23));
        abrirSimulacion = new QPushButton(centralwidget);
        abrirSimulacion->setObjectName(QString::fromUtf8("abrirSimulacion"));
        abrirSimulacion->setGeometry(QRect(170, 260, 75, 23));
        Escritor->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Escritor);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 351, 20));
        Escritor->setMenuBar(menubar);
        statusbar = new QStatusBar(Escritor);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Escritor->setStatusBar(statusbar);

        retranslateUi(Escritor);

        QMetaObject::connectSlotsByName(Escritor);
    } // setupUi

    void retranslateUi(QMainWindow *Escritor)
    {
        Escritor->setWindowTitle(QCoreApplication::translate("Escritor", "Guardar/Abrir", nullptr));
        label->setText(QCoreApplication::translate("Escritor", "SIMULACIONES GUARDADAS", nullptr));
        label_2->setText(QCoreApplication::translate("Escritor", "Nombre de la simulaci\303\263n:", nullptr));
        guardarSimulacion->setText(QCoreApplication::translate("Escritor", "Guardar", nullptr));
        abrirSimulacion->setText(QCoreApplication::translate("Escritor", "Abrir", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Escritor: public Ui_Escritor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ESCRITOR_H
