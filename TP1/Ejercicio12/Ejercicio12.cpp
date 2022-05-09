#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int num1, num2;

    cout << "Ingrese el primer numero" << endl;
    cin >> num1;
    cout << "Ingrese el segundo numero" << endl;
    cin >> num2;

    cout << "Primer Numero: " << num1 << endl;
    cout << "Segundo Numero: " << num2 << endl;
    cout << "Intercambio" << endl;
    swap(num1, num2);
    cout << "Primer Numero: " << num1 << endl;
    cout << "Segundo Numero: " << num2 << endl;
    return 0;
}
