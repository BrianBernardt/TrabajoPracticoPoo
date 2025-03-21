#include "aldeano.h"

Aldeano::Aldeano(char *NyA, int duracionEstancia, char tipo, char *nacionalidad, char *tipoVisita, int FechaNacimiento, char visa) : Persona(NyA, duracionEstancia, tipo, nacionalidad, tipoVisita, FechaNacimiento, visa){}

int Aldeano::sumaPunto()
{
    return 10;
}

int Aldeano::restaPunto()
{
    return -15;
}

bool Aldeano::multa()
{
    return false;
}
