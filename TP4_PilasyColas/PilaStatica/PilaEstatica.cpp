#include <iostream>

using namespace std;

const int DIMENSION = 10;

struct Nodo
{
    string vector[DIMENSION];
    int tope = 0;
};

bool pilaVacia(Nodo pila)
{
    return pila.tope == 0;
}

void push(Nodo &pila, string value)
{
    if (DIMENSION > pila.tope)
    {
        pila.vector[pila.tope] = value;
        pila.tope++;
    }
    else
    {
        cout << "La pila esta llena" << endl;
    }
}

void pop(Nodo &pila)
{
    if (!pilaVacia(pila))
    {
        pila.vector[pila.tope] = "";
        pila.tope--;
    }
    else
    {
        cout << "Nose pueden sacar mas elementos la pila esta vacia " << endl;
    }
}
void mostrar(Nodo pila)
{
    if (!pilaVacia(pila))
    {
        for (int i = 0; i < pila.tope; i++)
        {
            cout << pila.vector[i] << ". ";
        }
        cout << endl;
    }
}

void verTope(Nodo pila){
    cout<<"El tope de la pila tiene el valor: \n"<<pila.vector[pila.tope-1]<<endl;
}

int main(int argc, char const *argv[])
{
    struct Nodo pila;

    push(pila, "Nodo 1");
    push(pila, "Nodo 2");
    push(pila, "Nodo 3");
    push(pila, "Nodo 4");
    push(pila, "Nodo 5");
    push(pila, "Nodo 6");
    verTope(pila);

    mostrar(pila);
    pop(pila);
    mostrar(pila);
    pop(pila);
    mostrar(pila);
    pop(pila);
    mostrar(pila);
    pop(pila);
    mostrar(pila);
    pop(pila);
    mostrar(pila);
    pop(pila);
    mostrar(pila);
    pop(pila);
    return 0;
}
