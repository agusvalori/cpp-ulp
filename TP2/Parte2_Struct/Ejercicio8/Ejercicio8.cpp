/*
Realizar un programa que lea un arreglo de estructuras los datos de N empleados de la empresa y
que imprima los datos del empleado con mayor y menor salario.
*/
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

struct trabajador
{
    string nombre;
    float salario;
};

int main(int argc, char const *argv[])
{
    double salMax = 0;
    double salMin = 0;
    trabajador trab[10];
    for (int i = 0; i < 3; i++)
    {
        if (i == 0)
        {
            salMax = trab[i].salario;
            salMin = trab[i].salario;
        }
        cout << "\n Cargando empleado numero: " << i + 1 << " de 3" << endl;
        cout << "Ingrese el nombre: ";
        getline(cin, trab[i].nombre);
        cout << "Ingrese el salario: ";
        cin >> trab[i].salario;
        cin.get();

        if (salMin > trab[i].salario)
        {
            salMin = trab[i].salario;
        }
        if (salMax < trab[i].salario)
        {
            salMax = trab[i].salario;
        }
    }

    cout << "\n SALARIO MINIMO: " << salMin <<endl;
    cout << "\n SALARIO MAXIMO: " << salMax << endl;

    return 0;
}
