#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int base, exponente,sumatoria=1;

    cout<<"Ingrese la base"<<endl;
    cin>>base;
    cout<<"Ingrese el exponente"<<endl;
    cin>>exponente;

    for (int i = 0; i <exponente; i++)
    {        
        sumatoria=(sumatoria*base);        
    }
    cout<<"Resultado: "<<sumatoria<<endl;
    
    return 0;
}
