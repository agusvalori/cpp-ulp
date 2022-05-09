#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int num1, num2;
    cout << "Ingrese el primer numero" << endl;
    cin >> num1;
    cout << "Ingrese el segundo numero" << endl;
    cin >> num2;

    cout<<"Suma: "<<num1+num2<<endl;
    cout<<"Resta: "<<num1-num2<<endl;
    cout<<"Division: "<<num1/num2<<endl;
    cout<<"Multiplicacion: "<<num1*num2<<endl;

    return 0;
}

