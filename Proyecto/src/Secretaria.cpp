#include "Secretaria.h"

int Secretaria::salario(int sal)
{
    int salario_del_secretaria=0;
    salario_del_secretaria=sal;
    return salario_del_secretaria;
}

void Secretaria::set_secretaria()
{
    cout<<"Cual es el nombre del Secretaria? "<<endl;
    cin>>nombre_empleado;
    cout<<"Cual es el nombre del Secretaria?"<<endl;
    cin>>cargo;
    cout<<"Cual es el nombre del Secretaria?"<<endl;
    cin>>codigo;
}
