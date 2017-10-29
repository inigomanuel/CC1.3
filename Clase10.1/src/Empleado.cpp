#include "Empleado.h"

Empleado::Empleado()
{
    nombre="";
    salario=0;
    dia=0;
    mes=0;
    anio=0;
}

Empleado::Empleado(string nom,int sal, int d, int m, int a)
{
    nombre=nom;
    salario=sal;
    dia=d;
    mes=m;
    anio=a;
}

void Empleado::set_Nombre(string nom)
{
    nombre=nom;
}

void Empleado::set_Salario(int sal)
{
    salario=sal;
}

void Empleado::set_Departamento(int dep)
{
    departamento=dep;
}

void Empleado::set_Fecha(int d, int m, int a)
{
    dia=d;
    mes=m;
    anio=a;
}

void Empleado::set_empleado()
{
    cout<<"Ingrese el nombre del empleado: ";cin>>nombre;
    cout<<"Ingrese el salario que recibe: ";cin>>salario;
    cout<<"Ingrese el departamento al que pertenece: ";cin>>departamento;

    enum Departamento {Logistica, RRHH, Almacen};
    Departamento_1 = Logistica;
    Departamento_2 = RRHH;
    Departamento_3 = Almacen;
    switch(departamento)
    {
    case Logistica: cout <<"Es de Logistica";break;
    case RRHH: cout <<"Es de RRHH";break;
    case Almacen: cout <<"Es de Almacen";break;
    }

    cout<<"Ingrese el dia que ingreso a la empresa: ";cin>>dia;
    cout<<"Ingrese el mes que ingreso a la empresa: ";cin>>mes;
    cout<<"Ingrese el anio que ingreso a la empresa: ";cin>>anio;
}

void Empleado::imprimir();
{
    cout<<"El nombre del empleado es: "<<nombre<<endl;
    cout<<"El salario del empleado es: "<<salario<<endl;
    cout<<"Su fecha de ingreso fue el: "<<dia<<"/"<<mes<<"/"<<anio<<endl;
}
