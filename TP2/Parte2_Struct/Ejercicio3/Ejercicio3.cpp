/*
Cree una estructura infoDireccion con calle, ciudad, provincia. Otra estructura anida a la
anterior. Llamada Empleado que guarda nombre, Dirección (de tipo infoDireccion), y salario.
Declare un arreglo de 2 empleados, y cargue las estrcuturas Empleado desde el main.
 */
#include <iostream>
#include <string>
using namespace std;

struct infoDireccion
{
    string calle;
    string ciudad;
    string provincia;
};

struct empleado
{
    string nombre;
    infoDireccion direccion;
    int salario;
};

int main(int argc, char const *argv[])
{
    empleado emp[2];

    for (int i = 0; i < 2; i++)
    {
        cout << "\n Ingrese los datos del empleado numero: " << (i + 1) << endl;
        cout << "Nombre: ";
        getline(cin, emp[i].nombre);
        cout << "Calle: ";
        getline(cin, emp[i].direccion.calle);
        cout << "Ciudad: ";
        getline(cin, emp[i].direccion.ciudad);
        cout << "Provincia: ";
        getline(cin, emp[i].direccion.provincia);
        cout << "Salaria: Numero entero: $";
        cin >> emp[i].salario;
        cin.get();
    }

    for (int i = 0; i < 2; i++)
    {
        cout << "\n ########## EMPLEADO " << (i + 1) << "#######"
             << endl;

        cout << "Nombre: " << emp[i].nombre << endl;
        cout << "Calle: " << emp[i].direccion.calle << endl;

        cout << "Ciudad: " << emp[i].direccion.ciudad << endl;
        cout << "Direccion: " << emp[i].direccion.provincia << endl;
        cout << "Salaria: $" << emp[i].salario << endl;
    }

    return 0;
}
