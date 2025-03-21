/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
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
    QPushButton *Start;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *Nivel;
    QLabel *Puntos;
    QLabel *Multas;
    QLabel *info;
    QPushButton *pushButton_3;
    QPushButton *Aceptar;
    QTextEdit *MostrarPersonas;
    QTextEdit *Reglas2;
    QPushButton *Exit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Start = new QPushButton(centralwidget);
        Start->setObjectName(QString::fromUtf8("Start"));
        Start->setGeometry(QRect(20, 390, 80, 24));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(20, 420, 121, 24));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 450, 121, 24));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(300, 390, 171, 84));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        Nivel = new QLabel(layoutWidget);
        Nivel->setObjectName(QString::fromUtf8("Nivel"));

        verticalLayout->addWidget(Nivel);

        Puntos = new QLabel(layoutWidget);
        Puntos->setObjectName(QString::fromUtf8("Puntos"));

        verticalLayout->addWidget(Puntos);

        Multas = new QLabel(layoutWidget);
        Multas->setObjectName(QString::fromUtf8("Multas"));

        verticalLayout->addWidget(Multas);

        info = new QLabel(layoutWidget);
        info->setObjectName(QString::fromUtf8("info"));

        verticalLayout->addWidget(info);

        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(180, 390, 80, 24));
        Aceptar = new QPushButton(centralwidget);
        Aceptar->setObjectName(QString::fromUtf8("Aceptar"));
        Aceptar->setGeometry(QRect(100, 390, 80, 24));
        MostrarPersonas = new QTextEdit(centralwidget);
        MostrarPersonas->setObjectName(QString::fromUtf8("MostrarPersonas"));
        MostrarPersonas->setGeometry(QRect(340, 10, 391, 321));
        Reglas2 = new QTextEdit(centralwidget);
        Reglas2->setObjectName(QString::fromUtf8("Reglas2"));
        Reglas2->setGeometry(QRect(0, 10, 331, 321));
        Exit = new QPushButton(centralwidget);
        Exit->setObjectName(QString::fromUtf8("Exit"));
        Exit->setGeometry(QRect(20, 480, 121, 24));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Start->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Guardar Partida", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Cargar Partida", nullptr));
        Nivel->setText(QCoreApplication::translate("MainWindow", "Nivel: ", nullptr));
        Puntos->setText(QCoreApplication::translate("MainWindow", "Puntos: ", nullptr));
        Multas->setText(QCoreApplication::translate("MainWindow", "Multas: ", nullptr));
        info->setText(QString());
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Rechasar", nullptr));
        Aceptar->setText(QCoreApplication::translate("MainWindow", "Aceptar", nullptr));
        Exit->setText(QCoreApplication::translate("MainWindow", "Cerrar Juego", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
