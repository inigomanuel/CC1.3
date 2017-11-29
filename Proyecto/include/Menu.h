#ifndef MENU_H
#define MENU_H
#include "Animal.h"
#include "Administracion.h"
#include "Personal.h"
#include <iostream>
#include <cstdlib>

using namespace std;

class Menu : public Administracion
{
    public:
        void Body();
        void Title();
        void Creditos();
        void Preguntar();
};

#endif // MENU_H
