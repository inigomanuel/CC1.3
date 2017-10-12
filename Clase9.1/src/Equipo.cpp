#include "Equipo.h"
#include "Jugador.h"
#include <iostream>

Equipo::Equipo()
{

}

void Equipo::ingresar_tamanio_equipo()
{
    cout<<"Ingresar el tamanio del equipo: "<<endl;
    cin >>tam;
}

void Equipo::ingresar_jugadores_en_equipo()
{
    for(int i=0;i<tam;i++){
        equipo[i].ingresar_jugador();
    }
}

void Equipo::imprimir_Equipo()
{

}
