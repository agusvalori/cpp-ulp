/*
Realice un programa que calcule el producto de dos matrices cuadradas de 3x3.
*/

#include <iostream>

using namespace std;

int main()
{
    int matriz[5][5], matriz2[5][5];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            matriz[i][j] = rand() % 10;
            matriz2[i][j] = rand() % 10;
        }
    }

    cout << "\n ################# MOSTRAR MATRIZ 1 ################# \n"
         << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {

            cout << " " << matriz[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\n ################## MOSTRAR MATRIZ 2 ################## \n"
         << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {

            cout << " " << matriz2[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\n ################ MOSTRAR MATRIZ PRUDUCTO ############### \n"
         << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (matriz[i][j] * matriz2[i][j] < 10)
            {
                cout << " " << matriz[i][j] * matriz2[i][j] << "  ";
            }
            else
            {
                cout << " " << matriz[i][j] * matriz2[i][j] << " ";
            }
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}