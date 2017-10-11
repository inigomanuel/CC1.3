#ifndef EQUIPO_H
#define EQUIPO_H
#include "Jugador.h"
#include <string>


class Equipo
{
    public:
        Equipo();
        Equipo(string arr[]);
        void push(string nom);
        void imprimir_Equipo();


};

#endif // EQUIPO_H
