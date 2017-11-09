#ifndef PERRO_H
#define PERRO_H
#include <iostream>
#include "Animal.h"

using namespace std;

class Perro : public Animal
{
    private:

    public:
        Perro();
        virtual string sonido(string s);
        virtual ~Perro();

};

#endif // PERRO_H
