/*
Defina una estructura que sirva para representar a una persona.
La estructura debe contener dos campos:
 el nombre de la persona y un valor de tipo lógico que indica si
 la persona tiene algún tipo de discapacidad.
 Realice un programa que dado un vector de personas rellene dos nuevos vectores:
 uno que contenga las personas que no tienen ninguna discapacidad y otro que contenga
 las personas con discapacidad.
*/
#include <iostream>
#include <string>
using namespace std;

struct persona
{
    string nombre;
    bool discapacidad;
};

int main(int argc, char const *argv[])
{
    const int dimension = 5;
    persona person[dimension];
    persona personConDiscapacidad[dimension];
    int contConDisc = 0;
    int contSinDisc = 0;
    persona personSinDiscapacidad[dimension];

    for (int i = 0; i < dimension; i++)
    {
        string aux;
        cout << "\nPersona numero: " << i + 1 << endl;
        cout << "Nombre: ";
        getline(cin, person[i].nombre);
        do
        {
            cout << "Posee alguna discapacidad: Si/No : ";
            cin >> aux;
            if (aux == "Si")
            {
                person[i].discapacidad = true;
                personConDiscapacidad[contConDisc].discapacidad = true;
                personConDiscapacidad[contConDisc].nombre = person[i].nombre;
                contConDisc++;
            }
            else if (aux == "No")
            {
                person[i].discapacidad = false;
                personSinDiscapacidad[contSinDisc].discapacidad = false;
                personSinDiscapacidad[contSinDisc].nombre = person[i].nombre;
                contSinDisc++;
            }
            else
            {
                cout << "Valor invalido vuelva a intentar" << endl;
            }
            cin.get();

        } while (!(aux == "Si" || aux == "No"));
    }

    cout << "\nTotal de personas: " << dimension << endl;
    cout << "Total de personas con discapacidad: " << contConDisc << endl;
    cout << "Total de personas sin discapacidad " << contSinDisc << endl;

    return 0;
}
