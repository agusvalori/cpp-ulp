/*
    Realizar pasajes entre variables y punteros y muestra la ubicacion
    y los valores apuntados
*/

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    string palabra = "Palabra";
    string *stringPtr = &palabra;

    cout << "Valor: " << palabra << "  Ubicacion en memoria: " << &palabra << endl;
    cout << "Puntero: " << stringPtr << " - &stringPtr: " << &stringPtr << " - *stringPtr: " << *stringPtr << endl;

    //asignamos un nuevo valor a palabra desde su puntero.
    *stringPtr = "Nueva Palabra";

    cout << "\n" << endl;
    cout << "Valor: " << palabra << "  Ubicacion en memoria: " << &palabra << endl;
    cout << "Puntero: " << stringPtr << " - &stringPtr: " << &stringPtr << " - *stringPtr: " << *stringPtr << endl;

    /*
      stringPtr: Muestra la ubicacion en memoria del objeto apuntado
      &stringPtr: Muesta la ubicacion en memoria del puntero
      *stringPtr: Muestrae l valor del objeto apuntado
    */
    return 0;
}
