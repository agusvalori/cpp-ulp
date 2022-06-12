#include <iostream>
using namespace std;

struct Nodo
{
    int value;
    Nodo *nodoAnterior = nullptr;
};

// b.	cargaPila, que permita introducir datos en la PilaA
void cargaPila(Nodo *&pila, int value)
{
    Nodo *pilaNew = new Nodo();

    pilaNew->value = value;
    pilaNew->nodoAnterior = pila;
    pila = pilaNew;
};

// c.	pasaPila, pasa todos los elementos de pilaA a PilaB
void pasaPila(Nodo *pilaA, Nodo *&pilaB)
{
    pilaB = pilaA;
    pilaA=pilaA->nodoAnterior;
}

// d.	contieneE, que recibe un entero “X” y determina si está en la pilaA, todos los elementos deben quedar nuevamente en A
bool contieneE(Nodo *pila, int X)
{
    bool result = false;
    if (pila)
    {
        Nodo *pilaAux = pila;
        while (pilaAux)
        {
            if (pilaAux->value == X)
            {
                result = true;
            }
            pilaAux = pilaAux->nodoAnterior;
        }
    }
    else
    {
        cout << "La pila esta vacia" << endl;
    }
    return result;
}

// e.	SeparaPI, que dada la pilaA con números enteros, coloca en pilaB los pares y en PilaC los impares
void separaPI(Nodo *&pilaA, Nodo *&pilaB, Nodo *&pilaC)
{

    if (pilaA)
    {
        Nodo *pilaAux = pilaA;
        while (pilaAux)
        {
            if ((pilaAux->value % 2) == 0)
            {
                cargaPila(pilaB, pilaAux->value);
            }
            else
            {
                cargaPila(pilaC, pilaAux->value);
            }
            pilaAux = pilaAux->nodoAnterior;
        }
    }
    else
    {
        cout << "La pila esta vacia" << endl;
    }
}

// f.	Invierte1, Dada una Pila A con números, una Pila B y una Pila C vacías,
// pasar los elementos de A a B de manera que queden en el mismo orden que estaban en A. (Se permite utilizar la pila C como auxiliar)
void Invierte1(Nodo *pilaA, Nodo *&pilaB, Nodo *pilaC)
{
    if (pilaA)
    {
        
        while (pilaA)
        {
            cargaPila(pilaC, pilaA->value);
            pilaA = pilaA->nodoAnterior;
        }

        

        while (pilaC)
        {
            cargaPila(pilaB, pilaC->value);
            pilaC = pilaC->nodoAnterior;
        }
    }
}

// g.	Invierte2, que dada una Pila A, una variable X y una Pila Vacía B.
// Pasar los elementos de pilaA a pilaB de manera tal que en pilaB queden en el mismo orden que estaban en pilaA
void Invierte2(Nodo *pilaA, Nodo *&pilaB)
{
    
}

// h.	Dada una pila A con números, buscar si existe en A un entero “X”, y reemplazarlo por un número “Y”

// Mostar pila
void mostrarPila(Nodo *pila)
{
    if (pila)
    {        
        while (pila)
        {
            cout << pila->value << ". ";
            pila = pila->nodoAnterior;
        }
        cout << endl;
    }
    else
    {
        cout << "La pila esta vacia" << endl;
    }
}

int main(int argc, char const *argv[])
{
    Nodo *pilaA = NULL, *pilaB = NULL, *pilaC = NULL;

    // Parte B: Introducir datos en una pila
    cargaPila(pilaA, 1);
    cargaPila(pilaA, 2);
    cargaPila(pilaA, 3);
    cargaPila(pilaA, 4);
    cargaPila(pilaA, 5);

    cout << "Pila A" << endl;
    mostrarPila(pilaA);

    // Parte C: Pasar los elementos de la pilaA a la pilaB
    cout<<"\nPasar pila"<<endl;
    pasaPila(pilaA, pilaB);
    cout << "Pila A" << endl;
    mostrarPila(pilaA);
    cout << "Pila B" << endl;
    mostrarPila(pilaB);

    // Parte D: contieneE buscamos un valor dentro de la pila
    cout << "COntiene " << 10 << ": " << contieneE(pilaA, 10) << endl;
    cout << "COntiene " << 5 << ": " << contieneE(pilaA, 5) << endl;
    cout << "COntiene " << 2 << ": " << contieneE(pilaA, 2) << endl;
    cout << "COntiene " << 0 << ": " << contieneE(pilaA, 0) << endl;

    // Parte E: Separar pares de impares en pilaB: los pares y pilaC en los impares
    pilaB = NULL;
    separaPI(pilaA, pilaB, pilaC);
    cout << "Pila B: PARES" << endl;
    mostrarPila(pilaB);
    cout << "Pila C: IMPARES" << endl;
    mostrarPila(pilaC);

    // Parte F: pasamos los elementos de A a B de manera que queden en el mismo orden 
    cout<<"\nCopiar pilaA a pilaB"<<endl;
    pilaB = NULL;
    pilaC = NULL;
    Invierte1(pilaA,pilaB,pilaC);
    mostrarPila(pilaA);    
    mostrarPila(pilaB);

    // Parte F: pasamos los elementos de A a B de manera que queden en el mismo orden  con el uso de una variable
    cout<<"\nCopiar pilaA a pilaB version2"<<endl;
    pilaB = NULL;
    Invierte2(pilaA,pilaB);
    mostrarPila(pilaA);    
    mostrarPila(pilaB);


    

    return 0;
}
