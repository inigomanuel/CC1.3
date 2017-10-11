#include <iostream>
#include "Jugador.h"

using namespace std;

int main()
{
    int num,agr;
    string nom,pos;
    string arr[11];
    Jugador Guerrero("Guerrero",9,"Delantero",7);
    Jugador Flores,Cueva;
    Flores.set_Nombre("Flores");
    Flores.set_Numero(20);
    Flores.set_Posicion("Volante");
    Flores.set_Agresividad(3);
    cout<<"Ingrese el nombre del jugador"<<endl;
    cin >> nom;
    cout<<"Ingrese el numero del jugador: "<<endl;
    cin >> num;
    cout<<"Ingrese la posicion del jugador: "<<endl;
    cin >> pos;
    cout<<"Ingrese la agresividad del jugador: "<<endl;
    cin >> agr;
    cout<<""<<endl;
    Cueva.set_Nombre(nom);
    Cueva.set_Numero(num);
    Cueva.set_Posicion(pos);
    Cueva.set_Agresividad(agr);

    Guerrero.imprimir();
    Flores.imprimir();
    Cueva.imprimir();

    return 0;
}
