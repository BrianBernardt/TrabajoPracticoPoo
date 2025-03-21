#include "refugiadopolitico.h"

RefugiadoPolitico::RefugiadoPolitico(char *NyA, int duracionEstancia, char tipo, char *nacionalidad, char *tipoVisita, int FechaNacimiento, char visa) : Persona(NyA, duracionEstancia, tipo, nacionalidad, tipoVisita, FechaNacimiento, visa){}

int RefugiadoPolitico::sumaPunto()
{
    return 15;
}

int RefugiadoPolitico::restaPunto()
{
    return -25;
}

bool RefugiadoPolitico::multa()
{
    return false;
}
