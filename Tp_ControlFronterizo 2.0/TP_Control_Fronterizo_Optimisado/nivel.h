#ifndef NIVEL_H
#define NIVEL_H
#include <iostream>
using namespace std;

class Nivel
{
private:
    string txt;
public:
    Nivel(string txt);

    //Leer txt con reglas segun nivel;
    void leerReglas1();
    void leerReglas2();
    void leerReglas3();
    void leerReglas4();

    //Retorna string con el txt que corresponda;
    string mostrarReglas();

};

#endif // NIVEL_H
