#ifndef PERSONAL_H
#define PERSONAL_H
#include <iostream>

using namespace std;

class Personal
{
    protected:
        string nombre_empleado,cargo;
        int codigo;
    public:
        Personal();
        Personal(string nom, string carg,int cod);
        virtual int salario()=0;
};

#endif // PERSONAL_H
