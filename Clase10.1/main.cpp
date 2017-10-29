#include <iostream>
#include "Empleado.h"
#include "Empresa.h"

using namespace std;

int main()
{
    int x;
    cout<<"Ingrese el numero de empresas: ";cin>>x;
    for(int y=0;y<x;y++){
        cout<<"-------------------INGRESE AL EQUIPO "<<y+1<<"-------------------"<<endl;
        Empresa e;
        e.set_Nombre_empresa();
        e.ingresar_num_empleados();
        cout<<"-------------------EL EQUIPO "<<y+1<<" ES-------------------"<<endl;
        e.imprimir();
    }
    return 0;
}
