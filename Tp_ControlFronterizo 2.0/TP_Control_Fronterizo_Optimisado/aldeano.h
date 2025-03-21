#ifndef ALDEANO_H
#define ALDEANO_H
#include "persona.h"

class Aldeano : public Persona
{
public:
    Aldeano(char* NyA, int duracionEstancia, char tipo, char* nacionalidad, char* tipoVisita, int FechaNacimiento, char visa);
    int sumaPunto();
    int restaPunto();
    bool multa();
};

#endif // ALDEANO_H
