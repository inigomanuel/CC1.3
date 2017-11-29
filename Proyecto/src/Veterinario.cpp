#include "Veterinario.h"

int Veterinario::salario(int sal)
{
    int salario_del_veterinario=0;
    salario_del_veterinario=sal;
    return salario_del_veterinario;
}

void Veterinario::set_veterinario()
{
    cout<<"Cual es el nombre del Veterinario? "<<endl;
    cin>>nombre_empleado;
    cout<<"Cual es el nombre del Veterinario?"<<endl;
    cin>>cargo;
    cout<<"Cual es el nombre del Veterinario?"<<endl;
    cin>>codigo;
}
