#ifndef TRIANGULO_H
#define TRIANGULO_H
#include "Poligono.h"
#include <iostream>

class Triangulo : public Poligono
{
    public:
        //Triangulo();
        //Triangulo(int a,int b);
        virtual int Area(int a,int b);
};

#endif // TRIANGULO_H
