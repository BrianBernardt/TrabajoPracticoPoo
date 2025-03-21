#ifndef PERSONA_H
#define PERSONA_H


class Persona
{
protected:
    //Nivel 1;
    char* NyA;
    int duracionEstancia;
    char tipo;
    char* nacionalidad;
    //Nivel 2;
    char* tipoVisita;
    //Nivel 3;
    int FechaNacimiento;
    //Nivel 4;
    char visa;
public:
    Persona(char* NyA, int duracionEstancia, char tipo, char* nacionalidad, char* tipoVisita, int FechaNacimiento, char visa);

    //Funciones Polimorficas;
    virtual int sumaPunto() = 0;
    virtual int restaPunto() = 0;
    virtual bool multa() = 0;

    //Getters;
    char *getNyA() const;
    int getDuracionEstancia() const;
    char getTipo() const;
    char *getNacionalidad() const;
    char *getTipoVisita() const;
    int getFechaNacimiento() const;
    char getVisa() const;

    //Setters;
    void setNyA(char *newNyA);
    void setDuracionEstancia(int newDuracionEstancia);
    //void setTipo(char *newTipo);
    void setNacionalidad(char *newNacionalidad);
    void setTipoVisita(char *newTipoVisita);
    void setFechaNacimiento(int newFechaNacimiento);
    void setVisa(char newVisa);
};

#endif // PERSONA_H
