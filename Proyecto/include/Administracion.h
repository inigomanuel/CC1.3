#ifndef ADMINISTRACION_H
#define ADMINISTRACION_H
#include <iostream>
#include <fstream>
#include <vector>
#include "Animal.h"
#include "Personal.h"

using namespace std;

class Administracion{
    public:
        int tamanio;
        Animal **animales = new Animal*[tamanio];
        vector <Animal*> animal;
        vector <Personal*> personas;

        void ingresar_animales();
        void ingresar_personal();
        void modificar_registro_de_animales();
        void modificar_registro_del_personal();
        void visualizar_registro_de_animales();
        void visualizar_registro_del_personal();
};

#endif // ADMINISTRACION_H
