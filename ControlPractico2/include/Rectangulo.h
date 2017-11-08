#ifndef RECTANGULO_H
#define RECTANGULO_H
#include "Poligono.h"
#include <iostream>

class Rectangulo : public Poligono
{
    public:
        //Rectangulo();
        //Rectangulo(int a,int b);
        virtual int Area(int a,int b);

};

#endif // RECTANGULO_H
