#include <iostream>
#include <cstdlib>

using namespace std;

//2 A Simple Function
void f(const int a=5)
{
    cout<<a*2<<"\n";
}
//3Fix the Function
//3.1
void printNum(int number){cout<<number<<endl;}
//3.2
void printNum2(int number){cout<<number<<endl;}
//3.3
void doubleNumber(int num){num=num*2;cout<<num;}
//3.4
int difference(const int x,const int y){
    int diff=abs(x- y);
}
//3.5
int sum(const int x,const int y,const int z){
    return x+y+z;
}
//4.1
int sum2(const int x,const int y){
    return x+y;
}
double sum3(const double x,const double y){
    return x+y;
}
//4.2
//########################################################################
//6 Array Operations
//6.3
void transpose(const int input [][LENGTH],int output[][WIDTH]){
    for(inti=0;i<WIDTH;++i){
        for(intj=0;j<LENGTH;++j){
            output[j][i]=input[i][j];
        }
    }
}
int main()
{
    //2 A Simple Function
    int a=123;
    f(1);
    f(a);
    int b=3;
    f(b);
    f(a);
    f();
    //3Fix the Function
    //3.1
    printNum(35);
    //3.2
    int number=35;
    printNum2(number);
    //3.3
    int num=35;
    doubleNumber(num);
    //3.4
    cout<<difference (24,1238)<<endl;
    //3.5
    cout<<sum(1,2,3)<<endl;
    //3.6
    const int ARRAY_LEN=10;
    int arr[ARRAY_LEN]={10};
    int *xPtr=arr;
    int *yPtr=arr+ARRAY_LEN- 1;
    cout<<*xPtr<<""<<*yPtr<<endl;
    //4 Sums
    //4.1
    cout<<sum2(1,2)<<endl;
    cout<<sum3(1,2)<<endl;
    //4.2
//########################################################################
    //4.3

    //4.4

    //4.5

    //4.6

    //5 Calculating pi

    //5.1

    //5.2

    //5.3

    //6 Array Operations

    //6.1

    //6.2

    //6.3
    int LENGTH=2;
    int WIDTH=2;
    transpose(input[][LENGTH],int output[][WIDTH]);
    //6.4

    //6.5

    //7 Pointers and Strings

    //7.1

    //7.2

    //7.3

    //7.4

    //7.5

    return 0;
}
