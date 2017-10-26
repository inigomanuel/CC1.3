#include <iostream>

using namespace std;


class Integer{
public:
    int val;
    Integer(){
    val=0;cout<<"default constructor"<<endl;
    }
    Integer(int v){
    val=v;cout<<"constructor with arg: "<<v<<endl;
    }
};

class IntegerWrapper{
public:
    Integer val;
    IntegerWrapper(){
    cout<<"IntegerWrapper default constructor"<<endl;
    }
};

int *getPtrToFive(){
    int *x=new int;
    *x=5;
    return x;
}

class Point{
public:
    Point(){
        int x=0,y=0;cout<<"default constructor"<<endl;
    }
};

class Point1{
public:
    int x,y;
    Point1(){
        cout<<"constructor invoked"<<endl;
    }
    ~Point1(){
        cout<<"destructor invoked"<<endl;
    }
};

int main()
{
    IntegerWrapper q;
    Integer arr1[10];
    Integer i(3);
    Integer j=5;
    int *p;
    for(int i=0;i<3;++i){
        p=getPtrToFive();
        cout<<*p<<endl;
    }

    int numItems;
    cout<<"how many items? "<<endl;
    cin>>numItems;
    int *arr=new int[numItems];
    for(int i=0;i<numItems;++i){
        cout<<"enter item "<<i<<":"<<endl;
        cin>>arr[i];
    }
    for(int i=0;i<numItems;++i){
        cout<<arr[i]<<endl;
    }
    delete[]arr;
    Point *t=new Point;
    delete t;

    if(true){
        Point1 s;
        cout<<"p out os scope"<<endl;
    }
    return 0;
}
