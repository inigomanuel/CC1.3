#include "Empresa.h"

Empresa::Empresa()
{
    nombre_empresa="";
    RUC=0;
}

Empresa::Empresa(string nom_e,int R)
{
    nombre_empresa=nom_e;
    RUC=R;
}

void Empresa::set_Empresa()
{
    cout<<"Ingrese el nombre de la Empresa: ";cin>>nombre_empresa;
    cout<<"Ingrese el RUC de la Empresa: ";cin>>RUC;
}

void Empresa::set_Nombre_empresa()
{
    string nom_e;
    cout<<"Ingresar el nombre de la empresa: ";cin >>nom_e;
}

void Empresa::set_RUC(int R)
{
    RUC=R;
}

void Empresa::ingresar_num_empleados()
{
    cout<<"Ingresar el numero de empleados: ";cin >>tam;
}

void Empresa::set_empleados()
{
    for(int i=0;i<tam;i++){
        cout<<"Ingrese Empleado N "<<i<<":"<<endl;
        empresa[i].set_empleado();
        cout<<" "<<endl;
    }
}

void Empresa::imprimir_departamento()
{
    cout<<"Empleados en la Empresa: "<<endl;
    for(int i=0;i<tam;i++)
    {
        empresa[i].imprimir();
        cout<<" "<<endl;
    }
}
