#ifndef EMPLEADO_H
#define EMPLEADO_H
#include <string>


class Empleado
{
    string nombre;
    int salario;
    int departamento;
    int dia,mes,anio;
    public:
        Empleado();
        Empleado(string nom,int sal, int d, int m, int a);
        void set_empleado();
        void set_Nombre(string nom);
        void set_Salario(int sal);
        void set_Departamento(int dep);
        void set_Fecha(int d, int m, int a);
        void imprimir();
};

#endif // EMPLEADO_H
