/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *Nivel;
    QLabel *Puntos;
    QLabel *Multas;
    QLabel *info;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_3;
    QPushButton *Start;
    QPushButton *Aceptar;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *Exit;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout;
    QTextEdit *Reglas2;
    QTextEdit *MostrarPersonas;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(535, 340);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(190, 210, 171, 84));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        Nivel = new QLabel(layoutWidget);
        Nivel->setObjectName("Nivel");

        verticalLayout->addWidget(Nivel);

        Puntos = new QLabel(layoutWidget);
        Puntos->setObjectName("Puntos");

        verticalLayout->addWidget(Puntos);

        Multas = new QLabel(layoutWidget);
        Multas->setObjectName("Multas");

        verticalLayout->addWidget(Multas);

        info = new QLabel(layoutWidget);
        info->setObjectName("info");

        verticalLayout->addWidget(info);

        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 210, 82, 86));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName("pushButton_3");

        verticalLayout_2->addWidget(pushButton_3);

        Start = new QPushButton(widget);
        Start->setObjectName("Start");

        verticalLayout_2->addWidget(Start);

        Aceptar = new QPushButton(widget);
        Aceptar->setObjectName("Aceptar");

        verticalLayout_2->addWidget(Aceptar);

        widget1 = new QWidget(centralwidget);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(90, 210, 92, 86));
        verticalLayout_3 = new QVBoxLayout(widget1);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(widget1);
        pushButton->setObjectName("pushButton");

        verticalLayout_3->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget1);
        pushButton_2->setObjectName("pushButton_2");

        verticalLayout_3->addWidget(pushButton_2);

        Exit = new QPushButton(widget1);
        Exit->setObjectName("Exit");

        verticalLayout_3->addWidget(Exit);

        widget2 = new QWidget(centralwidget);
        widget2->setObjectName("widget2");
        widget2->setGeometry(QRect(0, 10, 520, 194));
        horizontalLayout = new QHBoxLayout(widget2);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        Reglas2 = new QTextEdit(widget2);
        Reglas2->setObjectName("Reglas2");

        horizontalLayout->addWidget(Reglas2);

        MostrarPersonas = new QTextEdit(widget2);
        MostrarPersonas->setObjectName("MostrarPersonas");

        horizontalLayout->addWidget(MostrarPersonas);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 535, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Nivel->setText(QCoreApplication::translate("MainWindow", "Nivel: ", nullptr));
        Puntos->setText(QCoreApplication::translate("MainWindow", "Puntos: ", nullptr));
        Multas->setText(QCoreApplication::translate("MainWindow", "Multas: ", nullptr));
        info->setText(QString());
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Rechasar", nullptr));
        Start->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        Aceptar->setText(QCoreApplication::translate("MainWindow", "Aceptar", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Guardar Partida", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Cargar Partida", nullptr));
        Exit->setText(QCoreApplication::translate("MainWindow", "Cerrar Juego", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
