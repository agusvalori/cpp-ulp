/*
crear una lista dinamica
*/

#include <iostream>
using namespace std;

struct Nodo
{
    int value;
    Nodo *sig;
};

int main(int argc, char const *argv[])
{



Nodo pila1;
Nodo pila2;
Nodo pila3;
Nodo pila4;

pila1.sig = nullptr;
pila1.value =10;

pila2.sig = &pila1;
pila2.value =20;

pila3.sig = &pila2;
pila3.value =30;

pila4.sig = &pila3;
pila4.value =40;

cout<<"Pila 1: valor: "<<pila1.value<<" ubicacion: "<<&pila1<<" - Siguente: "<<pila1.sig<<endl;
cout<<"Pila 2: valor: "<<pila2.value<<" ubicacion: "<<&pila2<<" - Siguente: "<<pila2.sig<<endl;
cout<<"Pila 3: valor: "<<pila3.value<<" ubicacion: "<<&pila3<<" - Siguente: "<<pila3.sig<<endl;
cout<<"Pila 4: valor: "<<pila4.value<<" ubicacion: "<<&pila4<<" - Siguente: "<<pila4.sig<<endl;

cout<<"\n\n"<<endl;
Nodo * valor3 = pila4.sig;
Nodo * valor2 = pila3.sig;
Nodo * valor1 = pila2.sig;
cout<<valor3->value<<endl;
cout<<valor2->value<<endl;
cout<<valor1->value<<endl;


    return 0;
}
