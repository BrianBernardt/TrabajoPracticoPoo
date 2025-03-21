#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "nivel.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

//Muestra las Reglas Segun nivel;
void MainWindow::on_Reglas_linkActivated(const QString &link)
{
    switch (c->getNivel()){
    case 1:{
        n->leerReglas1();
        ui->Reglas2->setText(QString::fromStdString(n->mostrarReglas()));
        break;
    }
    case 2:{
        n->leerReglas2();
        ui->Reglas2->setText(QString::fromStdString(n->mostrarReglas()));
        break;
    }
    case 3:{
        n->leerReglas3();
        ui->Reglas2->setText(QString::fromStdString(n->mostrarReglas()));
        break;
    }
    case 4:{
        n->leerReglas4();
        ui->Reglas2->setText(QString::fromStdString(n->mostrarReglas()));
        break;
    }

    }
}
void MainWindow::mostrarSiguientePersona()
{
    QString info = c->mostrarPersonaActual();
    ui->MostrarPersonas->setText(info);
}


//Inicia el juego
void MainWindow::on_Start_clicked()
{
    c->cargarPersonas();
    this->on_Reglas_linkActivated(" ");
    this->on_Nivel_linkActivated(" ");
    this->on_Puntos_linkActivated(" ");
    this->on_Multas_linkActivated(" ");
    this->mostrarSiguientePersona();
    c->txtprueba();
}

//Muestan Nivel, Puntos y Multas
void MainWindow::on_Nivel_linkActivated(const QString &link)
{
    ui->Nivel->setText("Nivel: " + QString::number(c->getNivel()));
}
void MainWindow::on_Puntos_linkActivated(const QString &link)
{
    ui->Puntos->setText("Puntos: " + QString::number(c->getPuntos()));
}
void MainWindow::on_Multas_linkActivated(const QString &link)
{
    ui->Multas->setText("Multas: " + QString::number(c->getMultas()));
}

//Guarda la partida;
void MainWindow::on_pushButton_clicked()
{
    c->guardarNivel();
    ui->info->setText("Partida Guardada Con Exito: ");
}

//Carga la partida;
void MainWindow::on_pushButton_2_clicked()
{
    c->cargarNivel();
    c->cargarPersonas();
    ui->info->setText("Partida Cargada Con Exito: ");

    this->on_Reglas_linkActivated(" ");
    this->on_Nivel_linkActivated(" ");
    this->on_Puntos_linkActivated(" ");
    this->on_Multas_linkActivated(" ");
    this->mostrarSiguientePersona();
}

//Aceptar y Rechasar jugadores
void MainWindow::on_Aceptar_clicked()
{
    c->VerificaTrue();
    this->mostrarSiguientePersona();
    this->on_Reglas_linkActivated(" ");
    this->on_Nivel_linkActivated(" ");
    this->on_Puntos_linkActivated(" ");
    this->on_Multas_linkActivated(" ");

}
void MainWindow::on_pushButton_3_clicked()
{
    c->VerificaFalse();
    this->mostrarSiguientePersona();
    this->on_Reglas_linkActivated(" ");
    this->on_Nivel_linkActivated(" ");
    this->on_Puntos_linkActivated(" ");
    this->on_Multas_linkActivated(" ");
}

//Cierra el juego
void MainWindow::on_Exit_clicked()
{
    exit(1);
}

