/*
Hacer un programa en C++ para registrar los datos de tres libros como:
 título, autor, año y color del libro.
  El color se deberá hacer mediante una enumeración y sólo habrá rojo, verde y azul.
*/
#include <iostream>
#include <string>
using namespace std;
enum colores
{
    rojo,
    verde,
    azul
};

struct libros
{
    string titulo;
    string autor;
    int anio;
    enum colores color;
};

int main(int argc, char const *argv[])
{
    const int dimension = 3;
    int aux = 0;
    libros libro[dimension];
    for (int i = 0; i < dimension; i++)
    {

        cout << "\nCargar libro numero: " << (i + 1) << " de " << dimension << endl;
        cout << "Titulo: ";
        getline(cin, libro[i].titulo);
        cout << "Autor: ";
        getline(cin, libro[i].autor);
        cout << "Año: ";
        cin >> libro[i].anio;
        cout << "Seleccione el numero de la siguiente opciones: " << endl;
        cout << "1. rojo, 2.verde, 3.azul: ";
        cin >> aux;

        switch (aux)
        {
        case 1:
            libro[i].color = rojo;
            break;
        case 2:
            libro[i].color = verde;
            break;
        case 3:
            libro[i].color = azul;
            break;

        default:
            break;
        }
        cin.get();
    }
    cout<<"\n"<<endl;

    for (int i = 0; i < dimension; i++)
    {
        cout << "Titulo: " << libro[i].titulo;
        cout << "  -  Autor: " << libro[i].autor;
        cout << "  -  Año: " << libro[i].anio<<"  -  ";
        switch (libro[i].color )
        {
        case rojo:
            cout << "Color: " << "rojo" << endl;
            break;
        case verde:
            cout << "Color: " << "verde" << endl;
            break;
        case azul:
            cout << "Color: " << "azul" << endl;
            break;

        default:
            break;
        }
        }

    return 0;
}
