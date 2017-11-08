#ifndef ARRAYPOLIGONO_H
#define ARRAYPOLIGONO_H
#include "Poligono.h"
#include <iostream>


class ArrayPoligono
{
    public:
        int tamanio;
        Poligono **arr = new Poligono*[tamanio];

        ArrayPoligono();
        ArrayPoligono(int arr, int t);
        void set_tamanio();
        ~ArrayPoligono();

};

#endif // ARRAYPOLIGONO_H
