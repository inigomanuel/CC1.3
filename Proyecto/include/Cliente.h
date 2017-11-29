#ifndef CLIENTE_H
#define CLIENTE_H
#include <iostream>
#include <string>

using namespace std;

class Cliente
{
    private:
        string nombre_del_cliente;
        int celular,pago_del_cliente,codigo_del_cliente;
    public:
        Cliente();
        void set_cliente();
};

#endif // CLIENTE_H
