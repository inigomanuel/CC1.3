#ifndef VETERINARIO_H
#define VETERINARIO_H

#include "Personal.h"

class Veterinario : public Personal
{
    public:
        void set_veterinario();
        virtual int salario(int sal);
};

#endif // VETERINARIO_H
