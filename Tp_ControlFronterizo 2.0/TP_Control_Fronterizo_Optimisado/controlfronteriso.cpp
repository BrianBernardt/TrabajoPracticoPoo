#include "controlfronteriso.h"
#include "persona.h"
#include <iostream>
#include <fstream>
#include "aldeano.h"
#include "diplomatico.h"
#include "revolucionario.h"
#include "refugiadopolitico.h"
#include <QString>
using namespace std;

ControlFronteriso::ControlFronteriso(){}

//Lee el .dat y carga a las personas en el vector;
void ControlFronteriso::cargarPersonas()
{
    ifstream archivo("C:\\Users\\Brayan\\Desktop\\Tp_ControlFronterizo 2.0\\Personas\\Personas.dat", ios::binary);

    if(!archivo){
        exit(1);
    }

    strPersona p;

    while(archivo.read(reinterpret_cast<char*>(&p), sizeof(strPersona))){
        if(p.tipo == 'A'){
            Persona *x = new Aldeano("0", p.duracionEstancia, p.tipo, "o", "o", p.FechaNacimiento, p.visa);
            x->setNyA(p.NyA);
            x->setNacionalidad(p.nacionalidad);
            x->setTipoVisita(p.tipoVisita);
            this->AddPersonas(x);
        }else if(p.tipo == 'D'){
            Persona *x = new Diplomatico("0", p.duracionEstancia, p.tipo, "o", "o", p.FechaNacimiento, p.visa);
            x->setNyA(p.NyA);
            x->setNacionalidad(p.nacionalidad);
            x->setTipoVisita(p.tipoVisita);
            this->AddPersonas(x);
        }else if(p.tipo == 'V'){
            Persona *x = new Revolucionario("0", p.duracionEstancia, p.tipo, "o", "o", p.FechaNacimiento, p.visa);
            x->setNyA(p.NyA);
            x->setNacionalidad(p.nacionalidad);
            x->setTipoVisita(p.tipoVisita);
            this->AddPersonas(x);
        }else if(p.tipo == 'R'){
            Persona *x = new RefugiadoPolitico("0", p.duracionEstancia, p.tipo, "o", "o", p.FechaNacimiento, p.visa);
            x->setNyA(p.NyA);
            x->setNacionalidad(p.nacionalidad);
            x->setTipoVisita(p.tipoVisita);
            this->AddPersonas(x);
        }
    }
}
void ControlFronteriso::AddPersonas(Persona *p)
{
    personas.push_back(p);
}

void ControlFronteriso::txtprueba()
{
    ofstream archi;
        archi.open("C:\\Users\\Brayan\\Desktop\\Tp_ControlFronterizo 2.0\\LogEventos\\Log_Eventos.txt", ios::app);

        if(archi.is_open()){
            archi<< personas[cont]->getNyA() <<personas[cont]->getTipo() <<personas[cont]->getDuracionEstancia() <<personas[cont]->getFechaNacimiento() <<personas[cont]->getNacionalidad() <<personas[cont]->getTipoVisita() <<personas[cont]->getVisa();
            archi<<"Puntos: " <<puntos <<" Multas: " <<multas <<" Nivel: " <<nivel <<endl;
        }
    archi.close();
}

//Verifica los datos True;
void ControlFronteriso::VerificaTrue()
{
    switch (this->getNivel()) {
    case 1:{
        if(this->personas[cont]->getTipo() != 'V'){
            this->puntos += personas[cont]->restaPunto();
            if(this->personas[cont]->multa()){
                this->multas++;
            }
        }else{
            this->puntos += personas[cont]->sumaPunto();
        }
        break;
    }
    case 2:{
        if((this->personas[cont]->getTipoVisita() != "Anarquismo") && (this->personas[cont]->getNacionalidad() != "Argentina")){
            this->puntos += personas[cont]->restaPunto();
            if(this->personas[cont]->multa()){
                this->multas++;
            }
        }else{
            this->puntos += personas[cont]->sumaPunto();
        }
        break;
    }
    case 3:{
        if((this->personas[cont]->getTipoVisita() != "Anarquismo") && (this->personas[cont]->getFechaNacimiento() > 2006)){
            this->puntos += personas[cont]->restaPunto();
            if(this->personas[cont]->multa()){
                this->multas++;
            }
        }else{
            this->puntos += personas[cont]->sumaPunto();
        }
        break;
    }
    case 4:{
        if((this->personas[cont]->getTipoVisita() != "Anarquismo") && (this->personas[cont]->getVisa() != 'n')){
            this->puntos += personas[cont]->restaPunto();
            if(this->personas[cont]->multa()){
                this->multas++;
            }
        }else{
            this->puntos += personas[cont]->sumaPunto();
        }
    }
    }
}
//Verifica los datos False;
void ControlFronteriso::VerificaFalse()
{
    switch (this->getNivel()) {
    case 1:{
        if(this->personas[cont]->getTipo() == 'V'){
            this->puntos += personas[cont]->restaPunto();
            if(this->personas[cont]->multa()){
                this->multas++;
            }
        }else{
            this->puntos += personas[cont]->sumaPunto();
        }
        break;
    }
    case 2:{
        if((this->personas[cont]->getTipoVisita() == "Anarquismo") && (this->personas[cont]->getNacionalidad() == "Argentina")){
            this->puntos += personas[cont]->restaPunto();
            if(this->personas[cont]->multa()){
                this->multas++;
            }
        }else{
            this->puntos += personas[cont]->sumaPunto();
        }
        break;
    }
    case 3:{
        if((this->personas[cont]->getTipoVisita() == "Anarquismo") && (this->personas[cont]->getFechaNacimiento() < 2006)){
            this->puntos += personas[cont]->restaPunto();
            if(this->personas[cont]->multa()){
                this->multas++;
            }
        }else{
            this->puntos += personas[cont]->sumaPunto();
        }
        break;
    }
    case 4:{
        if((this->personas[cont]->getTipoVisita() == "Anarquismo") && (this->personas[cont]->getVisa() == 's')){
            this->puntos += personas[cont]->restaPunto();
            if(this->personas[cont]->multa()){
                this->multas++;
            }
        }else{
            this->puntos += personas[cont]->sumaPunto();
        }
    }
    }
}

//Actualiza el nivel;
void ControlFronteriso::actualizNivel()
{
    if(cont == 3){
        nivel++;
    }else if(cont == 7){
        nivel++;
    }else if(cont == 11){
        nivel++;
    }
}

//Termina el juego;
bool ControlFronteriso::TerminoElJuego()
{
    return this->multas > 4 || this->puntos < -100;
}

//Guardado y cargado de la partida;
void ControlFronteriso::guardarNivel()
{
    ofstream archivo("C:\\Users\\Brayan\\Desktop\\Tp_ControlFronterizo 2.0\\Guardado\\guardado.dat", ios::binary);

    if(!archivo){
        exit(1);
    }

    strGuardado p;

    p.multas = this->getMultas();
    p.nivel = this->getNivel();
    p.puntos = this->getPuntos();
    p.cont = this->getCont();

    archivo.write(reinterpret_cast<char*>(&p), sizeof(strGuardado));

    archivo.close();
}
void ControlFronteriso::cargarNivel()
{
    ifstream archivo("C:\\Users\\Brayan\\Desktop\\Tp_ControlFronterizo 2.0\\Guardado\\guardado.dat", ios::binary);

    strGuardado p;

    archivo.read(reinterpret_cast<char*>(&p), sizeof(strGuardado));
    this->setMultas(p.multas);
    this->setPuntos(p.puntos);
    this->setNivel(p.nivel);
    this->setCont(p.cont);

    archivo.close();
}

//Muestra la persona en la interfaz;
QString ControlFronteriso::mostrarPersonaActual()
{
    if (cont >= personas.size()) {
        return "No hay más personas para mostrar.";
    }else if(cont == 14){
        return "...FELICIDADES GANASTE...";
    }else if(this->TerminoElJuego()){
        return "...PERDISTE MAS SUERTE LA PROXIMA...";
    }

    Persona* personaActual = this->personas[cont];

    //Crea un QString con los datos necesarios
    QString info = QString("Nombre y Apellido: %1\n"
                           "Duración de Estancia: %2\n"
                           "Tipo: %3\n"
                           "Nacionalidad: %4\n"
                           "Tipo de Visita: %5\n"
                           "Fecha de Nacimiento: %6\n"
                           "Visa: %7")
                    .arg(personaActual->getNyA())
                    .arg(personaActual->getDuracionEstancia())
                    .arg(personaActual->getTipo())
                    .arg(personaActual->getNacionalidad())
                    .arg(personaActual->getTipoVisita())
                    .arg(personaActual->getFechaNacimiento())
                    .arg(personaActual->getVisa());

    cont++;
    this->actualizNivel();
    this->txtprueba();
    return info;
}

//Getters Y Setters;
int ControlFronteriso::getPuntos() const
{
    return puntos;
}
void ControlFronteriso::setPuntos(int newPuntos)
{
    puntos = newPuntos;
}
void ControlFronteriso::setMultas(int newMultas)
{
    multas = newMultas;
}
int ControlFronteriso::getMultas() const
{
    return multas;
}
int ControlFronteriso::getNivel() const
{
    return nivel;
}
void ControlFronteriso::setNivel(int newNivel)
{
    nivel = newNivel;
}
int ControlFronteriso::getCont() const
{
    return cont;
}
void ControlFronteriso::setCont(int newCont)
{
    cont = newCont;
}
