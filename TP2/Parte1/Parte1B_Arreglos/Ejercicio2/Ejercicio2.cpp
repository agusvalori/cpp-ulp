/*
 Escribe un programa usando un for, que defina un vector de números y calcule la multiplicación 
acumulada de sus elementos. Use la librería conio.h, y la función getch().

*/

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    char exit = 'N';
    int vector[10], sumatoria = 0;
    for (int i = 0; i < 10; i++)
    {
        vector[i]=0;
    }

    for (int i = 0; i < 10; i++)
    {
        cout<<"Ingrese un valor o S para salir"<<endl;
        vector[i]=getch();        
        sumatoria*=vector[i];        
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