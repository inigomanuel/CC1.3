#include "Equipo.h"

void Equipo::ingresar_tamanio_equipo()
{
    cout<<"Ingresar el numero de jugadores del equipo: "<<endl;
    cin >>tam;
}

void Equipo::ingresar_jugadores_en_equipo()
{
    for(int i=0;i<tam;i++){
        cout<<"Ingrese Jugador N "<<i<<":"<<endl;
        equipo[i-1].ingresar_jugador();
        cout<<" "<<endl;
    }
}

void Equipo::imprimir_Equipo()
{
    for(int i=0;i<tam;i++)
    {
        equipo[i].imprimir();
        cout<<" "<<endl;
    }
}
