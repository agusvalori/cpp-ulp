/*
  Escribe un programa que defina un vector de números y calcule si existe algún número en el vector
cuyo valor equivale a la suma del resto de números del vector.
*/

#include <iostream>

using namespace std;

int main()
{
    int vector[100], sumatoria = 0;
    for (int i = 0; i < 100; i++)
    {

        if (i !=99)
        {
            vector[i] = rand() % 10;
        }
        else
        {
            vector[i] = 447;
        }
        sumatoria += vector[i];
    }
    cout << "\n########### SUMATORIA #############\n"
         << endl;
    cout << sumatoria << endl;

    cout << "\n########### MOSTRAR VECTOR COMPLETO #############\n"
         << endl;
    for (int i = 0; i < 100; i++)
    {
        cout << vector[i] << " ";
        if (vector[i] == sumatoria - vector[i])
        {
            cout << "[" << vector[i] << "] ";            
        }
    }

    return 0;
}