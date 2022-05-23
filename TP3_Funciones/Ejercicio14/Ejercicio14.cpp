/*
Realice un programa que contenga las siguientes funciones o procedimientos según sea:
• cargaMatriz: que carga una matriz de 4 por 4 con números reales ingresados por el usuario
• muestraMatriz: nos muestra en pantalla la matriz de 4 por 4 recibida por parámetro
• intercambioDiagonal: recibe 2 matrices por parámetro e intercambia los valores de las
diagonales de ambas.
Escriba un programa que llame a las funciones en el siguiente orden: carga (para las 2 matrices),
muestra (para las 2 matrices), intercambia, muestra (para las 2 matrices).
*/

#include <iostream>
using namespace std;
const int fila = 4, columna = 4;

void cargarMatriz(int matriz[fila][columna])
{
    for (int i = 0; i < fila; i++)
    {
        for (int j = 0; j < columna; j++)
        {
            matriz[i][j] = rand() % 100;
        }
    }
}

void mostrarMatriz(int matriz[fila][columna])
{
    for (int i = 0; i < fila; i++)
    {
        for (int j = 0; j < columna; j++)
        {
            if (matriz[i][j] < 10)
            {
                cout << "  " << matriz[i][j] << " ";
            }
            else
            {
                cout << " " << matriz[i][j] << " ";
            }
        }
        cout << "" << endl;
    }
}

void intercambioDiagonal(int matriz1[fila][columna], int matriz2[fila][columna])
{
    int aux = 0;
    for (int i = 0; i < fila; i++)
    {
        for (int j = 0; j < columna; j++)
        {
            if (i == j)
            {
                aux = matriz1[i][j];
                matriz1[i][j] = matriz2[i][j];
                matriz2[i][j] = aux;
            }
            if ((i + j) == (columna - 1))
            {
                aux = matriz1[i][j];
                matriz1[i][j] = matriz2[i][j];
                matriz2[i][j] = aux;
            }
        }
    }
}

void mostrarDiagonalPrincipal(int matriz[fila][columna])
{
    cout << "Diagonal principal: ";
    for (int i = 0; i < fila; i++)
    {
        for (int j = 0; j < columna; j++)
        {
            if (i == j)
            {
                if (matriz[i][j] < 10)
                {
                    cout << "[ " << matriz[i][j] << "]";
                }
                else
                {
                    cout << "[" << matriz[i][j] << "]";
                }
            }
        }
    }
    cout << "" << endl;
}

void mostrarDiagonalSecundaria(int matriz[fila][columna])
{
    cout << "Diagonal secundaria: ";
    for (int i = 0; i < fila; i++)
    {
        for (int j = 0; j < columna; j++)
        {
            if ((i + j) == (columna - 1))
            {
                if (matriz[i][j] < 10)
                {
                    cout << "[ " << matriz[i][j] << "]";
                }
                else
                {
                    cout << "[" << matriz[i][j] << "]";
                }
            }
        }
    }
    cout << "" << endl;
}
int main(int argc, char const *argv[])
{
    int matriz1[fila][columna];
    int matriz2[fila][columna];

    cout << "############ MATRIZ 1 ##########" << endl;
    cargarMatriz(matriz1);
    mostrarMatriz(matriz1);
    mostrarDiagonalPrincipal(matriz1);
    mostrarDiagonalSecundaria(matriz1);
    cout << "\n############ MATRIZ 2 ##########" << endl;
    cargarMatriz(matriz2);
    mostrarMatriz(matriz2);
    mostrarDiagonalPrincipal(matriz2);
    mostrarDiagonalSecundaria(matriz2);

    cout << "\n############ Intercambio de matriz ##########" << endl;
    intercambioDiagonal(matriz1, matriz2);

    cout << "####### MATRIZ 1 Diagonal intercambiada #######" << endl;
    mostrarMatriz(matriz1);    
    cout << "\n####### MATRIZ 2 Diagonal intercambiada #######" << endl;
    mostrarMatriz(matriz2);    
    return 0;
}