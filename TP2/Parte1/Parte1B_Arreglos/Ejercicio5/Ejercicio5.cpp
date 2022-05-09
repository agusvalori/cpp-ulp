/*
 Desarrolle un programa que lea de la entrada estándar un vector de enteros y determine el mayor
elemento del vector.
*/

#include <iostream>

using namespace std;

int main()
{
    int vector[100], mayor = 0, menor = 1000;
    for (int i = 0; i < 100; i++)
    {
        vector[i] = rand() % 100;
    }

    cout << "\n########### MOSTRAR VECTOR COMPLETO #############\n"
         << endl;
    for (int i = 0; i < 100; i++)
    {
        cout << vector[i] << " ";
        if (vector[i] > mayor)
        {
            mayor = vector[i];
        }
        if (vector[i] < menor)
        {
            menor = vector[i];
        }
    }

    cout << "\n ########### VALOR MAYOR ############# \n"
         << endl;

    cout << mayor << endl;
    cout << "\n ########### VALOR MENOR ############# \n"
         << endl;
    cout << menor <<"\n"<< endl;
    return 0;
}