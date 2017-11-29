#include "Administracion.h"

void Administracion::ingresar_animales()
{
    ofstream file;
    file.open("Veterinaria.txt");
    file << ("Animales || Raza || Nombre del animal || Color || Nombre del duenio || Numero de patas\n");
    file << ("--------------------------------------------------------------------------------------\n");
    file.close();
}

void Administracion::ingresar_personal()
{

}

void Administracion::modificar_registro_de_animales()
{

}

void Administracion::modificar_registro_del_personal()
{

}

void Administracion::visualizar_registro_de_animales()
{

}

void Administracion::visualizar_registro_del_personal()
{

}
