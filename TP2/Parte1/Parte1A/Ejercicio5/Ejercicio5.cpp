#include <iostream>

using namespace std;
int main(int argc, char const *argv[])
{
    int number, numberMenores = 0;
    do
    {
        cout << "Ingrese un numero o 0 para salir: ";
        cin >> number;
        if (number < 0)
        {
            numberMenores++;
        }

    } while (number != 0);

    cout << "Se ingresaron: " << numberMenores << " numeros menores a 0" << endl;

    return 0;
}
