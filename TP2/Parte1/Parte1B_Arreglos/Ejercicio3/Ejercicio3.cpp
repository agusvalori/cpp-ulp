/*
Escribe un programa que lea de la entrada estándar un vector de números de tamaño 100, pero que 
cargue por teclado n números, y los muestre en la salida estándar los números del vector con sus índices 
asociados.
*/

#include <iostream>

using namespace std;

int main()
{
    char exit = 'N';
    int vector[100], sumatoria = 0;
    for (int i = 0; i < 100; i++)
    {
        cout<<"Ingresando valor: "<<(i+1)<<" de 100"<<endl;
        cin>>vector[i];
    }

cout << "\n########### MOSTRAR VECTOR COMPLETO #############" << endl;
    for (int i = 0; i < 100; i++)
    {
        cout<<i<<". "<<vector[i]<<endl;
    }
        
    
    return 0;
}