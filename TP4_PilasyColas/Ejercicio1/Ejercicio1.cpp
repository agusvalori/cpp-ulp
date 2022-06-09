#include <iostream>
using namespace std;

struct Nodo
{
    int value;
    Nodo *siguente;
};

void push(Nodo *&pila, int value)
{
    Nodo *nuevo = new Nodo();
    nuevo->value = value;
    nuevo->siguente = pila;

    pila = nuevo;
};

void sacar(Nodo *&pila)
{
    if (pila->siguente != NULL)
    {
        Nodo *nuevo = new Nodo();
        nuevo = pila->siguente;
        delete pila;
        pila = nuevo;
    }
    else
    {
        cout << "La Lista esta vacia" << endl;
    }
}

void mostrarPila(Nodo *&pila)
{
    Nodo *pilaAux = pila;
    while (pilaAux->siguente != NULL)
    {
        cout << pilaAux->value << endl;
        pilaAux = pilaAux->siguente;
        if (pilaAux->siguente == NULL)
        {
            cout << pilaAux->value << endl;
        }
    }
}

int main(int argc, char const *argv[])
{
    Nodo *pila = NULL;
    push(pila, 10);
    push(pila, 20);
    push(pila, 30);
    push(pila, 40);
    push(pila, 50);


    sacar(pila);
    sacar(pila);

    mostrarPila(pila);

    /*
        Nodo *anterior;
        anterior = pila->siguente;
        cout << anterior->value << endl;

        anterior = anterior->siguente;
        cout << anterior->value << endl;
    */
    return 0;
}
