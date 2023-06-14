/********************************************************************************
** Form generated from reading UI file 'simulacion.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIMULACION_H
#define UI_SIMULACION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Simulacion
{
public:
    QWidget *centralwidget;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGraphicsView *Grafica;
    QLabel *label;
    QFrame *line_3;
    QFrame *line_4;
    QScrollArea *scrollArea_3;
    QWidget *scrollAreaWidgetContents_3;
    QFrame *line_2;
    QLabel *label_9;
    QListWidget *listaPlanetas;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QFrame *line;
    QDoubleSpinBox *posicionInicialX_C;
    QDoubleSpinBox *posicionInicialY_C;
    QDoubleSpinBox *masa_C;
    QDoubleSpinBox *velocidadInicialX_C;
    QDoubleSpinBox *velocidadInicialY_C;
    QLineEdit *nombre_C;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QPushButton *nuevoCuerpo;
    QPushButton *iniciarSimulacion;
    QDoubleSpinBox *radio_C;
    QLabel *label_10;
    QPushButton *Detener;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Simulacion)
    {
        if (Simulacion->objectName().isEmpty())
            Simulacion->setObjectName(QString::fromUtf8("Simulacion"));
        Simulacion->resize(1091, 594);
        Simulacion->setMinimumSize(QSize(1091, 594));
        Simulacion->setMaximumSize(QSize(1091, 594));
        centralwidget = new QWidget(Simulacion);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(20, 20, 711, 531));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 709, 529));
        Grafica = new QGraphicsView(scrollAreaWidgetContents);
        Grafica->setObjectName(QString::fromUtf8("Grafica"));
        Grafica->setGeometry(QRect(15, 40, 681, 481));
        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(330, 13, 47, 14));
        line_3 = new QFrame(scrollAreaWidgetContents);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(10, 10, 301, 21));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(scrollAreaWidgetContents);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(390, 10, 301, 21));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        scrollArea->setWidget(scrollAreaWidgetContents);
        scrollArea_3 = new QScrollArea(centralwidget);
        scrollArea_3->setObjectName(QString::fromUtf8("scrollArea_3"));
        scrollArea_3->setGeometry(QRect(750, 320, 321, 231));
        scrollArea_3->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 319, 229));
        line_2 = new QFrame(scrollAreaWidgetContents_3);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(20, 30, 281, 21));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label_9 = new QLabel(scrollAreaWidgetContents_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(49, 10, 224, 20));
        listaPlanetas = new QListWidget(scrollAreaWidgetContents_3);
        listaPlanetas->setObjectName(QString::fromUtf8("listaPlanetas"));
        listaPlanetas->setGeometry(QRect(50, 50, 221, 161));
        scrollArea_3->setWidget(scrollAreaWidgetContents_3);
        scrollArea_2 = new QScrollArea(centralwidget);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setGeometry(QRect(740, 20, 321, 281));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 319, 279));
        line = new QFrame(scrollAreaWidgetContents_2);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(20, 30, 281, 21));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        posicionInicialX_C = new QDoubleSpinBox(scrollAreaWidgetContents_2);
        posicionInicialX_C->setObjectName(QString::fromUtf8("posicionInicialX_C"));
        posicionInicialX_C->setGeometry(QRect(170, 60, 121, 21));
        posicionInicialX_C->setMinimum(-100000000000000001097906362944045541740492309677311846336810682903157585404911491537163328978494688899061249669721172515611590283743140088328307009198146046031271664502933027185697489699588559043338384466165001178426897626212945177628091195786707458122783970171784415105291802893207873272974885715430223118336.000000000000000);
        posicionInicialX_C->setMaximum(100000000000000001097906362944045541740492309677311846336810682903157585404911491537163328978494688899061249669721172515611590283743140088328307009198146046031271664502933027185697489699588559043338384466165001178426897626212945177628091195786707458122783970171784415105291802893207873272974885715430223118336.000000000000000);
        posicionInicialY_C = new QDoubleSpinBox(scrollAreaWidgetContents_2);
        posicionInicialY_C->setObjectName(QString::fromUtf8("posicionInicialY_C"));
        posicionInicialY_C->setGeometry(QRect(170, 80, 121, 21));
        posicionInicialY_C->setMinimum(-100000000000000001097906362944045541740492309677311846336810682903157585404911491537163328978494688899061249669721172515611590283743140088328307009198146046031271664502933027185697489699588559043338384466165001178426897626212945177628091195786707458122783970171784415105291802893207873272974885715430223118336.000000000000000);
        posicionInicialY_C->setMaximum(100000000000000001097906362944045541740492309677311846336810682903157585404911491537163328978494688899061249669721172515611590283743140088328307009198146046031271664502933027185697489699588559043338384466165001178426897626212945177628091195786707458122783970171784415105291802893207873272974885715430223118336.000000000000000);
        masa_C = new QDoubleSpinBox(scrollAreaWidgetContents_2);
        masa_C->setObjectName(QString::fromUtf8("masa_C"));
        masa_C->setGeometry(QRect(170, 100, 121, 21));
        masa_C->setMinimum(0.000000000000000);
        masa_C->setMaximum(100000000000000001097906362944045541740492309677311846336810682903157585404911491537163328978494688899061249669721172515611590283743140088328307009198146046031271664502933027185697489699588559043338384466165001178426897626212945177628091195786707458122783970171784415105291802893207873272974885715430223118336.000000000000000);
        velocidadInicialX_C = new QDoubleSpinBox(scrollAreaWidgetContents_2);
        velocidadInicialX_C->setObjectName(QString::fromUtf8("velocidadInicialX_C"));
        velocidadInicialX_C->setGeometry(QRect(170, 120, 121, 21));
        velocidadInicialX_C->setMinimum(-100000000000000001097906362944045541740492309677311846336810682903157585404911491537163328978494688899061249669721172515611590283743140088328307009198146046031271664502933027185697489699588559043338384466165001178426897626212945177628091195786707458122783970171784415105291802893207873272974885715430223118336.000000000000000);
        velocidadInicialX_C->setMaximum(100000000000000001097906362944045541740492309677311846336810682903157585404911491537163328978494688899061249669721172515611590283743140088328307009198146046031271664502933027185697489699588559043338384466165001178426897626212945177628091195786707458122783970171784415105291802893207873272974885715430223118336.000000000000000);
        velocidadInicialY_C = new QDoubleSpinBox(scrollAreaWidgetContents_2);
        velocidadInicialY_C->setObjectName(QString::fromUtf8("velocidadInicialY_C"));
        velocidadInicialY_C->setGeometry(QRect(170, 140, 121, 21));
        velocidadInicialY_C->setMinimum(-100000000000000001097906362944045541740492309677311846336810682903157585404911491537163328978494688899061249669721172515611590283743140088328307009198146046031271664502933027185697489699588559043338384466165001178426897626212945177628091195786707458122783970171784415105291802893207873272974885715430223118336.000000000000000);
        velocidadInicialY_C->setMaximum(100000000000000001097906362944045541740492309677311846336810682903157585404911491537163328978494688899061249669721172515611590283743140088328307009198146046031271664502933027185697489699588559043338384466165001178426897626212945177628091195786707458122783970171784415105291802893207873272974885715430223118336.000000000000000);
        nombre_C = new QLineEdit(scrollAreaWidgetContents_2);
        nombre_C->setObjectName(QString::fromUtf8("nombre_C"));
        nombre_C->setGeometry(QRect(170, 160, 121, 21));
        label_2 = new QLabel(scrollAreaWidgetContents_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(78, 10, 172, 20));
        label_3 = new QLabel(scrollAreaWidgetContents_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 60, 121, 21));
        label_4 = new QLabel(scrollAreaWidgetContents_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 80, 121, 21));
        label_5 = new QLabel(scrollAreaWidgetContents_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 100, 121, 21));
        label_6 = new QLabel(scrollAreaWidgetContents_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(30, 120, 121, 21));
        label_7 = new QLabel(scrollAreaWidgetContents_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(30, 140, 121, 21));
        label_8 = new QLabel(scrollAreaWidgetContents_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(30, 160, 121, 21));
        nuevoCuerpo = new QPushButton(scrollAreaWidgetContents_2);
        nuevoCuerpo->setObjectName(QString::fromUtf8("nuevoCuerpo"));
        nuevoCuerpo->setGeometry(QRect(30, 210, 121, 23));
        iniciarSimulacion = new QPushButton(scrollAreaWidgetContents_2);
        iniciarSimulacion->setObjectName(QString::fromUtf8("iniciarSimulacion"));
        iniciarSimulacion->setGeometry(QRect(170, 210, 121, 23));
        radio_C = new QDoubleSpinBox(scrollAreaWidgetContents_2);
        radio_C->setObjectName(QString::fromUtf8("radio_C"));
        radio_C->setGeometry(QRect(170, 180, 121, 21));
        radio_C->setMinimum(1.000000000000000);
        radio_C->setMaximum(100000000000000001097906362944045541740492309677311846336810682903157585404911491537163328978494688899061249669721172515611590283743140088328307009198146046031271664502933027185697489699588559043338384466165001178426897626212945177628091195786707458122783970171784415105291802893207873272974885715430223118336.000000000000000);
        label_10 = new QLabel(scrollAreaWidgetContents_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(30, 180, 121, 21));
        Detener = new QPushButton(scrollAreaWidgetContents_2);
        Detener->setObjectName(QString::fromUtf8("Detener"));
        Detener->setGeometry(QRect(30, 240, 261, 21));
        scrollArea_2->setWidget(scrollAreaWidgetContents_2);
        Simulacion->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Simulacion);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1091, 21));
        Simulacion->setMenuBar(menubar);
        statusbar = new QStatusBar(Simulacion);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Simulacion->setStatusBar(statusbar);

        retranslateUi(Simulacion);

        QMetaObject::connectSlotsByName(Simulacion);
    } // setupUi

    void retranslateUi(QMainWindow *Simulacion)
    {
        Simulacion->setWindowTitle(QCoreApplication::translate("Simulacion", "Simulador", nullptr));
        label->setText(QCoreApplication::translate("Simulacion", "GR\303\201FICA", nullptr));
        label_9->setText(QCoreApplication::translate("Simulacion", "SEGUIMIENTO DE LOS PLANETAS EN ORBITA", nullptr));
        label_2->setText(QCoreApplication::translate("Simulacion", "DATOS PARA UN NUEVO PLANETA", nullptr));
        label_3->setText(QCoreApplication::translate("Simulacion", "Posici\303\263n inicial en X:", nullptr));
        label_4->setText(QCoreApplication::translate("Simulacion", "Posici\303\263n inicial en Y:", nullptr));
        label_5->setText(QCoreApplication::translate("Simulacion", "Masa:", nullptr));
        label_6->setText(QCoreApplication::translate("Simulacion", "Velocidad inicial en X:", nullptr));
        label_7->setText(QCoreApplication::translate("Simulacion", "Velocidad inicial en Y:", nullptr));
        label_8->setText(QCoreApplication::translate("Simulacion", "Nombre del planeta:", nullptr));
        nuevoCuerpo->setText(QCoreApplication::translate("Simulacion", "A\303\261adir planeta", nullptr));
        iniciarSimulacion->setText(QCoreApplication::translate("Simulacion", "Iniciar simulaci\303\263n", nullptr));
        label_10->setText(QCoreApplication::translate("Simulacion", "Radio del planeta:", nullptr));
        Detener->setText(QCoreApplication::translate("Simulacion", "Detener simulacion", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Simulacion: public Ui_Simulacion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIMULACION_H
