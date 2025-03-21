#include "diplomatico.h"

Diplomatico::Diplomatico(char *NyA, int duracionEstancia, char tipo, char *nacionalidad, char *tipoVisita, int FechaNacimiento, char visa) : Persona(NyA, duracionEstancia, tipo, nacionalidad, tipoVisita, FechaNacimiento, visa){}

int Diplomatico::sumaPunto()
{
    return 25;
}

int Diplomatico::restaPunto()
{
    return -25;
}

bool Diplomatico::multa()
{
    return true;
}
