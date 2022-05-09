/*
Realice un programa que solicite de la entrada
estándar un entero del 1 al 10 y muestre en la
salida estándar su tabla de multiplicar.
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int num;
    cout << "Ingrese un valor entre 1 y 10" << endl;
    cin >> num;

    if (num > 0 && num <= 10)
    {
        for (int i = 0; i <= 10; i++)
        {
            cout << num << "x" << i << "=" << num * i << endl;
        }
    }else{
        cout<<"Numero fuera de rango"<<endl;
    }

    return 0;
}
