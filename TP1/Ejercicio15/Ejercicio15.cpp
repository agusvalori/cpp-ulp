#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    const int dolar=100;
    float pesos;

    cout<< "Ingrese la cantidad de pesos a convertir"<<endl;
    cout<<"$";
    cin>>pesos;
    cout<<"El equivalente en dolares es: "<<dolar*pesos<<" U$$"<<endl;
    return 0;
}
