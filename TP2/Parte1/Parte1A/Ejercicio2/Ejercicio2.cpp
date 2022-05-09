#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int number, cont = 0;
    do
    {
        cout << "Ingrese un numero para salir 0" << endl;
        cin >> number;

        if (number != 0)
        {
            cont++;
            cout << "Usted lleva ingresado: " << cont << " numeros" << endl;
        }

    } while (number != 0);
    cout << "Usted ingreso: " << cont << " numeros" << endl;

    return 0;
}
