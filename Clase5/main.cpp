#include <iostream>

using namespace std;

//1
int suma(const int arr[], const int longitud){
    int sum;
    for(int i=0;i<longitud;sum+=arr[i++]){}
    return sum;
}
//2
float promedio(const int arr[], const int longitud){
    float sum=suma(arr,longitud);
    return sum/longitud;
}
//3
int mayor(const int arr[], const int longitud){
    int pivot=arr[0];

    for(int i=0;i<longitud;i++){
        if(pivot<arr[i]){
            pivot=arr[i];
        }
    }
    return pivot;
}
//4
int menor(const int arr[], const int longitud){
    int pivot=arr[0];
    for(int i=0;i<longitud;i++){
        if(pivot>arr[i]){
            pivot=arr[i];
        }
    }
    return pivot;
}
//5
int suma_recursiva(const int arr[],const int longitud){
    if(longitud==1)
        return arr[0];
    else
        return arr[longitud-1] + suma_recursiva(arr,longitud-1);
}
//6
int mayor_recursivo(const int arr[],const int longitud,int mayor){
    if (longitud== arr.size)
			return mayor;
    if (arr[] > mayor)
			mayor = arr[];
        return arr[longitud-1] + mayor_recursivo(arr,longitud-1);
        return mayor_recursivo(arr, ++n, mayor);
}
//7
int menor_recursivo(const int arr[],const int longitud){
    if(longitud==1)
        return menor;
    else
        return menor_recursivo(arr,longitud-1,menor);
}

int main()
{

    int n,mayor,menor;
    cout<<"Ingrese el tamanio de la cadena que desee: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Ingrese los elementos del arreglo: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<suma(arr,n)<<endl;
    cout<<promedio(arr,n)<<endl;
    cout<<mayor(arr,n)<<endl;
    cout<<menor(arr,n)<<endl;
    cout<<suma_recursiva(arr,n)<<endl;
    cout<<mayor_recursivo(arr,n,mayor=0)<<endl;
    //cout<<menor_recursivo(arr,n,menor=0)<<endl;
    return 0;
}
