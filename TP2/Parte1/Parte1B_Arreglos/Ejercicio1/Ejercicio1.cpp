/*
: Escribe un programa que con While, defina un vector de números y calcule la suma de sus elementos.
Use la librería conio.h, y la función getch().
*/

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    char exit = 'N';
    int vector[100], sumatoria = 0, contador = 0;
    for (int i = 0; i < 10; i++)
    {
        vector[i]=0;
    }

    while (vector[contador-1]!=83)
    {
        cout<<"Ingrese un valor o S para salir"<<endl;
        vector[contador]=getch();        
        sumatoria+=vector[contador];
        contador++;
    }

cout << "\n########### MOSTRAR VECTOR COMPLETO #############" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout<<vector[i]<<" ";
    }
    
    cout << "\n################# MOSTRAR SUMATORIA ###################" << endl;
    cout<<"La sumatoria es de: "<<sumatoria<<endl;
    
    return 0;
}