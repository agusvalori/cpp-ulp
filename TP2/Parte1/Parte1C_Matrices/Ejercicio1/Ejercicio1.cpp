/*
Hacer un programa para rellenar una matriz pidiendo al usuario el número de filas y columnas,
Posteriormente mostrar la matriz en pantalla.
*/

#include <iostream>

using namespace std;

int main()
{
    int matriz[5][5], fila = 0, columna = 0;
    char exit = 'N';

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            matriz[i][j] = 0;
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (matriz[i][j] == 0)
            {
                cout << " " << matriz[i][j] << " ";
            }
            else
            {
                cout << "[" << matriz[i][j] << "]";
            }
        }
        cout << endl;
    }

    do
    {
        cout << "Ingrese el numero de fila de la matriz 5x5" << endl;
        cin >> fila;
        cout << "Ingrese el numero de columna de la matriz 5x5" << endl;
        cin >> columna;
        
        if ((fila > 0 && columna > 0) && (fila <= 5 && columna <= 5))
        {
            columna--;
            fila--;

            cout << "Valor en esa posision: " << matriz[fila][columna] << endl;
            if (matriz[fila][columna] != 0)
            {
                cout << "Ya se encuntra un valor en esa posicion" << endl;
            }
            else
            {
                cout << "Ingrese el valor para la fila: " << fila << " columna: " << columna << endl;
                cin >> matriz[fila][columna];
            }
        }
        else
        {
            cout << "Valor fuera de rango de la matriz valores validos entre 1 y 5" << endl;
        }
        cout << "Desea salir S/N" << endl;
        cin >> exit;
    } while (exit != 'S');

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (matriz[i][j] == 0)
            {
                cout << " " << matriz[i][j] << " ";
            }
            else
            {
                cout << "[" << matriz[i][j] << "]";
            }
        }
        cout << endl;
    }

    return 0;
}