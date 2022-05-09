/*
Declare una estructura llamada Disco (CD), que guarde el título, artista,
numero de canciones, precio, año de lanzamiento. Declare 3 variables de tipo Disco.
 Use strlen para mostrar la longitud del artista, si es mayor a 10 letras.
 Luego compare si dos títulos son del mismo artista.
*/

#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char const *argv[])
{
    struct Disco
    {
        string titulo;
        string artista;
        int nroCanciones;
        float precio;
        int anioLanzamiento;
    };

    Disco disco[3];

    for (int i = 0; i < 3; i++)
    {
        cout << "Carge los datos del disco Numero: " << (i + 1) << endl;

        cout << "Titulo " << endl;
        cin >> disco[i].titulo;

        cout << "Artista " << endl;
        cin >> disco[i].artista;

        cout << "Nro de canciones " << endl;
        cin >> disco[i].nroCanciones;

        cout << "Precio " << endl;
        cin >> disco[i].precio;

        cout << "Año de lanzamiento " << endl;
        cin >> disco[i].anioLanzamiento;
        cout << "\n ########################### \n"
             << endl;
    }

    for (int i = 0; i < 3; i++)
    {
        cout << "\n ########################### \n"
             << endl;
        cout << "Titulo " << disco[i].titulo << endl;
        
        if (disco[i].titulo.size() > 10)
        {
            cout << "La longitud del titulo es de: " << disco[i].titulo.size() << endl;
        }
        cout << "Artista " << disco[i].artista << endl;
        cout << "Nro de canciones " << disco[i].nroCanciones << endl;
        cout << "Precio " << disco[i].precio << endl;
        cout << "Año de lanzamiento " << disco[i].anioLanzamiento << endl;
    }


    

    return 0;
}
