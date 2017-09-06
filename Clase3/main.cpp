#include <iostream>

using namespace std;


void anio_bisiesto(int anio){
    if(anio%4==0){
        if(anio%100!=0||anio%400==0){
            cout<<"Es bisiesto"<<endl;
        }else{
            cout<<"No es bisiesto"<<endl;
        }
    }else{
        cout<<"No es bisiesto"<<endl;
    }
}

void verificar_primo(int num){
    int cont=0;
    for(int i=1;i<=num;i++){
        if(num%i==0){
            cont=cont+1;
        }
    }
    if(cont<=2){
        cout<<"Es primo"<<endl;
    }else{
        cout<<"No es primo"<<endl;
    }
}

void n_primos(int nume){
    int primo=2,es_primo;
    while(nume>0){
        es_primo=1;
        for(int i=2;i<primo;i++){
            if(primo%i==0){
                es_primo=0;
                break;
            }
        }
        if(es_primo){
            cout<<primo<<endl;
            nume--;
        }
        primo++;
    }
}

void mayor_menor_promedio(int num_total){
    int mayor,menor,numeros;
    double promedio=0.0;
    cout << "Ingrese el primer numero: " << endl;
    cin >> numeros;
    promedio = mayor = menor = numeros;
    for(int i=1;i<=num_total-1;i++){
        cout << "Ingrese los siguientes numeros que desee: " << endl;
        cin >> numeros;
        promedio=promedio+numeros;
        if(numeros>=mayor){
            mayor=numeros;
        }
        if(menor>=numeros){
            menor=numeros;
        }
    }
    cout << "El numero mayor es: " << endl;
    cout<<mayor<<endl;
    cout << "El numero menor es: " << endl;
    cout<<menor<<endl;
    cout << "El promedio es: " << endl;
    cout<<promedio/num_total<<endl;
}

void posicion_primo(int posicion){
    int primo=2,es_primo;
    while(posicion>0){
        es_primo=1;
        for(int i=2;i<primo;i++){
            if(primo%i==0){
                es_primo=0;
                break;
            }
        }
        if(es_primo){
            posicion--;
            if(posicion==0){
                cout<<primo<<endl;
            }
        }
        primo++;
    }
}

int main()
{
    int anio;
    cout<<"Ingrese el anio: "<<endl;
    cin >> anio;
    anio_bisiesto(anio);
    int num;
    cout<<"Ingrese un numero: "<<endl;
    cin>>num;
    verificar_primo(num);
    int nume;
    cout << "Ingrese el numero de primos que desee: " << endl;
    cin >> nume;
    n_primos(nume);
    int num_total;
    cout << "Ingrese el numero de numeros que desee: " << endl;
    cin >> num_total;
    mayor_menor_promedio(num_total);
    int posicion;
    cout << "Ingrese la posicion: " << endl;
    cin >> posicion;
    posicion_primo(posicion);
    return 0;
}
