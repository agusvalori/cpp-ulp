/*
Hacer una estructura llamada Corredor, en la cual se tendrán los siguientes campos:
 Nombre, edad, sexo, club, pedir datos al usuario para un corredor,
y asignarle una Categoría de competición (use strcpy para copiar a la variable) según sea:
- Juvenil menor o = 18 años
- Señor menor o = 40 años
- Veterano mayor a 40 años
Posteriormente imprimir todos los datos del corredor, incluida su categoría de competición.
*/
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

struct corredor
{
    // Nombre, edad, sexo, club, pedir datos al usuario para un corredor,
    string nombre;
    int edad;
    string sexo;
    string club;
    char categoria[10];
};

int main(int argc, char const *argv[])
{
    corredor corr;
    char exit = 'N';

    cout << "Cargar corredor: " << endl;
    cout << "Ingrese el nombre: ";
    getline(cin, corr.nombre);
    cout << "Ingrese la edad: ";
    cin >> corr.edad;
    cout << "Ingrese el sexo: ";
    cin >> corr.sexo;
    cout << "Ingrese el club: ";
    cin >> corr.club;

    if (corr.edad <= 18)
    {
        strcpy(corr.categoria, "Juvenil");
    }
    else if (corr.edad <= 40)
    {
        strcpy(corr.categoria, "Señor");
    }
    else
    {
        strcpy(corr.categoria, "Veterano");
    }

    cout<<"\n ##################################"<<endl;

    cout << "Nombre: " << corr.nombre << endl;
    cout << "Edad: " << corr.edad << endl;
    cout << "Sexo: " << corr.sexo << endl;
    cout << "Club: " << corr.club << endl;
    cout << "Categoria: " << corr.categoria << endl;

    return 0;
}
