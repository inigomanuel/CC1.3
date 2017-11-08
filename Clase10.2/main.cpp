#include <iostream>
#include "Empleado.h"
#include "Empresa.h"

using namespace std;

int main()
{
    int x;
    cout<<"Ingrese el numero de empresas: ";cin>>x;
    for(int y=0;y<x;y++){
        Empresa e;
        e.set_Nombre_empresa();
        e.ingresar_num_empleados();
    }
    return 0;
}
