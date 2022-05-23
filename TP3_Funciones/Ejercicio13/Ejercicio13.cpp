/*
. Realice un programa permita elegir entre contar palabras de una frase y contar la ocurrencia de
una palabra en la frase, mientras el usuario lo desee. Para ello valerse de lo siguiente:
• Una función que permita conocer cuantas palabras hay en una frase recibida como parámetro.
• Otra función que determine cuantas veces se encuentra una palabra en una frase.

*/

#include <iostream>
#include <string>
using namespace std;

void buscarPalabra(string frase)
{
    string palabra;
    int aux = 0, contador = 0;
    cout << "Ingrese una palabra a buscar: " << endl;
    cin >> palabra;    
    do
    {
        aux = frase.find(palabra);       
        if (aux < frase.length())
        {
            contador++;
            frase=frase.substr(aux+palabra.length(),frase.length());                              
        }        
        
    } while (!(aux > frase.length()));
    cout<<"La palabra buscada se encontro "<<contador<<" veces en la frase"<<endl;
}

int main(int argc, char const *argv[])
{
    string frase;

    cout << "Ingrese una frase: " << endl;
    getline(cin, frase);
    buscarPalabra(frase);

    return 0;
}