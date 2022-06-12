#include <iostream>
using namespace std;
const int TAM = 10;
struct Nodo
{
    string value[TAM];
    int posInicial = 0;
    int posFinal = 0;
    int length = 0;
};

void push(Nodo &lista, string value)
{
    if (TAM > lista.length)
    {
        if (TAM > lista.posFinal)
        {
            lista.value[lista.posFinal] = value;
            lista.posFinal++;
            lista.length++;
        }
        else
        {
            lista.value[0] = value;
            lista.posFinal = 1;
            lista.length++;
        }
    }
    else
    {
        cout << "No se puede ingresar mas valores" << endl;
    }
}

void put(Nodo &lista)
{
    if (lista.posInicial != TAM)
    {
        lista.value[lista.posInicial] = "";
        lista.posInicial++;
        lista.length--;
    }
    else
    {
        lista.value[lista.posInicial] = "";
        lista.posInicial = 0;
        lista.length--;
    }
}

void mostrarLista(Nodo lista)
{
    if (lista.posInicial < lista.posFinal)
    {
        for (int i = lista.posInicial; i < lista.posFinal; i++)
        {
            cout << lista.value[i] << ". ";
        }
        cout << endl;
    }
    else
    {
        for (int i = lista.posInicial; i < TAM; i++)
        {
            cout << lista.value[i] << ". ";
        }
        for (int i = 0; i < lista.posFinal; i++)
        {
            cout << lista.value[i] << ". ";
        }
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{
    Nodo lista;

    push(lista, "Nodo 1");
    push(lista, "Nodo 2");
    push(lista, "Nodo 3");
    push(lista, "Nodo 4");
    push(lista, "Nodo 5");
    mostrarLista(lista);

    put(lista);
    mostrarLista(lista);
    put(lista);
    mostrarLista(lista);
    put(lista);
    mostrarLista(lista);

    push(lista, "Nodo 6");
    push(lista, "Nodo 7");
    push(lista, "Nodo 8");
    push(lista, "Nodo 9");
    push(lista, "Nodo 10");
    mostrarLista(lista);

    push(lista, "Nodo 11");
    mostrarLista(lista);

    put(lista);
    put(lista);
    put(lista);
    put(lista);
    put(lista);
    mostrarLista(lista);

    push(lista, "Nodo 12");
    push(lista, "Nodo 13");
    push(lista, "Nodo 14");
    push(lista, "Nodo 15");
    push(lista, "Nodo 16");
    push(lista, "Nodo 17");
    push(lista, "Nodo 18");
    push(lista, "Nodo 19");
    mostrarLista(lista);

    put(lista);
    mostrarLista(lista);

    push(lista, "Nodo 19");
    mostrarLista(lista);
    return 0;
}
