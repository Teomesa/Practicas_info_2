/********************************************************************************
** Form generated from reading UI file 'seguimiento.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEGUIMIENTO_H
#define UI_SEGUIMIENTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Seguimiento
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *nombrePlaneta;
    QLabel *label_4;
    QFrame *line;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QDoubleSpinBox *posicionX;
    QDoubleSpinBox *posicionY;
    QDoubleSpinBox *aceleracionX;
    QDoubleSpinBox *aceleracionY;
    QDoubleSpinBox *velocidadX;
    QDoubleSpinBox *velocidadY;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Seguimiento)
    {
        if (Seguimiento->objectName().isEmpty())
            Seguimiento->setObjectName(QString::fromUtf8("Seguimiento"));
        Seguimiento->resize(251, 215);
        Seguimiento->setMinimumSize(QSize(251, 215));
        Seguimiento->setMaximumSize(QSize(251, 215));
        centralwidget = new QWidget(Seguimiento);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 111, 21));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 50, 111, 21));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 70, 111, 21));
        nombrePlaneta = new QLineEdit(centralwidget);
        nombrePlaneta->setObjectName(QString::fromUtf8("nombrePlaneta"));
        nombrePlaneta->setGeometry(QRect(130, 10, 111, 21));
        nombrePlaneta->setReadOnly(true);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 90, 111, 21));
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(10, 31, 231, 21));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 110, 111, 21));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 130, 111, 21));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 150, 111, 21));
        posicionX = new QDoubleSpinBox(centralwidget);
        posicionX->setObjectName(QString::fromUtf8("posicionX"));
        posicionX->setGeometry(QRect(132, 50, 111, 21));
        posicionX->setReadOnly(true);
        posicionX->setMinimum(-100000000000000001097906362944045541740492309677311846336810682903157585404911491537163328978494688899061249669721172515611590283743140088328307009198146046031271664502933027185697489699588559043338384466165001178426897626212945177628091195786707458122783970171784415105291802893207873272974885715430223118336.000000000000000);
        posicionX->setMaximum(100000000000000001097906362944045541740492309677311846336810682903157585404911491537163328978494688899061249669721172515611590283743140088328307009198146046031271664502933027185697489699588559043338384466165001178426897626212945177628091195786707458122783970171784415105291802893207873272974885715430223118336.000000000000000);
        posicionY = new QDoubleSpinBox(centralwidget);
        posicionY->setObjectName(QString::fromUtf8("posicionY"));
        posicionY->setGeometry(QRect(130, 70, 113, 21));
        posicionY->setReadOnly(true);
        posicionY->setMinimum(-100000000000000001097906362944045541740492309677311846336810682903157585404911491537163328978494688899061249669721172515611590283743140088328307009198146046031271664502933027185697489699588559043338384466165001178426897626212945177628091195786707458122783970171784415105291802893207873272974885715430223118336.000000000000000);
        posicionY->setMaximum(100000000000000001097906362944045541740492309677311846336810682903157585404911491537163328978494688899061249669721172515611590283743140088328307009198146046031271664502933027185697489699588559043338384466165001178426897626212945177628091195786707458122783970171784415105291802893207873272974885715430223118336.000000000000000);
        aceleracionX = new QDoubleSpinBox(centralwidget);
        aceleracionX->setObjectName(QString::fromUtf8("aceleracionX"));
        aceleracionX->setGeometry(QRect(130, 90, 113, 21));
        aceleracionX->setReadOnly(true);
        aceleracionX->setMinimum(-100000000000000001097906362944045541740492309677311846336810682903157585404911491537163328978494688899061249669721172515611590283743140088328307009198146046031271664502933027185697489699588559043338384466165001178426897626212945177628091195786707458122783970171784415105291802893207873272974885715430223118336.000000000000000);
        aceleracionX->setMaximum(100000000000000001097906362944045541740492309677311846336810682903157585404911491537163328978494688899061249669721172515611590283743140088328307009198146046031271664502933027185697489699588559043338384466165001178426897626212945177628091195786707458122783970171784415105291802893207873272974885715430223118336.000000000000000);
        aceleracionY = new QDoubleSpinBox(centralwidget);
        aceleracionY->setObjectName(QString::fromUtf8("aceleracionY"));
        aceleracionY->setGeometry(QRect(130, 110, 113, 21));
        aceleracionY->setReadOnly(true);
        aceleracionY->setMinimum(-100000000000000001097906362944045541740492309677311846336810682903157585404911491537163328978494688899061249669721172515611590283743140088328307009198146046031271664502933027185697489699588559043338384466165001178426897626212945177628091195786707458122783970171784415105291802893207873272974885715430223118336.000000000000000);
        aceleracionY->setMaximum(100000000000000001097906362944045541740492309677311846336810682903157585404911491537163328978494688899061249669721172515611590283743140088328307009198146046031271664502933027185697489699588559043338384466165001178426897626212945177628091195786707458122783970171784415105291802893207873272974885715430223118336.000000000000000);
        velocidadX = new QDoubleSpinBox(centralwidget);
        velocidadX->setObjectName(QString::fromUtf8("velocidadX"));
        velocidadX->setGeometry(QRect(130, 130, 113, 21));
        velocidadX->setReadOnly(true);
        velocidadX->setMinimum(-100000000000000001097906362944045541740492309677311846336810682903157585404911491537163328978494688899061249669721172515611590283743140088328307009198146046031271664502933027185697489699588559043338384466165001178426897626212945177628091195786707458122783970171784415105291802893207873272974885715430223118336.000000000000000);
        velocidadX->setMaximum(100000000000000001097906362944045541740492309677311846336810682903157585404911491537163328978494688899061249669721172515611590283743140088328307009198146046031271664502933027185697489699588559043338384466165001178426897626212945177628091195786707458122783970171784415105291802893207873272974885715430223118336.000000000000000);
        velocidadY = new QDoubleSpinBox(centralwidget);
        velocidadY->setObjectName(QString::fromUtf8("velocidadY"));
        velocidadY->setGeometry(QRect(130, 150, 113, 21));
        velocidadY->setReadOnly(true);
        velocidadY->setMinimum(-100000000000000001097906362944045541740492309677311846336810682903157585404911491537163328978494688899061249669721172515611590283743140088328307009198146046031271664502933027185697489699588559043338384466165001178426897626212945177628091195786707458122783970171784415105291802893207873272974885715430223118336.000000000000000);
        velocidadY->setMaximum(100000000000000001097906362944045541740492309677311846336810682903157585404911491537163328978494688899061249669721172515611590283743140088328307009198146046031271664502933027185697489699588559043338384466165001178426897626212945177628091195786707458122783970171784415105291802893207873272974885715430223118336.000000000000000);
        Seguimiento->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Seguimiento);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 251, 21));
        Seguimiento->setMenuBar(menubar);
        statusbar = new QStatusBar(Seguimiento);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Seguimiento->setStatusBar(statusbar);

        retranslateUi(Seguimiento);

        QMetaObject::connectSlotsByName(Seguimiento);
    } // setupUi

    void retranslateUi(QMainWindow *Seguimiento)
    {
        Seguimiento->setWindowTitle(QCoreApplication::translate("Seguimiento", "Informaci\303\263n", nullptr));
        label->setText(QCoreApplication::translate("Seguimiento", "Nombre del planeta:", nullptr));
        label_2->setText(QCoreApplication::translate("Seguimiento", "Posici\303\263n en X:", nullptr));
        label_3->setText(QCoreApplication::translate("Seguimiento", "Posici\303\263n en Y:", nullptr));
        label_4->setText(QCoreApplication::translate("Seguimiento", "Aceleraci\303\263n en X:", nullptr));
        label_5->setText(QCoreApplication::translate("Seguimiento", "Aceleraci\303\263n en Y:", nullptr));
        label_6->setText(QCoreApplication::translate("Seguimiento", "Velocidad en X:", nullptr));
        label_7->setText(QCoreApplication::translate("Seguimiento", "Velocidad en Y:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Seguimiento: public Ui_Seguimiento {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEGUIMIENTO_H
