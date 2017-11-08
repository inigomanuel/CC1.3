#include "Triangulo.h"
#include <iostream>

using namespace std;

//Triangulo::Triangulo()
//{
    //altura=0;
    //base=0;
//}

//Triangulo::Triangulo(int a,int b)
//{
    //altura=a;
    //base=b;
//}

int Triangulo::Area(int a,int b)
{
    int area_Triangulo=0;
    area_Triangulo=(b*a)/2;
    return area_Triangulo;
}

