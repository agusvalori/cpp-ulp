#include <iostream>
using namespace std;

struct Nodo
{
    string values;
    Nodo *nodoAnterior = nullptr;
};

void push(Nodo *&oldNode, string value)
{
    Nodo *newNode = new Nodo();

    newNode->values = value;

    newNode->nodoAnterior = oldNode;

    oldNode = newNode;
}

void show(Nodo *nodo)
{
    if (nodo)
    {
        Nodo *nodoAux = nodo;

        while (nodoAux)
        {
            cout << nodoAux->values << endl;
            nodoAux = nodoAux->nodoAnterior;
        }
    }
    else
    {

        cout << "La lista se encuentra vacia" << endl;
    }
}

Nodo *delet(Nodo *nodo)
{
    if (nodo)
    {
        Nodo *nodoAux = nodo->nodoAnterior;
        delete nodo;
        return nodoAux;
    } else
    {

        cout << "La lista se encuentra vacia" << endl;
    }
}

void menu()
{
    Nodo *nodoInicial = NULL;
    string value;
    char selectOption;

    do
    {
        cout << "Seleciones una de las opciones siguentes: " << endl;
        cout << "1. Ingresar elemento a la pila" << endl;
        cout << "2. Sacar elemento de la pila" << endl;
        cout << "3. Mostrar elementos de la pila" << endl;
        cout << "S. Salir" << endl;
        cin >> selectOption;
        switch (selectOption)
        {
        case '1':
            cout << "Ingrese el valor del elemento" << endl;
            cin >> value;
            push(nodoInicial, value);
            break;
        case '2':
            nodoInicial = delet(nodoInicial);
            break;
        case '3':
            show(nodoInicial);
            break;
        case 's' || 'S':
            cout << "Gracias por usar nuestro sistema" << endl;
            break;

        default:
            break;
        }
    } while (selectOption != 's' || selectOption != 'S');
}
int main(int argc, char const *argv[])
{
    menu();
    return 0;
}
