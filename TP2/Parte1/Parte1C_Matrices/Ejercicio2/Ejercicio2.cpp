/*
Realiza un programa que defina una matriz de 3x3 y escriba un ciclo para que muestre la diagonal principal de la matriz.
*/

#include <iostream>

using namespace std;

int main()
{
    int matriz[5][5], diagonal[5];
    

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            matriz[i][j] = rand() %10;
        }
    }
cout<<"\n ################ MOSTRAR MATRIZ ################ \n"<<endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i != j)
            {
                cout << " " << matriz[i][j] << " ";
            }
            else
            {
                cout << "[" << matriz[i][j] << "]";
                diagonal[i]=matriz[i][j];
            }
        }
        cout << endl;
    }
cout<<"\n ############### MOSTRAR DIAGONAL ############### \n"<<endl;
    for (int i = 0; i < 5; i++)
    {       
        cout<<"["<<diagonal[i]<<"] ";
    }
    cout<<endl;

cout<<"\n ############ MOSTRAR DIAGONAL INVERTIDA ############ \n"<<endl;
    for (int i = 0; i < 5; i++)
    {       
        cout<<"["<<diagonal[4-i]<<"] ";
    }
    cout<<endl;
    return 0;
}