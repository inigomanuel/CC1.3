#include "Asistente.h"

int Asistente::salario(int sal)
{
    int salario_del_asistente=0;
    salario_del_asistente=sal;
    return salario_del_asistente;
}

void Asistente::set_asistente()
{
    cout<<"Cual es el nombre del Asistente? "<<endl;
    cin>>nombre_empleado;
    cout<<"Cual es el nombre del Asistente?"<<endl;
    cin>>cargo;
    cout<<"Cual es el nombre del Asistente?"<<endl;
    cin>>codigo;
}
