/*
 A-Escriba un programa que calcule usando un while, el valor de: 1+2+3+...+n. B-Escriba un programa que
calcule usando un for, el valor de: 1+3+5+...+2n-1
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int number, sumatoria = 0, count = 0;
    cout << "Ingrese valor marximo" << endl;
    cin >> number;

    cout << "############## FOR  ####################" << endl;
    for (int i = 0; i <= number; i++)
    {
        cout << i << "+" << sumatoria << '=' << sumatoria + i << endl;
        sumatoria += i;
    }

    cout << "############## WHILE  ####################" << endl;
    sumatoria = 0;
    while (count != number+1)
    {
        cout << count << "+" << sumatoria << '=' << sumatoria + count << endl;        
        sumatoria += count;
        count++;
    }

    return 0;
}
