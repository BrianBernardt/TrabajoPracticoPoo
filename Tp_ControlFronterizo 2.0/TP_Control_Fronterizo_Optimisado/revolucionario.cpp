#include "revolucionario.h"

Revolucionario::Revolucionario(char *NyA, int duracionEstancia, char tipo, char *nacionalidad, char *tipoVisita, int FechaNacimiento, char visa) : Persona(NyA, duracionEstancia, tipo, nacionalidad, tipoVisita, FechaNacimiento, visa){}

int Revolucionario::sumaPunto()
{
    return 25;
}

int Revolucionario::restaPunto()
{
    return -25;
}

bool Revolucionario::multa()
{
    return true;
}
