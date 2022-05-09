/*
A partir de cualquier número inicial, la sucesión obtenida siempre termina en 1.

Si el número es 1, la sucesión termina. De lo contrario, si es par se divide entre 2, y si es impar se multiplica por 3 y se le suma 1.
Si empezamos con 10, por ejemplo, obtendremos la sucesión de números 10, 5, 16, 8, 4, 2, 1.

Escriba un programa que permita verificar la afirmación para cualquier entero dado.
El programa debe almacenar la secuencia de números completa en un arreglo,
la secuencia de números pares e impares en otros arreglos diferentes.
Al finalizar deberá imprimir la secuencia de números obtenidos, la cantidad
de números de la secuencia, la cantidad de números pares y la cantidad de números impares.
*/

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int number;
    int arrayPares[1000];
    int arrayNumber[2000];
    int arrayImpares[1000];
    int contadorPares = 0;
    int contadorImpares = 0;

    // llenando los arreglos con valores vacios = -1;
    for (int i = 0; i < 2000; i++)
    {
        arrayNumber[i] = -1;
        if (i < 1000)
        {
            arrayPares[i] = -1;
            arrayImpares[i] = -1;
        }
    }

    cout << "Ingrese el valor inicial: ";
    cin >> number;
    cout << number << " ";
    arrayNumber[0] = number;
    do
    {

        if (number % 2 == 0)
        {
            arrayPares[contadorPares] = number;
            number = number / 2;
            contadorPares++;
        }
        else
        {
            arrayImpares[contadorImpares] = number;
            number = number * 3 + 1;
            contadorImpares++;
        }
        arrayNumber[contadorPares + contadorImpares] = number;

    } while (number != 1);

    // MOSTRAR TODOS LOS VALORES

    cout << "\n###### MOSTRAMOS TODOS LOS VALORES ######"
         << endl;
    for (int i = 0; i < 2000; i++)
    {
        if (arrayNumber[i] != -1)
        {
            cout << arrayNumber[i] << " ";
        }
    }
    cout << endl;
    cout << "\n###### MOSTRAMOS LOS VALORES PARES ######"
         << endl;
    for (int i = 0; i < 1000; i++)
    {
        if (arrayPares[i] != -1)
        {
            cout << arrayPares[i] << " ";
        }
    }
    cout << endl;
    cout << "\n###### MOSTRAMOS LOS VALORES IMPARES ######"
         << endl;
    for (int i = 0; i < 1000; i++)
    {
        if (arrayImpares[i] != -1)
        {
            cout << arrayImpares[i] << " ";
        }
    }
    cout << endl;
    cout << "\nTOTAL VALORES: " << (contadorPares + contadorImpares)
         << endl;
    cout << "\nTOTAL VALORES PARES: " << contadorPares
         << endl;
    cout << "\nTOTAL VALORES IMPARES: " << contadorImpares
         << endl;

    return 0;
}
