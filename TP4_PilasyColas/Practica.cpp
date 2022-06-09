#include <iostream>
using namespace std;

struct Nodo
{
    string value;
};

int main(int argc, char const *argv[])
{

    Nodo lista[5];
    lista[0].value = "Nodo 0";
    lista[1].value = "Nodo 1";
    lista[2].value = "Nodo 2";

    cout>>lista[0].value>>endl;

    return 0;
}
