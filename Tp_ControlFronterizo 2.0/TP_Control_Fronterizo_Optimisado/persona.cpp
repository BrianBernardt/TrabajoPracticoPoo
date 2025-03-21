#include "persona.h"
#include <cstring>
using namespace std;

Persona::Persona(char *NyA, int duracionEstancia, char tipo, char *nacionalidad, char *tipoVisita, int FechaNacimiento, char visa)
{
    this->NyA = NyA;
    this->duracionEstancia = duracionEstancia;
    this->tipo = tipo;
    this->nacionalidad = nacionalidad;
    this->tipoVisita = tipoVisita;
    this->FechaNacimiento = FechaNacimiento;
    this->visa = visa;
}

//Getters y Setters;
char *Persona::getNyA() const
{
    return NyA;
}
void Persona::setNyA(char *newNyA)
{
    NyA = new char[strlen(newNyA) + 1];
    strcpy(NyA, newNyA);
}
int Persona::getDuracionEstancia() const
{
    return duracionEstancia;
}
void Persona::setDuracionEstancia(int newDuracionEstancia)
{
    duracionEstancia = newDuracionEstancia;
}
char Persona::getTipo() const
{
    return tipo;
}
/*void Persona::setTipo(char *newTipo)
{
    tipo = new char[strlen(newTipo) + 1];
    strcpy(tipo, newTipo);
}*/
char *Persona::getNacionalidad() const
{
    return nacionalidad;
}
void Persona::setNacionalidad(char *newNacionalidad)
{
    nacionalidad = new char[strlen(newNacionalidad) + 1];
    strcpy(nacionalidad, newNacionalidad);
}
char *Persona::getTipoVisita() const
{
    return tipoVisita;
}
void Persona::setTipoVisita(char *newTipoVisita)
{
    tipoVisita = new char[strlen(newTipoVisita) + 1];
    strcpy(tipoVisita, newTipoVisita);
}
int Persona::getFechaNacimiento() const
{
    return FechaNacimiento;
}
void Persona::setFechaNacimiento(int newFechaNacimiento)
{
    FechaNacimiento = newFechaNacimiento;
}
char Persona::getVisa() const
{
    return visa;
}
void Persona::setVisa(char newVisa)
{
    visa = newVisa;
}
