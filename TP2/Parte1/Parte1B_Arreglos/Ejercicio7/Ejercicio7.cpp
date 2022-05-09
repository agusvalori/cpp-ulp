/*
: Realiza un programa que defina dos vectores de caracteres y después almacene el contenido de ambos
vectores en un nuevo vector, situando en primer lugar los elementos del primer vector seguido por los elementos
del segundo vector. Muestre el contenido del nuevo vector en la salida estándar.
*/

#include <iostream>

using namespace std;

int main()
{
    string vector[20];
    string vector1[10] = {"a", "s", "d", "f", "g", "h", "j", "k", "l", "1"};
    string vector2[10] = {"q", "w", "e", "r", "t", "y", "u", "i", "o", "p"};

    for (int i = 0; i < 10; i++)
    {
        vector[i] = vector1[i];
        vector[i + 10] = vector2[i];
    }
    cout << "\n ####### VECTOR 1 #######\n"<<endl;
    for (int i = 0; i < 10; i++)
    {
        cout << vector1[i] << " ";
    }

    cout << "\n ####### VECTOR 2 #######\n"<<endl;
    for (int i = 0; i < 10; i++)
    {
        cout << vector2[i] << " ";
    }

    cout << "\n ####### VECTOR NUEVO #######\n"<<endl;
    for (int i = 0; i < 20; i++)
    {
        cout << vector[i] << " ";
    }
    return 0;
}