/*
Hacer una estructura llamada alumno, en la cual se tendrán los siguientes
 Campos: Nombre, edad, promedio, pedir datos al usuario para 3 alumnos,
 comprobar cuál de los 3 tiene el mejor promedio y posteriormente imprimir los datos del alumno.
*/
#include <iostream>
#include <string>
using namespace std;

struct alumnos
{
    string nombre;
    int edad;
    double promedio;
};

int main(int argc, char const *argv[])
{
    const int dimension = 3;
    alumnos alumno[dimension];

    alumnos mejorPromedio;
    for (int i = 0; i < dimension; i++)
    {
        cout << "\nCargar alumno numero: " << (i + 1) << " de " << dimension << endl;
        cout << "Nombre: ";
        getline(cin, alumno[i].nombre);
        cout << "Edad: ";
        cin >> alumno[i].edad;
        cout << "Promedio: ";
        cin >> alumno[i].promedio;
        if (i == 0)
        {
            mejorPromedio = alumno[i];
        }
        else
        {
            if (alumno[i].promedio > mejorPromedio.promedio)
            {
                mejorPromedio = alumno[i];
            }
        }
        cin.get();
    }

    for (int i = 0; i < dimension; i++)
    {
        cout << "\nMostrar alumno numero: " << (i + 1) << " de " << dimension << endl;
        cout << "Nombre: " << alumno[i].nombre;
        cout << "  -  Edad: " << alumno[i].edad;
        cout << "  -  Promedio: " << alumno[i].promedio << endl;
    }

    cout << "\nEl alumno con mejor promedio es: " << endl;
    cout << "Nombre: " << mejorPromedio.nombre;
    cout << "  -  Edad: " << mejorPromedio.edad;
    cout << "  -  Promedio: " << mejorPromedio.promedio << endl;

    return 0;
}
