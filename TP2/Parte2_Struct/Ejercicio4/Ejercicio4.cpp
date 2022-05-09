/*
Hacer estructuras anidadas para registrar los datos de un Trabajador y de una Persona sin oficio.
Se guarda de las personas nombre, edad, peso, y fecha (estructura con dia, mes, anio).
Un Trabajador es una estructura que guarda una persona, y un salario.
Declare e inicialice un ejemplo de Trabajador y Persona.
*/
#include <iostream>
#include <string>
using namespace std;

struct fecha
{
    int dia;
    int mes;
    int anio;
};

struct persona{
    string nombre;
    int edad;
    float peso; 
    fecha fecha;
};

struct trabajador
{
    persona persona;
    float salario;
};

int main(int argc, char const *argv[])
{
    trabajador worker = {"Agustin",31,95,14,05,1991,100900};
    persona person = {"Agustin",31,95,14,05,1991};    
    return 0;
}
