#include "Animal.h"

Animal::Animal()
{
    raza="";
    nombre_del_animal="";
    color="";
    nombre_del_duenio="";
    numero_de_patas=0;
}

Animal::Animal(string r ,string nom_a,string c,string nom_d,int num_p)
{
    raza=r;
    nombre_del_animal=nom_a;
    color=c;
    nombre_del_duenio=nom_d;
    numero_de_patas=num_p;
}

Animal::~Animal()
{

}
