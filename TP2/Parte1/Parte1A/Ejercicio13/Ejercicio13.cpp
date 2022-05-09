/*
Hacer un programa que muestre la serie Fibonacci, mostrando sus elementos desde el - 1 1 2 3 5 8 
13...hasta n
*/

#include <iostream>
using namespace std;

int main()
{
    int numberFin, a=0,b=1, c=1;

    cout << "Ingrese el valor final" << endl;
    cin >> numberFin;

    cout<<"1 ";

    for (int i = 0; i <= numberFin; i++)
    {
        c=a+b;
       cout<<c<<" ";              
       a = b;
       b = c;
    }

    return 0;
}