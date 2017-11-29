#include "Cliente.h"

Cliente::Cliente()
{
    nombre_del_cliente="";
    celular=0;
    pago_del_cliente=0;
    codigo_del_cliente=0;
}

void Cliente::set_cliente()
{
    cout<<"Cual es el nombre del cliente? "<<endl;
    cin>>nombre_del_cliente;
    cout<<"Cual es el celular del cliente? "<<endl;
    cin>>celular;
    cout<<"Cuanto sera el pago del cliente? "<<endl;
    cin>>pago_del_cliente;
    cout<<"Cual es el cogido del cliente?"<<endl;
    cin>>codigo_del_cliente;
}
