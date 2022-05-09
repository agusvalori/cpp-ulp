/*
Hacer un programa que calcule el resultado de la siguiente expresión: 1-2+3-4+5-6...n
*/


#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    long long number, result = 1;
    int num1=1, num2=2;
    cout << "Ingrese el valor final" << endl;
    cin >> number;

    while (num2<number)
    {
        cout<<num1<<" - "<<num2<<", ";
        result+=num1-num2;
        num1+=2;
        num2+=2;
    }
        cout<<"Result: "<<result<<endl;
    return 0;
}
