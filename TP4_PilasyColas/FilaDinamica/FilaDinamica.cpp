#include <iostream>
using namespace std;

struct Nodo
{
    string value;
    Nodo *nodoAnt;
    Nodo *nodoIn;
};

void push(Nodo *&nodoOld, string value)
{
    Nodo *nodoNew = new Nodo();
    nodoNew->value = value;

    if (nodoOld)
    {
        nodoNew->nodoIn = nodoOld->nodoIn;
        nodoOld->nodoAnt = nodoNew;
    }
    else
    {
        nodoNew->nodoIn = nodoNew;
    }

    nodoOld = nodoNew;
}

void put(Nodo *&nodo)
{
    if (nodo)
    {
        if (nodo != nodo->nodoIn)
        {
            Nodo *nodoInicial = nodo->nodoIn;
            nodo->nodoIn = nodoInicial->nodoAnt;
            delete nodoInicial;
        }
        else
        {
            nodo = NULL;
        }
    }
    else
    {
        cout << "La fila esta vacia" << endl;
    }
}

void mostrar(Nodo *nodo)
{
    if (nodo)
    {
        Nodo *nodoInicial = nodo->nodoIn;
        while (nodoInicial)
        {
            cout << nodoInicial->value << ". ";
            nodoInicial = nodoInicial->nodoAnt;
        }
        cout << endl;
    }
}

int main(int argc, char const *argv[])
{
    Nodo *fila = NULL;
    push(fila, "Nodo 1");
    push(fila, "Nodo 2");
    push(fila, "Nodo 3");
    push(fila, "Nodo 4");
    push(fila, "Nodo 5");
    mostrar(fila);
    put(fila); //delet nodo 1
    mostrar(fila);
    push(fila, "Nodo 6");
    mostrar(fila);
    put(fila);  //delet nodo 2
    put(fila);  //delet nodo 3
    put(fila);  //delet nodo 4
    put(fila);  //delet nodo 5
    put(fila);  //delet nodo 6
    put(fila);  //delet no exisste
    put(fila);  //delet no exisste
    mostrar(fila);

    push(fila, "Nodo 7");
    push(fila, "Nodo 8");
    push(fila, "Nodo 9");
    mostrar(fila);
    return 0;
}
