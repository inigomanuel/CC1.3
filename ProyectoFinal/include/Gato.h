#ifndef GATO_H
#define GATO_H
#include <iostream>
#include "Animal.h"

using namespace std;

class Gato : public Animal
{
    public:
        Gato();
        virtual string sonido(string s);
        virtual ~Gato();

    protected:

    private:
};

#endif // GATO_H
