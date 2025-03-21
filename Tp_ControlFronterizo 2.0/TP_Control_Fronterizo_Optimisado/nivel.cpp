#include "nivel.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

Nivel::Nivel(string txt)
{
    this->txt = txt;
}

//Leer txt con reglas segun nivel;
void Nivel::leerReglas1()
{
    ifstream archivo("C:\\Users\\Brayan\\Desktop\\Tp_ControlFronterizo 2.0\\Niveles\\nivel1.txt");
    string linea;
    stringstream contenido;

    if(archivo.is_open()){
        while(getline(archivo, linea)){
            contenido<<linea <<"\n";
        }
        archivo.close();
    }else{
        exit(1);
    }

    this->txt = contenido.str();
}
void Nivel::leerReglas2()
{
    ifstream archivo("C:\\Users\\Brayan\\Desktop\\Tp_ControlFronterizo 2.0\\Niveles\\nivel2.txt");
    string linea;
    stringstream contenido;

    if(archivo.is_open()){
        while(getline(archivo, linea)){
            contenido<<linea <<"\n";
        }
        archivo.close();
    }else{
        exit(1);
    }

    this->txt = contenido.str();
}
void Nivel::leerReglas3()
{
    ifstream archivo("C:\\Users\\Brayan\\Desktop\\Tp_ControlFronterizo 2.0\\Niveles\\nivel3.txt");
    string linea;
    stringstream contenido;

    if(archivo.is_open()){
        while(getline(archivo, linea)){
            contenido<<linea <<"\n";
        }
        archivo.close();
    }else{
        exit(1);
    }

    this->txt = contenido.str();
}
void Nivel::leerReglas4()
{
    ifstream archivo("C:\\Users\\Brayan\\Desktop\\Tp_ControlFronterizo 2.0\\Niveles\\nivel4.txt");
    string linea;
    stringstream contenido;

    if(archivo.is_open()){
        while(getline(archivo, linea)){
            contenido<<linea <<"\n";
        }
        archivo.close();
    }else{
        exit(1);
    }

    this->txt = contenido.str();
}

//Retorna string con el txt que corresponda;
string Nivel::mostrarReglas()
{
    return txt;
}
