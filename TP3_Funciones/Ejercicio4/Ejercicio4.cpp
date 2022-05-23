/*
Cree una estructura Persona que tenga un vector de 30 caracteres, y su edad. Declare una
variable de tipo Persona, y use una función pedirDatos que la cargue. Use getline para cargar el
nombre. Otra función mostrarDatos que reciba la estructura y la muestre. Declare el prototipo
de las funciones pedirDatos y mostrarDatos. Pruébelas desde el menú principal.
*/

#include <iostream>
#include <string>
using namespace std;

struct Persona
{
    string nombre;
    int edad;
} persona;

void pedirDatos()
{
    cout << "Ingrese nombre: ";
    getline(cin, persona.nombre);
    cout << "Ingrese edad: ";
    cin >> persona.edad;
}

void mostrarDatos()
{
    cout << "Nombre: " << persona.nombre<<endl;
    cout << "Edad: " << persona.edad<<endl;
}

int main(int argc, char const *argv[])
{
    pedirDatos();
    mostrarDatos();
    return 0;
}