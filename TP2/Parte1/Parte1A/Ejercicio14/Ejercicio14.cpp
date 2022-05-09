/*
Hacer un algoritmo que imprima los valores de la diagonal de una matriz D de 5x5.
*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int matriz[5][5], sumatoria = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            matriz[i][j] = rand() % 10;
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {

            if (i == j)
            {
                cout << "[" << matriz[i][j] << "]";
                sumatoria += matriz[i][j];
            }
            else
            {
                cout << " " << matriz[i][j] << " ";
            }
        }
        cout << endl;
    }

    cout << "El total de la diagonal es de: " << sumatoria << endl;

    return 0;
}