#ifndef POLIGONO_H
#define POLIGONO_H
#include <iostream>


class Poligono
{
    private:
        int altura,base;
    public:
        Poligono();
        Poligono(int a,int b);
        virtual int Area()=0;
};

#endif // POLIGONO_H
