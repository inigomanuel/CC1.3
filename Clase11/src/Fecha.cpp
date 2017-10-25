#include "Fecha.h"
#include <iostream>

using namespace std;

Fecha::Fecha()
{
    dia=0;
    mes=0;
    anio=0;
}

Fecha::Fecha(int d,int m,int a)
{
    dia=d;
    mes=m;
    anio=a;
}

void Fecha::ingresar_fecha()
{
    cout<<"Ingrese el dia: "<<endl;cin>>dia;
    cout<<"Ingrese el mes: "<<endl;cin>>mes;
    cout<<"Ingrese el anio: "<<endl;cin>>anio;
}

void Fecha::sentido_fecha(int d,int m,int a)
{
    int enero,febrero,marzo,abril,mayo,junio,julio,agosto,septiembre,octubre,noviembre,diciembre;
    switch (m){
    case 1:
        enero=31;
        if(d<=enero){
            cout<<"Fecha de enero es correcta"<<endl;
        }else{
            cout<<"Fecha de enero es incorrecta"<<endl;
        }
    break;
    case 2:
    if(a%4==0){
        if(a%100!=0||a%400==0){
            febrero=29;
            if(d<=febrero){
                cout<<"Fecha de febrero es correcta"<<endl;
            }else{
                cout<<"Fecha de febrero es incorrecta"<<endl;
            }
        }else{
            febrero=28;
            if(d<=febrero){
                cout<<"Fecha de febrero es correcta"<<endl;
            }else{
                cout<<"Fecha de febrero es incorrecta"<<endl;
            }
        }
    }else{
        febrero=28;
        if(d<=febrero){
            cout<<"Fecha de febrero es correcta"<<endl;
        }else{
            cout<<"Fecha de febrero es incorrecta"<<endl;
        }
    }
    break;
    case 3:
    marzo=31;
    if(d<=marzo){
            cout<<"Fecha de marzo es correcta"<<endl;
        }else{
            cout<<"Fecha de marzo es incorrecta"<<endl;
        }
    break;
    case 4:
    abril=30;
    if(d<=abril){
            cout<<"Fecha de abril es correcta"<<endl;
        }else{
            cout<<"Fecha de abril es incorrecta"<<endl;
        }
    break;
    case 5:
    mayo=31;
    if(d<=mayo){
            cout<<"Fecha de mayo es correcta"<<endl;
        }else{
            cout<<"Fecha de mayo es incorrecta"<<endl;
        }
    break;
    case 6:
    junio=30;
    if(d<=junio){
            cout<<"Fecha de junio es correcta"<<endl;
        }else{
            cout<<"Fecha de junio es incorrecta"<<endl;
        }
    break;
    case 7:
    julio=31;
    if(d<=julio){
            cout<<"Fecha de julio es correcta"<<endl;
        }else{
            cout<<"Fecha de julio es incorrecta"<<endl;
        }
    break;
    case 8:
    agosto=31;
    if(d<=agosto){
            cout<<"Fecha de agosto es correcta"<<endl;
        }else{
            cout<<"Fecha de agosto es incorrecta"<<endl;
        }
    break;
    case 9:
    septiembre=30;
    if(d<=septiembre){
            cout<<"Fecha de septiembre es correcta"<<endl;
        }else{
            cout<<"Fecha de septiembre es incorrecta"<<endl;
        }
    break;
    case 10:
    octubre=31;
    if(d<=octubre){
            cout<<"Fecha de octubre es correcta"<<endl;
        }else{
            cout<<"Fecha de octubre es incorrecta"<<endl;
        }
    break;
    case 11:
    noviembre=30;
    if(d<=noviembre){
            cout<<"Fecha de noviembre es correcta"<<endl;
        }else{
            cout<<"Fecha de noviembre es incorrecta"<<endl;
        }
    break;
    case 12:
    diciembre=31;
    if(d<=diciembre){
            cout<<"Fecha de diciembre es correcta"<<endl;
        }else{
            cout<<"Fecha de diciembre es incorrecta"<<endl;
        }
    break;
    }
}

void Fecha::validar_anio(int a)
{
    if(a%4==0){
        if(a%100!=0||a%400==0){
            cout<<"El anio es bisiesto"<<endl;
        }else{
            cout<<"El anio no es bisiesto"<<endl;
        }
    }else{
        cout<<"El anio no es bisiesto"<<endl;
    }
}

void Fecha::modificar_fecha(int d,int m,int a)
{
    int num_d=0;
    cout<<"Ingrese la cantidad de dias que quiere sumar: "<<endl;cin>>num_d;
    d=0+num_d;
    int enero,febrero,marzo,abril,mayo,junio,julio,agosto,septiembre,octubre,noviembre,diciembre;
    switch (m){
    case 1:
        enero=31;
        if(d<=enero){
            m=m+1;
            a=a+1;
        }
    break;
    case 2:
    if(a%4==0){
        if(a%100!=0||a%400==0){
            febrero=29;
            if(d<=febrero){
                cout<<"Fecha de febrero es correcta"<<endl;
            }else{
                cout<<"Fecha de febrero es incorrecta"<<endl;
            }
        }else{
            febrero=28;
            if(d<=febrero){
                cout<<"Fecha de febrero es correcta"<<endl;
            }else{
                cout<<"Fecha de febrero es incorrecta"<<endl;
            }
        }
    }else{
        febrero=28;
        if(d<=febrero){
            cout<<"Fecha de febrero es correcta"<<endl;
        }else{
            cout<<"Fecha de febrero es incorrecta"<<endl;
        }
    }
    break;
    case 3:
        marzo=31;
        if(d<=enero){
            m=m+1;
            a=a+1;
        }
    break;
    case 4:
        abril=30;
        if(d<=enero){
            m=m+1;
            a=a+1;
        }
    break;
    case 5:
        mayo=31;
        if(d<=mayo){
            cout<<"Fecha de mayo es correcta"<<endl;
        }else{
            cout<<"Fecha de mayo es incorrecta"<<endl;
        }
    break;
    case 6:
        junio=30;
        if(d<=junio){
            cout<<"Fecha de junio es correcta"<<endl;
        }else{
            cout<<"Fecha de junio es incorrecta"<<endl;
        }
    break;
    case 7:
        julio=31;
        if(d<=julio){
            cout<<"Fecha de julio es correcta"<<endl;
        }else{
            cout<<"Fecha de julio es incorrecta"<<endl;
        }
    break;
    case 8:
        agosto=31;
        if(d<=agosto){
            cout<<"Fecha de agosto es correcta"<<endl;
        }else{
            cout<<"Fecha de agosto es incorrecta"<<endl;
        }
    break;
    case 9:
        septiembre=30;
        if(d<=septiembre){
            cout<<"Fecha de septiembre es correcta"<<endl;
        }else{
            cout<<"Fecha de septiembre es incorrecta"<<endl;
        }
    break;
    case 10:
        octubre=31;
        if(d<=octubre){
            cout<<"Fecha de octubre es correcta"<<endl;
        }else{
            cout<<"Fecha de octubre es incorrecta"<<endl;
        }
    break;
    case 11:
        noviembre=30;
        if(d<=noviembre){
            cout<<"Fecha de noviembre es correcta"<<endl;
        }else{
            cout<<"Fecha de noviembre es incorrecta"<<endl;
        }
    break;
    case 12:
        diciembre=31;
        if(d<=diciembre){
            cout<<"Fecha de diciembre es correcta"<<endl;
        }else{
            cout<<"Fecha de diciembre es incorrecta"<<endl;
        }
    break;
    }

}
