#ifndef REFUGIADOPOLITICO_H
#define REFUGIADOPOLITICO_H
#include "persona.h"

class RefugiadoPolitico : public Persona
{
public:
    RefugiadoPolitico(char* NyA, int duracionEstancia, char tipo, char* nacionalidad, char* tipoVisita, int FechaNacimiento, char visa);
    int sumaPunto();
    int restaPunto();
    bool multa();
};

#endif // REFUGIADOPOLITICO_H
