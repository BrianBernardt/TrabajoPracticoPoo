#ifndef CONTROLFRONTERISO_H
#define CONTROLFRONTERISO_H
#include "persona.h"
#include <QString>
#include <vector>
using namespace std;

struct strPersona{
    //Nivel 1;
    char NyA[30];
    int duracionEstancia;
    char tipo;
    char nacionalidad[30];
    //Nivel 2;
    char tipoVisita[30];
    //Nivel 3;
    int FechaNacimiento;
    //Nivel 4;
    char visa;
};

struct strGuardado{
    int nivel;
    int multas;
    int puntos;
    int cont;
};

class ControlFronteriso
{
private:
    vector<Persona*> personas;

    int puntos = 0;
    int multas = 0;
    int nivel = 1;
    int cont = 0;
public:
    ControlFronteriso();

    //Lee el .dat y carga a las personas en el vector;
    void cargarPersonas();
    void AddPersonas(Persona *p);

    //Crea el logEventos
    void txtprueba();

    //Verifica los datos;
    void VerificaTrue();
    void VerificaFalse();

    //Actualiza el nivel;
    void actualizNivel();

    //Termina el juego;
    bool TerminoElJuego();

    //Guardado y cargado de la partida;
    void guardarNivel();
    void cargarNivel();

    //Muestra la persona en la interfaz;
    QString mostrarPersonaActual();

    //Getrers y Setters
    int getPuntos() const;
    void setPuntos(int newPuntos);
    void setMultas(int newMultas);
    int getMultas() const;
    int getNivel() const;
    void setNivel(int newNivel);
    int getCont() const;
    void setCont(int newCont);
};

#endif // CONTROLFRONTERISO_H
