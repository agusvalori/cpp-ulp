/*
    Realizar pasajes entre variables y punteros y muestra la ubicacion
    y los valores apuntados
*/

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int numero = 1;
    string palabra = "Palabra";

    int *numeroPtr = &numero;
    string *stringPtr = &palabra;

    cout << "Valor: " << numero << "  Ubicacion en memoria: " << &numero << endl;
    cout << "Puntero: " << numeroPtr << " - &numeroPtr: " << &numeroPtr << " - *numeroPtr: " << *numeroPtr << endl;
    cout << "Valor: " << palabra << "  Ubicacion en memoria: " << &palabra << endl;
    cout << "Puntero: " << stringPtr << " - &stringPtr: " << &stringPtr << " - *stringPtr: " << *stringPtr << endl;
    /*
      stringPtr: Muestra la ubicacion en memoria del objeto apuntado 
      &stringPtr: Muesta la ubicacion en memoria del puntero
      *stringPtr: Muestrae l valor del objeto apuntado

    */
    return 0;
}
