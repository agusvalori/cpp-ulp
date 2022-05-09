/*
Realice un programa que lea una matriz de 3x3 y cree su matriz traspuesta. 
La matriz traspuesta es aquella en la que la columna i era la fila i de la matriz original.
*/

#include <iostream>

using namespace std;

int main()
{
    int matriz[5][5], matrizTranspuesta[5][5];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            matriz[i][j] = rand() % 10;
        }
    }

    // Cargando matriz transpuesta
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            matrizTranspuesta[j][i] = matriz[i][j];
        }
    }

    cout << "\n   ORIGINAL             TRANSPUESTA"
         << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 10; j++)
        {

            if (j < 5)
            {
                cout << " " << matriz[i][j] << " ";
            }
            else
            {
                cout << " " << matrizTranspuesta[i][j - 5] << " ";
            }

            if (j == 4)
            {
                cout << "       ";
            }
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}