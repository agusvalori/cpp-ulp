/*
Un número es primo si solo es divisible por la unidad y por si mismo. Defina una función que
determina si un número es primo, debe recibir el número y retornar verdadero o falso.
- Realice un programa que, de 2 opciones, 1). Determinar si un número es primo 2). Calcular
todos los números primos menores a un número ingresado por el usuario. El usuario debe poder
realizar estas opciones todas las veces que desee.

*/

#include <iostream>
using namespace std;

bool esPrimo(int numero)
{
    bool aux = true;
    int contador;
    if (numero >= 2)
    {
        for (int i = 1; i <= numero; i++)
        {
            if ((numero % i) == 0)
            {
                contador++;
            }
        }
        return contador == 2;
    }
    else
    {
        return false;
    }
}

int main(int argc, char const *argv[])
{
    int selectOption, numero = 0;
    do
    {
        cout << "Selecciones una de las sigiente opciones" << endl;
        cout << "1. Determinar si un numero es primo" << endl;
        cout << "2. Determinar numero primos hasta" << endl;
        cout << "0. Salir" << endl;
        cin >> selectOption;

        switch (selectOption)
        {
        case 1:
            cout << "Ingrese un numero: " << endl;
            cin >> numero;
            cout << numero << " es primo: ";
            if (esPrimo(numero))
            {
                cout << "Si" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
            break;
        case 2:
            cout << "Ingrese un numero: " << endl;
            cin >> numero;
            for (int i = 1; i <= numero; i++)
            {
                cout << i << " es primo: ";
                if (esPrimo(i))
                {
                    cout << "Si" << endl;
                }
                else
                {
                    cout << "No" << endl;
                }
            }

            break;
        case 0:
            cout << " Muchas gracias por usar nuestro programa" << endl;
            break;

        default:
            break;
        }
    } while (selectOption != 0);

    return 0;
}