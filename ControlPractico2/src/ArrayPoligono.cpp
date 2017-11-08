#include "ArrayPoligono.h"
#include <iostream>

using namespace std;

ArrayPoligono::ArrayPoligono()
{
    tamanio=0;
}

ArrayPoligono::ArrayPoligono(int arr, int t)
{
    tamanio=t;
}

void ArrayPoligono::set_tamanio()
{
    cout<<"Ingrese la cantidad de poligonos que desee en el arreglo: "<<endl;
    cin>>tamanio;
}

ArrayPoligono::~ArrayPoligono()
{
    delete[] arr;
}
