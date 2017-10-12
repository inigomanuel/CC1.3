#ifndef EQUIPO_H
#define EQUIPO_H
#include "Jugador.h"
#include <string>


class Equipo
{
    public:
        Jugador equipo[100];
        int tam;
        Equipo();
        void ingresar_tamanio_equipo();
        void ingresar_jugadores_en_equipo();
        void imprimir_Equipo();


};

#endif // EQUIPO_H
