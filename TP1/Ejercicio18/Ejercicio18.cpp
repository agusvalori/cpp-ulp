#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    int a, b, c, x;
    cout << "vamos a realizar el calculo de la siguente funcion" << endl;
    cout << "f(a,b,c)=(−𝑏+√(𝑏2−4𝑎𝑐))/(2a)" << endl;
    cout << "Ingrese el valor de a: ";
    cin >> a;
    cout << "Ingrese el valor de b: ";
    cin >> b;
    cout << "Ingrese el valor de c: ";
    cin >> c;

    x = (pow(b, 2)) - (4 * a * c);
    if (x > 0)
    {
        cout << "f(a,b,c)= " << (-b + sqrt(x)) / (2 * a);
    }
    else
    {
        cout << "No se puede sacar la raiz cuadrada de un numero negativo" << endl;
        cout<<"f(a,b,c)= (-"<<b<<"√"<<x<<")/"<<2*a<<endl;
    }

    return 0;
}
