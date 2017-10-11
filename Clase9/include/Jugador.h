#ifndef JUGADOR_H
#define JUGADOR_H
#include <string>

using namespace std;

class Jugador
{
    public:
        int numero,agresividad;
        string nombre,posicion;

        Jugador();
        Jugador(string n,int num, string pos, int ag);
        virtual ~Jugador();
        void set_Nombre(string n);
        void set_Numero(int num);
        void set_Posicion(string pos);
        void set_Agresividad(int ag);
        void imprimir();

};

#endif // JUGADOR_H
