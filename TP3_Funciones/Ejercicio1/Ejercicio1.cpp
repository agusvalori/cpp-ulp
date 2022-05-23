/*
Hacer una función que reciba un arreglo de estructuras que registra los datos de 5 personas con: 
Nombre, edad, sexo y teléfono. La función muestra los datos de los mayores a 30 años.
*/

#include <iostream>
#include <string.h>
using namespace std;


struct Personas
{
    string nombre;
    int edad;
    string sexo;
    string telefono;

};

void mostrarMayores(Personas per){
    if(per.edad>=30){
        cout<<"Nombre: "<<per.nombre<<endl;
        cout<<"Edad: "<<per.edad<<endl;
        cout<<"Sexo: "<<per.sexo<<endl;
        cout<<"Telefono: "<<per.telefono<<endl;
    }

}

int main(int argc, char const *argv[])
{
    Personas personas;
    personas.nombre ="Agustin";
    personas.edad =31;
    personas.sexo ="Masculino";
    personas.telefono ="02656112233";
    
    mostrarMayores(personas);

    personas.nombre ="Dalina";
    personas.edad =25;
    personas.sexo ="Femenino";
    personas.telefono ="02657112233";
    
    mostrarMayores(personas);
    return 0;
}

