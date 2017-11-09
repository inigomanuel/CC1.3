#ifndef ADMINISTRACION_H
#define ADMINISTRACION_H
#include <iostream>
#include <fstream>
#include "Animal.h"

using namespace std;

class Administracion
{
    private:

    public:
        int tamanio;
        Animal **animales = new Animal*[tamanio];

        Administracion();
        void set_tamanio();
        void ingresar_animales();
        void modificar_datos();

        ~Administracion();

};

#endif // ADMINISTRACION_H
