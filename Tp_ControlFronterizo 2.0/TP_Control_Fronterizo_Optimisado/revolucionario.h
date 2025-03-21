#ifndef REVOLUCIONARIO_H
#define REVOLUCIONARIO_H
#include "persona.h"

class Revolucionario : public Persona
{
public:
    Revolucionario(char* NyA, int duracionEstancia, char tipo, char* nacionalidad, char* tipoVisita, int FechaNacimiento, char visa);
    int sumaPunto();
    int restaPunto();
    bool multa();
};

#endif // REVOLUCIONARIO_H
