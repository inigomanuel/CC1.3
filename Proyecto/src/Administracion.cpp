#include "Administracion.h"

void Administracion::ingresar_animales()
{
    ofstream file;
    file.open("Veterinaria.txt");
    file << ("Animales || Raza || Nombre del animal || Color || Nombre del duenio || Numero de patas\n");
    file << ("--------------------------------------------------------------------------------------\n");
    file.close();
    /*
    string x;
    string palabra1="gato";
    string palabra2="perico";
    string palabra3="perro";
    cout<<"Escoja que tipo de animal quiere ingresar?"<<endl;
    cout<<"         gato"<<endl;
    cout<<"         perico"<<endl;
    cout<<"         perro"<<endl;
    cin>>x;

    if(x==palabra1);
        animal.push_back(get_gato());
    else if(x==palabra2);
        animal.push_back(get_perico());
    else if(x==palabra3);
        animal.push_back(get_perro());
    */
}

void Administracion::ingresar_personal()
{
    /*
    string x;
    string palabra1="veterinario";
    string palabra2="asistente";
    string palabra3="secretaria";
    string palabra4="limpieza";
    cout<<"Escoja que personal quiere ingresar?"<<endl;
    cout<<"         veterinario"<<endl;
    cout<<"         asistente"<<endl;
    cout<<"         secretaria"<<endl;
    cout<<"         limpieza"<<endl;
    cin>>x;

    if(x==palabra1);
        animal.push_back(get_veterinario());
    else if(x==palabra2);
        animal.push_back(get_asistente());
    else if(x==palabra3);
        animal.push_back(get_secretaria());
    else if(x==palabra4);
        animal.push_back(get_limpieza());
    */
}

void Administracion::modificar_registro_de_animales()
{

}

void Administracion::modificar_registro_del_personal()
{

}

void Administracion::visualizar_registro_de_animales()
{
    ofstream file;
    file.open("Veterinaria.txt");
    file << ("Nombre del animal || Animal || Raza || Color || Numero de patas || Nombre del duenio || Codigo\n");
    file << ("----------------------------------------------------------------------------------------------\n");
    file.close();
}

void Administracion::visualizar_registro_del_personal()
{
    ofstream file;
    file.open("Personal.txt");
    file << ("Nombre || Cargo || Codigo\n");
    file << ("-------------------------\n");
    file.close();
}
