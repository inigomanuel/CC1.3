#ifndef FECHA_H
#define FECHA_H
#include <iostream>

class Fecha
{
    int dia,mes,anio;
    public:


        Fecha();
        Fecha(int d,int m,int a);
        void ingresar_fecha();
        void sentido_fecha(int d,int m,int a);
        void validar_anio(int a);
        void modificar_fecha(int d,int m,int a);

};

#endif // FECHA_H
