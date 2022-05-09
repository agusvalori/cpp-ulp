/*
Hacer una matriz M1 de tipo entera de 2 * 2,
llenarla de números y luego copiar todo el contenido de M1 hacia otra matriz M2,
sumándole 1 a cada elemento de M1 al copiarlo.
*/

#include <iostream>

using namespace std;

int main()
{
    int matriz[5][5], matrizCopia[5][5];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            matriz[i][j] = rand() % 10;
        }
    }
    cout << "\n ############## MOSTRAR MATRIZ ORIGINAL ############## \n"
         << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << " " << matriz[i][j] << " ";
            matrizCopia[i][j] =matriz[i][j]+1;
        }
        cout << endl;
    }

    cout << "\n ############# MOSTRAR MATRIZ COPIA +2 ############# \n"
         << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << " " << matrizCopia[i][j] << " ";            
        }
        cout << endl;
    }
cout << endl;
    return 0;
}