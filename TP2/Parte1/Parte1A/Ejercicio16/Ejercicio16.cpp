/*
Dado un arreglo V de tamaño 20 con números enteros. Deje en un vector A todos los números negativos
y en un vector B todos los positivos o iguales a cero

*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int vector[20], vectorNeg[20], vectorPost[20];
    int contNeg = 0, contPost = 0;
    for (int i = 0; i < 20; i++)
    {
        
        if(i %2==0){
            vector[i] = rand() % 10;
        }else{
            vector[i] = -rand() % 10;
        }
        vectorNeg[i]=0;
        vectorPost[i]=0;
    }

    for (int i = 0; i < 20; i++)
    {        
        if (vector[i] >= 0)
        {
            vectorPost[contPost] = vector[i];
            contPost++;
        }
        else
        {
            vectorNeg[contNeg] = vector[i];
            contNeg++;
        }
    }

    cout << "\n########### MOSTRAR VECTOR COMPLETO #############" << endl;
    for (int i = 0; i < 20; i++)
    {
        cout << vector[i] << " ";
    }
    cout << "\n#################################################" << endl;

    cout << "\n########### MOSTRAR VECTOR POSITIVO #############" << endl;
    for (int i = 0; i < 20; i++)
    {
        cout << vectorPost[i] << " ";
    }
    cout << "\n#################################################" << endl;
    cout << "\n########### MOSTRAR VECTOR NEGATIVO #############" << endl;
    for (int i = 0; i < 20; i++)
    {
        cout << vectorNeg[i] << " ";
    }
    cout << "\n#################################################" << endl;
    return 0;
}