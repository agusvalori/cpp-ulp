/*
Cree una estructura profesor, con nombre, cargo, materia, y carga horaria.
Declare 2 profesores con estos valores (fuera del main):
Ej: Profe. Cristina, Titular, Gestión de datos, 20hs. Ej2: Fabiana. Jefa TP, Matemática, 15hs.
 Luego en el main, muestre ambos profesores concatenados a sus materias.
Sugerencia getline para los char[].
*/

#include <iostream>
#include <cstring>
using namespace std;

struct PROFESOR
{
    string nombre;
    string cargo;
    string materia;
    int cargaHoraria;
} profesor[2] = {
    {"Cristina", "Titular", "Gestión de datos", 20},
    {"Fabiana", "Jefa TP", "Matemática", 15}};

int main(int argc, char const *argv[])
{
    
    cout << "Nombre: " << profesor[0].nombre +" - "+profesor[0].materia<< endl;
    cout << "Nombre: " << profesor[1].nombre +" - "+profesor[1].materia<< endl;

    return 0;
}
