#include <iostream>
using namespace std;

struct Nodo
{
    string values;
    Nodo *ptrIn;
    Nodo *ptrAnt;
    Nodo *ptrSte = NULL;
    int length;
};

void push(Nodo *&nodoOld, string value)
{
    Nodo *nodoNew = new Nodo();
    nodoNew->values = value;
    nodoNew->ptrAnt = nodoOld;
    nodoNew->length++;

    if (nodoOld)
    {
        nodoNew->ptrIn = nodoOld->ptrIn;
        nodoOld->ptrSte = nodoNew;
    }
    else
    {
        nodoNew->ptrIn = nodoNew;
    }

    nodoOld = nodoNew;
}

void mostrar(Nodo *fila)
{
    while (fila)
    {
        cout << fila->values << ". ";
        fila = fila->ptrAnt;
    }
    cout << endl;
}

void inicial(Nodo *fila)
{
    Nodo *nodoAux = fila->ptrIn;
    cout << "Nodo Inicial: " << nodoAux->values << endl;
}

void put(Nodo *&fila)
{
    Nodo *newNodoInicial = fila->ptrIn->ptrSte;
    if (fila)
    {        
        newNodoInicial->ptrAnt=nullptr;
        fila->ptrIn = newNodoInicial;
        
    }
    else
    {
        cout << "La fila esta vacia" << endl;
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
    put(fila);
    mostrar(fila);

    return 0;
}
