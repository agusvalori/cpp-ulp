/*
 Se tiene el vector A con 100 elementos almacenados. Diseñe un algoritmo que escriba SI, si el vector esta
ordenado ascendentemente, o NO si el vector no está ordenado

*/

#include <iostream>
using namespace std;
#include <cstdlib>

int main()
{
    int vector[100];
    bool estaOrdenado = true;
    char selectOption;

    for (int i = 0; i < 100; i++)
    {
        vector[i] = rand() % 100;
        // vector[i]=i;
    }

    cout << "\n#################### MOSTRAR #################### \n"
         << endl;

    for (int i = 0; i < 100; i++)
    {
        if (i != 99)
        {
            cout << vector[i] << ", ";
        }
        else
        {
            cout << vector[i] << "." << endl;
        }
    }
    cout << "\n################################################# \n"
         << endl;

    for (int i = 1; i < 100; i++)
    {
        if (vector[i - 1] < vector[i])
        {
            estaOrdenado &= true;
        }
        else
        {
            estaOrdenado &= false;
        }
    }

    if (estaOrdenado == 1)
    {
        cout << "\n esta ordenado: SI" << endl;
    }
    else
    {
        cout << "\n esta ordenado: NO" << endl;
    }

    cout << "\n################################################# \n"
         << endl;

    cout << "Desea ordenarlos S/N" << endl;
    cin >> selectOption;

    if (selectOption == 'S')
    {
        for (int j = 0; j < 99; j++)
        {
            for (int i = 1; i < 100; i++)
            {
                int aux = 0;

                if (vector[i - 1] > vector[i])
                {
                    aux = vector[i - 1];
                    vector[i - 1] = vector[i];
                    vector[i] = aux;
                    estaOrdenado &= true;
                }
                else
                {
                    estaOrdenado &= false;
                }
            }
        }
    }

    cout << "\n#################### MOSTRAR ORDENADO #################### \n"
         << endl;

    for (int i = 0; i < 100; i++)
    {
        if (i != 99)
        {
            cout << vector[i] << ", ";
        }
        else
        {
            cout << vector[i] << "." << endl;
        }
    }
    cout << "\n################################################# \n"
         << endl;

    return 0;
}