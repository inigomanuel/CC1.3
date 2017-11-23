#include <iostream>
#include "Animal.h"
#include "Administracion.h"
#include "Menu.h"

using namespace std;

int main()
{
    Administracion Adm;
    Menu m;
    Adm.ingresar_animales();
    m.Title();
    m.Body();
    return 0;
}
