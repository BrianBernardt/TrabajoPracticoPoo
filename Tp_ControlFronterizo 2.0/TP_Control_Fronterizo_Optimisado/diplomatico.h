#ifndef DIPLOMATICO_H
#define DIPLOMATICO_H
#include "persona.h"

class Diplomatico : public Persona
{
public:
    Diplomatico(char* NyA, int duracionEstancia, char tipo, char* nacionalidad, char* tipoVisita, int FechaNacimiento, char visa);
    int sumaPunto();
    int restaPunto();
    bool multa();
};

#endif // DIPLOMATICO_H
