#ifndef ASISTENTE_H
#define ASISTENTE_H

#include "Personal.h"

class Asistente : public Personal
{
    public:
        void set_asistente();
        virtual int salario(int sal);
};

#endif // ASISTENTE_H
