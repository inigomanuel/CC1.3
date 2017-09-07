#include <iostream>

using namespace std;




int multiplos(int t){
    int sum=0;
    for(int i=0;i<t;i++){
        if(i%3==0||i%5==0){
            sum=sum+i;
        }
    }
    cout<<sum;
}

long long int fibonacci (int f)
{
    int i=0;
	int j=1;
	int sum=0;
	for (int k=0;k<f;k++){
        int t;
		t=i+j;
		i=j;
		j=t;
		if(j%2==0){
            sum=sum+j;
            cout<<j<<" ";
            }
		}
		cout<<"suma es: "<<sum<<endl;
};

int factores_primos(int fc){
    int primo=2,es_primo;
    while(fc>0){
        es_primo=1;
        for(int i=2;i<primo;i++){
            if(primo%i==0){
                es_primo=0;
                break;
            }
        }
        if(es_primo){
        cout<<primo<<endl;
            fc--;
        }
        primo++;
    }
    return primo;
}

int main()
{
    /*
    int tope;
    cout<<"Ingresar el numero para verificar sus multiplos de 3 y 5: "<<endl;
    cin >> tope;
    multiplos(tope);
    int fibo;
    cout<<"Ingresar el numero para el fibonacci: "<<endl;
    cin >> fibo;
    fibonacci(fibo);
    */
    int fc;
    cout<<"Ingrese el numero que desee: "<<endl;
    cin >>fc;
    factores_primos(fc);
    return 0;
}
