/*
crear una lista dinamica con las funciones para mostrar, agregar elementos al final y buscar elementos;
*/

#include <iostream>
using namespace std;

struct Lista
{
    string value;
    Lista *sigNodo;
};
void agregarElemento(Lista *&lista, string value)
{
    Lista * listaAux = new Lista();
    listaAux->value=value;
    listaAux->sigNodo=lista;
    lista = listaAux;
};


void mostrarElementos(Lista *&lista){
    Lista * listaAux = lista;
    
    while (listaAux->sigNodo!=NULL)
    {
        cout<<"Valor: "<<listaAux->value<<endl;
        listaAux = listaAux->sigNodo;
        if(listaAux->sigNodo==NULL){
            cout<<"Valor: "<<listaAux->value<<endl;
        }
    }
    

};
void buscarElemento(){};

int main(int argc, char const *argv[])
{
    Lista * list =NULL;
    agregarElemento(list,"palabra 10");
    agregarElemento(list,"palabra 100");    
    agregarElemento(list,"palabra 1000");

    mostrarElementos(list);

    return 0;
}

/*
      stringPtr: Muestra la ubicacion en memoria del objeto apuntado
      &stringPtr: Muesta la ubicacion en memoria del puntero
      *stringPtr: Muestrae l valor del objeto apuntado
    */