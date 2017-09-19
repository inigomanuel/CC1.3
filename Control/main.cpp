#include <iostream>
#include <string.h>
using namespace std;


int invertir_cadena_recursiva(int arr[],int comienzo, int fin){
    int temp;
    if (comienzo < fin){
        temp=arr[comienzo];
        arr[comienzo]=arr[fin];
        arr[fin]=temp;

        return invertir_cadena_recursiva(arr,comienzo+1,fin-1);
    }
}

int main()
{
    //1
    int tamanio1=4,tamanio2=6;
    int matriz[4][6]={{1,2,3,4,5,6},
                        {7,8,9,10,11,12},
                        {13,14,15,16,17,18},
                        {19,20,21,22,23,24}};
    for(int i=0;i<tamanio1;i++){
        for(int j=0;j<tamanio2;j++){
            cout<<matriz[i][j];
        }
    }
    //2
    int c=5;
    int cadena[5]={1,2,3,4,5};
    int temp;
    for(int i=0;i<c/2;i++){
        temp=cadena[i];
        cadena[i]=cadena[c-i-1];
        cadena[c-i-1]=temp;
    }
    for(int j=0;j<c;j++){
        cout<<cadena[j];
    }
    //3
    int longitud=5;
    int arr[5]={1,2,3,4,5};
    invertir_cadena_recursiva(arr,0,longitud-1);
    for(int i=0;i<longitud;i++){
        cout<<arr[i]<<" ";
    }
    //4
    int x;
    char str1[40]="hola";
    char str2[40]="voy a terminar mis tareas";
    char str3[40]="cerrare el face";
    char str4[40]="bye";
    char str5[40];
    char str6[40];
    for (x=0; x<40; x++){
        str5[x] = str1[x];
    }
    for (x=0; x<40; x++){
        str6[x] = str2[x];
    }
    cout<<str1<<endl;
    cout<<"      "<<str2<<endl;
    cout<<"      "<<str3<<endl;
    cout<<str4<<endl;
    cout<<" "<<endl;
    cout<<strcpy(str1,str4)<<endl;
    cout<<"      "<<strcpy(str2,str3)<<endl;
    cout<<"      "<<str6<<endl;
    cout<<str5<<endl;

    return 0;
}



/*
1) Implemente un programa que imprima el contenido de un arreglo de dos dimensiones de forma espiral
1 2 3 4 5 6
7 8 9 10 11 12
13 14 15 16 17 18
19 20 21 22 23 24

salida
1 2 3 4 5 6 12 18 24 23 22 21 20 19 13 7 8 9 10 11 17 16 15 14

4)implemente un programa que lea por teclado un numero de cadenas y las imprima en orden inverso usando recursividad

ejemplo
    hola
            voy a terminar mis tareas
            cerrare el face
    bye


    bye
            cerrare face
            voy a terminar mis tareas
    hola

*/
