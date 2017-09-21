#include <iostream>

using namespace std;


int puntero_sin_len_ni_i(char *ptr){
    char *ptr2=ptr;
    while(*ptr2!='\0')
        ptr2++;
    return ptr-ptr2;
}

void s_w_a_p(int *ptr1,int *ptr2){
    int temp;
    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
    cout<<*ptr1<<endl;
    cout<<*ptr2<<endl;
}

void strcpy(char *ptr1, char *ptr2){
    while((*ptr1++=*ptr2++ )!='\0');
}

void strcpy1(char *ptr1, char *ptr2){
    while(*ptr1++=*ptr2++);
}

int main()
{
    char s[10]="Hola";
    char t[10]="Adios";
    int x=3,y=6;
    //puntero_sin_len_ni_i(s);
    //s_w_a_p(&x,&y);
    strcpy(s,t);
    strcpy1(s,t);
    cout<<s;
    return 0;
}
