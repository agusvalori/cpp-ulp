/*
pasar el valor del puntero en una funcion y cambiarlo en la funcion
*/

#include <iostream>
using namespace std;

void cambiarValor(int *valor)
{
    *valor += 20;
}

int main(int argc, char const *argv[])
{
    int valor = 10;
    int *punteroValor = &valor;
    cout << "valor: " << valor << endl;

    cambiarValor(&valor);
    cout << "valor: " << valor << endl;

    cambiarValor(punteroValor);
    cout << "valor: " << valor << endl;

    return 0;
}

/*
      stringPtr: Muestra la ubicacion en memoria del objeto apuntado
      &stringPtr: Muesta la ubicacion en memoria del puntero
      *stringPtr: Muestrae l valor del objeto apuntado
    */