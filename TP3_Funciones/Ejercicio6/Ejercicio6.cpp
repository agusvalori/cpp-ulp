/*
Escriba una función nombrada funpot() que eleve un número entero que se le transmita a una
potencia en número entero positivo y despliegue el resultado. El número entero positivo deberá
ser el segundo valor transmitido a la función.
*/

#include <iostream>
using namespace std;

void funpot(int base, int exponente)
{
    int resultado = base;
    for (int i = 0; i < exponente-1; i++)
    {
        resultado *= base;        
    }
    cout << "El resultado de: " << base << "^" << exponente << ": " << resultado << endl;
}

int main(int argc, char const *argv[])
{

    funpot(2, 3);
    return 0;
}