#include <iostream>

using namespace std;

int main()
{
    /*
    //Ingresar un numero y que regrese ese numero en numeros primos
    int num,primo=2,es_primo;
    cout << "Ingrese el numero de primos que desee: " << endl;
    cin >> num;
    while(num>0){
        es_primo=1;
        for(int i=2;i<primo;i++){
            if(primo%i==0){
                es_primo=0;
                break;
            }
        }
        if(es_primo){
            cout<<primo<<endl;
            num--;
        }
        primo++;
    }
    */
    //Ingresar una serie de numeros y verificar el mayor, menor y el promedio
    int mayor=0,menor=99999,num_total,numeros,pivot;
    double promedio;
    cout << "Ingrese el numero de numeros que desee: " << endl;
    cin >> num_total;
    for(int i=0;i<=num_total;i++){
        cout << "Ingrese los numeros que desee: " << endl;
        cin >> numeros;
        pivot=numeros;
        promedio=promedio+numeros;
        if(pivot>=mayor){
            mayor=pivot;
        }
        if(menor>=pivot){
            menor=pivot;
        }
    }
    cout << "El numero mayor es: " << endl;
    cout<<mayor<<endl;
    cout << "El numero menor es: " << endl;
    cout<<menor<<endl;
    cout << "El promedio es: " << endl;
    cout<<promedio/num_total<<endl;
    return 0;
}
