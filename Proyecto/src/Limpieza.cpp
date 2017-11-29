#include "Limpieza.h"

int Limpieza::salario(int sal)
{
    int salario_del_limpieza=0;
    salario_del_limpieza=sal;
    return salario_del_limpieza;
}

void Limpieza::set_limpieza()
{
    cout<<"Cual es el nombre del Limpieza? "<<endl;
    cin>>nombre_empleado;
    cout<<"Cual es el nombre del Limpieza?"<<endl;
    cin>>cargo;
    cout<<"Cual es el nombre del Limpieza?"<<endl;
    cin>>codigo;
}
