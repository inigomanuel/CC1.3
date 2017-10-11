#include "Jugador.h"
#include <iostream>

Jugador::Jugador()
{
    string nombre="";
    int numero=0;
    string posicion="";
    int agresividad=0;
}

Jugador::Jugador(string n,int num, string pos, int ag)
{
    nombre=n;
    numero=num;
    posicion=pos;
    agresividad=ag;
}

void Jugador::set_Nombre(string n)
{
    nombre=n;
}

void Jugador::set_Numero(int num)
{
    numero=num;
}

void Jugador::set_Posicion(string pos)
{
    posicion=pos;
}

void Jugador::set_Agresividad(int ag)
{
    agresividad=ag;
}

void Jugador::imprimir()
{
    cout<<"El jugador es: "<<nombre<<endl;
    cout<<"Su numero es: "<<numero<<endl;
    cout<<"Su posicion es: "<<posicion<<endl;
    if(agresividad<=5)
        cout<<"No tiene riesgo que le saquen tarjetas "<<endl;
    else
        cout<<"Tiene riesgo que le saquen tarjetas"<<endl;
    cout<<" "<<endl;
}
