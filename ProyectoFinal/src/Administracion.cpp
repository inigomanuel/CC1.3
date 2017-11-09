#include "Administracion.h"

Administracion::Administracion()
{

}

void Administracion::ingresar_animales()
{
    ofstream file;
    file.open("Veterinaria.txt");
    file << ("Animales || Raza || Nombre del animal || Color || Nombre del duenio || Numero de patas\n");
    file << ("--------------------------------------------------------------------------------------\n");
    file.close();
}

void Administracion::modificar_datos()
{
    //ctor
}

Administracion::~Administracion()
{
    delete[] animales;
}
