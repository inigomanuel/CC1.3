#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>

using namespace std;

class Animal
{
    private:
        string raza,nombre_del_animal,color,nombre_del_duenio;
        int numero_de_patas;
    public:
        Animal();
        Animal(string r,string nom_a,string c,string nom_d,int num_p);
        virtual string sonido()=0;
        virtual ~Animal();

};

#endif // ANIMAL_H
