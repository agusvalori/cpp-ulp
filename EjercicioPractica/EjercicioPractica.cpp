/*
Escriba una funcion llamada al_cuadrado() que calcule
el cuadrado del valor que se le transmite
y despliege el resultado.
la funcion debera ser capaas de elevar al cuadrado numeros flotantes
*/
#include <iostream>
#include <math.h>
using namespace std;


float al_cuadrado(float number){
    return  pow(number,2);
}

int main(int argc, char const *argv[])
{
    float number;
    cout<<"Ingrese un numero"<<endl;
    cin>>number;
    cout<<"El cuadrado de: "<<number<<" = "<<al_cuadrado(number)<<endl;
    return 0;
}
