#ifndef ADMINISTRACION_H
#define ADMINISTRACION_H
#include <iostream>
#include <fstream>
#include <vector>
#include "Animal.h"
#include "Gato.h"
#include "Perico.h"
#include "Perro.h"
#include "Personal.h"
#include "Veterinario.h"
#include "Asistente.h"
#include "Secretaria.h"
#include "Limpieza.h"

using namespace std;

class Administracion{
    public:
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
