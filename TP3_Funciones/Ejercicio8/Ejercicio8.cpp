/*
Escriba una función llamada maximo() que devuelva el valor máximo de tres argumentos que se
transmitan a la función cuando sea llamada. Suponga que los tres argumentos serán del mismo
tipo de datos.
*/

#include <iostream>
using namespace std;

int maximo(int num1, int num2, int num3)
{
    if (num1 > num2 && num1 > num3)
    {
        return num1;
    }
    else if (num2 > num3)
    {
        return num2;
    }
    else
    {
        return num3;
    }
}

int main(int argc, char const *argv[])
{

    cout << "El valor maximo es: " << maximo(1, 2, 3) << endl;
    cout << "El valor maximo es: " << maximo(4, 2, 3) << endl;
    cout << "El valor maximo es: " << maximo(1, 5, 3) << endl;
    cout << "El valor maximo es: " << maximo(1, 1, 1) << endl;

    return 0;
}