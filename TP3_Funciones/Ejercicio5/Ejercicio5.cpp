/*
 Realice una función que dada una matriz y un número de fila de la matriz devuelva el menor de
los elementos almacenados en dicha fila.
*/

#include <iostream>
using namespace std;

const int fila = 10;
const int columna = 10;

void cargarMatriz(int vector[fila][columna])
{
    for (int i = 0; i < fila; i++)
    {
        for (int j = 0; j < columna; j++)
        {
            vector[i][j] = rand() % 10;
        }
    }
}

void mostrarMatriz(int vector[fila][columna])
{
    for (int i = 0; i < fila; i++)
    {
        if (i < 9)
        {
            cout << "Fila: " << i + 1 << "  - ";
        }
        else
        {
            cout << "Fila: " << i + 1 << " - ";
        }
        for (int j = 0; j < columna; j++)
        {
            cout << vector[i][j] << " ";
        }
        cout << "" << endl;
    }
}

int menorFila(int vector[fila][columna], int valueFile)
{
    int minimo = vector[valueFile][0];
    for (int j = 0; j < columna; j++)
    {
        if (minimo > vector[valueFile][j])
        {
            minimo = vector[valueFile][j];
        }
    }
    return minimo;
}

int main(int argc, char const *argv[])
{
    int vector[fila][columna];
    int valueFile;

    cargarMatriz(vector);
    mostrarMatriz(vector);
    cout << "\nIngrese la fila que quiere obtener el minimo: " << endl;
    cin >> valueFile;
    valueFile -= 1;
    if (valueFile >= 0 && valueFile <= fila)
    {
        cout << "El valor minimo de la fila " << valueFile + 1 << " es: " << menorFila(vector, valueFile) << endl;
    }
    else
    {
        cout << "El valor ingresado esta fuera de rango: " << endl;
    }

    return 0;
}