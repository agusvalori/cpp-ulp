/*
Hacer un programa que lea 5 números en un arreglo, los copie a otro arreglo multiplicados por 2 y 
muestre el segundo arreglo.
*/

#include <iostream>

using namespace std;

int main()
{
    int vector[10], vector2[10];

    for (int i = 0; i < 10; i++)
    {
        cout<<"Ingrese valor: "<<(i+1)<<" de 10"<<endl;
        cin>>vector[i];
        vector2[i]=vector[i]*2;
    }
    cout << "\n\n ####### MOSTRAR VECTOR ORIGINAL #######"<<endl;
    for (int i = 0; i < 10; i++)
    {
        cout << vector[i] << " ";
    }

     cout << "\n\n ####### MOSTRAR VECTOR COPIA *2 #######"<<endl;
    for (int i = 0; i < 10; i++)
    {
        cout << vector2[i] << " ";
    }


    
    return 0;
}