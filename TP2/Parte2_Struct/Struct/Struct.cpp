#include <iostream>
using namespace std;

struct Persona
{
    string nombre;
    int edad;
    string dni;
};

int main(int argc, char const *argv[])
{
    struct Persona personArray[2];

    for (int i = 0; i < 2; i++)
    {
        cout << "Ingrese persona numero: " << i << endl;
        cout << "Ingrese nombre: " << endl;
        cin >> personArray[i].nombre;
        cout << "Ingrese edad: " << endl;
        cin >> personArray[i].edad;
        cout << "Ingrese dni: " << endl;
        cin >> personArray[i].dni;
    }

    for (int i = 0; i < 2; i++)
    {
        cout << "Nombre: " << personArray[i].nombre << " - Edad: " << personArray[i].edad << " - Dni: " << personArray[i].dni << endl;
    }

    return 0;
}
