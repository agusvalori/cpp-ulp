#include <iostream>
#include <cmath> 
using namespace std;

int main(int argc, char const *argv[])
{
    int x, y;
    cout<<"vamos a realizar el calculo de la siguente funcion"<<endl;
    cout<<"f(x,y)=(√x))/(y²-1)"<<endl;
    cout<<"Ingrese el valor de x: ";
    cin>>x;
    cout<<"Ingrese el valor de y: ";
    cin>>y;

    cout<<"f(x,y)= "<<sqrt(x)/(pow(y,2)-1);
    return 0;
}
