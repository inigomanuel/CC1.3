#ifndef CUADRADO_H
#define CUADRADO_H
#include "Poligono.h"
#include <iostream>

class Cuadrado : public Poligono
{
    public:
        //Cuadrado();
        //Cuadrado(int a,int b);
        virtual int Area(int a,int b);

};

#endif // CUADRADO_H
