/*
 Escriba un programa que calcule el valor de: 1*2*3*...*n (factorial)
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    long long number, result = 1;
    cout << "Ingrese el valor final" << endl;
    cin >> number;

    for (int i = 1; i <= number; i++)
    {
        result = result * i;
    }

    cout << "El factorial de : "<<number<<" = " << result << endl;

    return 0;
}
