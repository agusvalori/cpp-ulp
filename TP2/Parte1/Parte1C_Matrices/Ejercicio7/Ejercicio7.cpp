/*
Desarrollar un programa que determine si una matriz es simétrica o no.
Una matriz es simétrica si es cuadrada y si es igual a su matriz transpuesta.
*/

#include <iostream>

using namespace std;

int main()
{
    int matriz[5][5], matrizTranspuesta[5][5];
    bool esSimetrica = true;

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
                esSimetrica &= matriz[i][j] == matrizTranspuesta[i][j];
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

    if(esSimetrica==0){
        cout << "\n          NO es simetrica " << endl;
    }
    else{
        cout << "\n          SI es simetrica " << endl;
    }
    cout << endl;
    return 0;
}