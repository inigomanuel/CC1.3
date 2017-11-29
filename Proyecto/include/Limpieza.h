#ifndef LIMPIEZA_H
#define LIMPIEZA_H

#include "Personal.h"

class Limpieza : public Personal
{
    public:
        void set_limpieza();
        virtual int salario(int sal);
};

#endif // LIMPIEZA_H
