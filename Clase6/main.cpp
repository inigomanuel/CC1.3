#include <iostream>

using namespace std;

int recorrer(int *ptr,int lon){
    for(int i=0;i<lon;i++){
        cout<<*(ptr+i)<<" ";
    }
}

int suma(int *ptr, int lon){
    int cont=0;
    for(int i=0;i<lon;i++){
        cont=cont+*(ptr+i);
    }
    cout<<cont<<endl;
}

int longitud(char *ptr){
    int len=0;
    for(int i=0;*(ptr+i)!='\0';i++){
        len++;
    }
    cout<<len;
}

int longitud_sin_i(char *ptr){
    int len=0;
    while(*ptr!='\0'){
        len++;
        *ptr++;
    }
    cout<<len;
}

int longitud_sin_i_sin_len(char *ptr){

}

int main()
{
    /*
    int x=5;
    int &y=x;
    y++;
    cout<<x;

    int a[5]={3,5,2,8,6};
    int x,y;
    int *pa;
    pa=&a[0];
    x=*pa;
    y=*(pa+2);
    y=y+3;
    cout<<*pa<<" "<<x<<" "<<y<<" "<<a[2];
    */
    int a[5]={3,5,2,8,6},lon=5;
    recorrer(a,lon);
    cout<<" "<<endl;
    suma(a,lon);
    char s[10]="Hola";
    longitud(s);
    cout<<" "<<endl;
    longitud_sin_i(s);
    return 0;
}
