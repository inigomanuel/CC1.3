#ifndef SECRETARIA_H
#define SECRETARIA_H

#include "Personal.h"

class Secretaria : public Personal
{
    public:
        void set_secretaria();
        virtual int salario(int sal);
};

#endif // SECRETARIA_H
