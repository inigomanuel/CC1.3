#include <iostream>
#include <time.h>
#include <math.h>
#include <string.h>
using namespace std;
//1
int multiplos(int t){
    int sum=0;
    for(int i=0;i<t;i++){
        if(i%3==0||i%5==0){
            sum=sum+i;
        }
    }
    cout<<sum;
}
//2
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
//3
int es_primo(int n){
    int a=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            a++;
        }
    }
    if(a!=2){
        return false;
    }else{
        return true;
    }
}

int factor_primo(long long numero){
    for(long long i=1;i<=numero;i++){
        if(numero%i==0){
            if(es_primo(i)==true){
                cout<<i<<endl;
            }
        }
    }
}
//4
bool palindromo(string letra, int tam){
    int cont;
    cont = tam/2;
    int ult;
    ult = (tam-1);
    for(int i=0; i<cont; i++){
        if(letra[i] != letra[ult]){
            return false;
        }
        else
            ult--;
    }
    return true;
}

//5
bool calculate(int number, int n) {
    if (n == 0) {
        return true;
    }
    return (number % n != 0) ? false : calculate(number,n-1);
}

int main()
{
    //1
    int tope;
    cout<<"Ingresar el numero para verificar sus multiplos de 3 y 5: "<<endl;
    cin >> tope;
    multiplos(tope);
    //2
    int fibo;
    cout<<"Ingresar el numero para el fibonacci: "<<endl;
    cin >> fibo;
    fibonacci(fibo);
    //3
    long long numero;
    cout<<"Ingresar el numero: ";
    cin >> numero;
    factor_primo(numero);
    //4
    cout << "Producto de numeros con 2 digitos: " << "91 x 99 = 9009" << endl;
    cout << "Producto de numeros con 3 digitos: " << "993 x 913 = 906609" << endl;
    int num, tam=0;
    cout << "Ingrese un numero: ", cin >> num;
    int aux = num;
    while(aux>0){
        aux = aux/10;
        tam++;
    }
    string cadena;
    cadena = to_string(num); // ENTERO -> STRING
    bool res = palindromo(cadena, tam);
    if(res==true)
        cout << "Si es Palindromo" << endl;
    else
        cout << "No es Palindromo" << endl;
    //5
    int number = 20;
    int result = number;
    while (!calculate(result, number)) {
        result += number;
    }
    cout << result;
    return 0;
}
