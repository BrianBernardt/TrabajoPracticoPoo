#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <nivel.h>
#include <controlfronteriso.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    Nivel *n = new Nivel(" ");
    ControlFronteriso *c = new ControlFronteriso();
private slots:
    //Muestra las Reglas Segun nivel;
    void on_Reglas_linkActivated(const QString &link);
    void mostrarSiguientePersona();

    //Boton de iniciar juego;
    void on_Start_clicked();

    //Muestan Nivel, Puntos y Multas
    void on_Nivel_linkActivated(const QString &link);
    void on_Puntos_linkActivated(const QString &link);
    void on_Multas_linkActivated(const QString &link);

    //Guarda la partida;
    void on_pushButton_clicked();
    //Carga la partida;
    void on_pushButton_2_clicked();

    void on_Aceptar_clicked();

    void on_pushButton_3_clicked();

    void on_Exit_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
