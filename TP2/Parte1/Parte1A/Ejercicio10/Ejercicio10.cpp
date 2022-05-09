/*
 Escriba un programa que calcule el valor de: 1!+2!+3!+...+n! (suma de factoriales)
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    long long number, result = 1, result2 = 1;
    cout << "Ingrese el valor final" << endl;
    cin >> number;

    for (int i = 1; i <= number; i++)
    {        
        result = 1;
        for (int j = 1; j <= i; j++)
        {
            result = result * j;
        }        
        result2 +=result;
    }

    cout << "La suma de factoriales es :"<< result2 << endl;

    return 0;
}