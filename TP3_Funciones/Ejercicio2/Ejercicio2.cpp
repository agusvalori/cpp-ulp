/*
Declare struct Fecha, declare FA(fecha actual) y FC(fecha cumple), luego se compruebe en una
función si corresponde al día del cumpleaños. Mostrar un mensaje de felicitaciones de ser así.
*/

#include <iostream>
#include <string>

using namespace std;

struct Fecha
{
    int dia;
    int mes;
};

string esSuCumple(Fecha FA, Fecha FC)
{
    if (FA.mes == FC.mes && FA.dia == FC.dia){
        return "si";
    }
    else{
        return "no";
    }
}

int main(int argc, char const *argv[])
{
    Fecha fechaActual;
    Fecha fechaCumple;
    cout << "Ingrese dia actual: ";
    cin >> fechaActual.dia;
    cout << "Ingrese mes actual: ";
    cin >> fechaActual.mes;

    cout << "Ingrese dia de su cumpleaños: ";
    cin >> fechaCumple.dia;
    cout << "Ingrese mes de su cumpleaños: ";
    cin >> fechaCumple.mes;

    

    cout<<"Hoy es su cumple: "<<esSuCumple(fechaActual, fechaCumple);

        return 0;
}
