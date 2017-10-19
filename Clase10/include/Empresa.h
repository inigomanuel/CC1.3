#ifndef EMPRESA_H
#define EMPRESA_H
#include "Empleado.h"

class Empresa
{
    public:
        string nombre_empresa;
        int RUC;
        Empleado empresa[100];

        Empresa();
        Empresa(string nom_e,int R);m
        void set_Nombre_empresa(string nom);
        void set_RUC(int R);
        void set_Empresa();
        void ingresar_num_empleados();
        void set_empleados();
        void imprimir_departamento();
};

#endif // EMPRESA_H
