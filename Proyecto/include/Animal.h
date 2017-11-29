#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>

using namespace std;

class Animal
{
    protected:
        string raza,nombre_del_animal,color,nombre_del_duenio;
        int numero_de_patas,codigo_del_animal;
    public:
        Animal();
        Animal(string r,string nom_a,string c,string nom_d,int num_p,int ca);
};

#endif // ANIMAL_H
