/*
Hacer 2 estructuras una llamada promedio que tendrá
los siguientes campos: nota1, nota2, nota3; y otro llamada alumno que tendrá
 los siguientes miembros: nombre, sexo, edad; hacer que la estructura promedio
 este anidada en la estructura alumno, luego pedir todos los datos para un alumno,
  luego calcular su promedio, y por último imprimir todos sus datos incluidos el promedio.
 Calcular cuál de 2 alumnos tiene el mejor promedio, y mostrar el nombre.
*/
#include <iostream>
#include <string.h>
#include <string>
using namespace std;

struct promedio
{
    double nota1;
    double nota2;
    double nota3;
    double total;
};

struct alumno
{
    string nombre;
    string sexo;
    int edad;
    promedio promedio;
};

int main(int argc, char const *argv[])
{
    const int dimension = 2;
    alumno alum[dimension];
    double mejorPromedioNota;
    string mejorPromedioNombre;

    for (int i = 0; i < dimension; i++)
    {
        cout << "\nCarga alumno numero: " << i + 1 << endl;
        cout << "Nombre: ";
        getline(cin, alum[i].nombre);
        cout << "Edad: ";
        cin >> alum[i].edad;
        cout << "Sexo: ";
        cin.get();
        getline(cin, alum[i].sexo);
        cout << "Nota 1: ";
        cin >> alum[i].promedio.nota1;
        cout << "Nota 2: ";
        cin >> alum[i].promedio.nota2;
        cout << "Nota 3: ";
        cin >> alum[i].promedio.nota3;
        cin.get();
        alum[i].promedio.total = (alum[i].promedio.nota3 + alum[i].promedio.nota2 + alum[i].promedio.nota1) / 3;        
    }

    cout << "\n ######## Nota Total Alumnos #########" << endl;
    for (int i = 0; i < dimension; i++)
    {
        cout << "\n ##### Alumno " << (i + 1) << " #####" << endl;
        cout << "Nombre: " << alum[i].nombre << endl;
        cout << "Edad: " << alum[i].edad << endl;
        cout << "Sexo: " << alum[i].sexo << endl;
        cout << "Nota 1: " << alum[i].promedio.nota1 << endl;
        cout << "Nota 2: " << alum[i].promedio.nota2 << endl;
        cout << "Nota 3: " << alum[i].promedio.nota3 << endl;
        cout << "Promedio: " << alum[i].promedio.total << endl;
        if (i == 0)
        {
            mejorPromedioNota = alum[i].promedio.total;
            mejorPromedioNombre = alum[i].nombre;
        }
        else
        {
            if (mejorPromedioNota < alum[i].promedio.total)
            {
                mejorPromedioNombre = alum[i].nombre;
                mejorPromedioNota = alum[i].promedio.total;
                
            }
        }
    }

    cout << "\n ######## Mejor Promedio #########" << endl;
    cout << "Nombre: " << mejorPromedioNombre << endl;
    cout << "Promedio: " << mejorPromedioNota << endl;
    return 0;
}
