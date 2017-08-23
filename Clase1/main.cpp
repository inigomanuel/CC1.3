#include <iostream>

using namespace std;

int main()
{
    /*
    int anio;
    cout<<"Ingrese el anio: "<<endl;
    cin >> anio;
    if(anio%4==0){
        if(anio%100!=0||anio%400==0){
            cout<<"Es bisiesto"<<endl;
        }else{
            cout<<"No es bisiesto"<<endl;
        }
    }else{
        cout<<"No es bisiesto"<<endl;
    }
    */
    int num,cont=0;
    cout<<"Ingrese un numero: "<<endl;
    cin>>num;
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
    return 0;
}
