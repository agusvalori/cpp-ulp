/*
Escribe un programa que defina un vector de números y muestre en la salida estándar el vector en 
orden inverso—del último al primer elemento.
*/

#include <iostream>

using namespace std;

int main()
{    
    int vector[100];
    for (int i = 0; i < 100; i++)
    {
        vector[i]=i;
    }

cout << "\n########### MOSTRAR VECTOR COMPLETO #############\n" << endl;
    for (int i = 0; i < 100; i++)
    {
        cout<<vector[i]<<" ";
    }

    cout << "\n########### MOSTRAR VECTOR INVERTIDO #############\n" << endl;
    for (int i = 0; i < 100; i++)
    {
        cout<<vector[99-i]<<" ";
    }
        
    
    return 0;
}