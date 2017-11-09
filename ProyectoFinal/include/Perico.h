#ifndef PERICO_H
#define PERICO_H
#include <iostream>
#include "Animal.h"

using namespace std;

class Perico : public Animal
{
    public:
        Perico();
        virtual string sonido(string s);
        virtual ~Perico();

    protected:

    private:
};

#endif // PERICO_H
