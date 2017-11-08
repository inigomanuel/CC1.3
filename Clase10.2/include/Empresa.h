#ifndef EMPRESA_H
#define EMPRESA_H
#include "Empleado.h"
#include <string>

class Empresa
{
    public:
        string nombre_empresa;
        int RUC;
        int tam;
        Empleado empresa[100];

        Empresa();
        Empresa(string nom_e,int R);
        void set_Nombre_empresa();
        void set_RUC(int R);
        void set_Empresa();
        void ingresar_num_empleados();
        void set_empleados();
        void imprimir_departamento();
};

#endif // EMPRESA_H
