#include <iostream>

using namespace std;

int main()
{
    int x,y,z=0;
    cout << "Ingrese la cantidad de numeros que quiere sumar: " << endl;
    cin >> x;
    for(int i=0;i<x;i++){
        cout << "Ingrese los numeros: " << endl;
        cin >> y;
        z=z+y;
    }
    cout << "Resultado Final: "<< z << endl;
    return 0;
}
