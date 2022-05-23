/*
Haga un programa en C++ que devuelva la parte fraccionaria de cualquier número introducido
por el usuario. Ejemplo, si introducís el número 256.879, debería desplegarse el número 0.879.
*/

#include <iostream>
using namespace std;

double parteDecimal(double numero)
{
    int aux = numero;
    return numero - aux;
}

int main(int argc, char const *argv[])
{

    double numero = 256.879;
    cout << parteDecimal(numero) << endl;
    return 0;
}