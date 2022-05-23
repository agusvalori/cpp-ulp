/*
Declare un vector Vec de tamaño TAM constante. Cree una función Cuadrado, a la cual se le
envíe Vec y lo modifique con el cuadrado de sus valores. Otra función que lo muestre
*/

#include <iostream>
using namespace std;

const int TAM = 10;

void cuadrado(int arreglo[])
{
    for (int i = 0; i < TAM; i++)
    {
        arreglo[i] *= arreglo[i];
    }
}

void mostrar(int arreglo[])
{
    for (int i = 0; i < TAM; i++)
    {
        cout<<arreglo[i]<<endl;
    }
}

int main(int argc, char const *argv[])
{

    int arreglo[TAM];
    for (int i = 0; i < TAM; i++)
    {
        arreglo[i] = i;
    }

cout<<"Arreglo original"<<endl;
    mostrar(arreglo);
    cout<<"Sus cuadrados"<<endl;
    cuadrado(arreglo);
    mostrar(arreglo);

    return 0;
}