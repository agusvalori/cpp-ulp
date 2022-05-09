/*
Hacer una matriz preguntando al usuario el número de filas y columnas, llenarla de números aleatorios,
 copiar el contenido a otra matriz y por último mostrarla en pantalla.
*/

#include <iostream>

using namespace std;

int main()
{
    int matriz[5][5], fila = 0, columna = 0, matrizCopia[5][5];
    char exit = 'N';

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            matriz[i][j] = 0;
        }
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
            
            if (matriz[fila][columna] != 0)
            {
                cout << "Ya se encuntra un valor en esa posicion" << endl;
            }
            else
            {
                matriz[fila][columna] = rand() & 10;
            }
        }
        else
        {
            cout << "Valor fuera de rango de la matriz valores validos entre 1 y 5" << endl;
        }
        cout << "Desea salir S/N" << endl;
        cin >> exit;
    } while (exit != 'S');
    cout << "\n ############## MOSTRAR MATRIZ ORIGINAL ############## \n"
         << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            matrizCopia[i][j]=matriz[i][j];
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
    cout << "\n ############## MOSTRAR MATRIZ COPIA ############## \n"
         << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (matrizCopia[i][j] == 0)
            {
                cout << " " << matrizCopia[i][j] << " ";
            }
            else
            {
                cout << "[" << matrizCopia[i][j] << "]";
            }
        }
        cout << endl;
    }

    return 0;
}