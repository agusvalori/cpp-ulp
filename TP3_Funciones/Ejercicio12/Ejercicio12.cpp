/*
Escriba las siguientes funciones:
A. Tasa de natalidad: cantidad de nacimientos en proporción con el total de la población,
recibe estos datos como parámetros y devuelve la tasa.
B. Tasa de mortalidad: porcentaje de fallecimientos en relación al total de la población, recibe
estos datos como parámetros y devuelve la tasa.
C. Población en crecimiento: devuelve true, si la tasa de natalidad es mayor a la de mortalidad
D. Densidad Poblacional: habitantes por km 2
Realice un programa que permita ingresar, el nombre de un país, su población, su superficie, y
luego de la opción de calcular: Densidad poblacional, Tasa de natalidad, Tasa de Mortalidad y
Evolución demográfica, mientras el usuario lo desee
*/

#include <iostream>
using namespace std;
struct Pais
{
    string nombre;
    long poblacion;
    double superficie;
    int cantidadDeNacimiento;
    int cantidadDeMuertes;
};

double tasaNatalidad(Pais pais)
{
    return pais.cantidadDeNacimiento * pais.poblacion * 1000;
}
double tasaMortalidad(Pais pais)
{
    return pais.cantidadDeMuertes * pais.poblacion * 1000;
}
bool crecimientoPoblacional(Pais pais)
{
    return pais.cantidadDeNacimiento > pais.cantidadDeMuertes;
}
double densidadPoblacional(Pais pais)
{
    return pais.poblacion / pais.superficie;
}

void cargarPais(Pais pais)
{
    cout << "Ingrese El nombre del pais: " << endl;
    cin >> pais.nombre;
    cout << "Ingrese la poblacion del pais: " << endl;
    cin >> pais.poblacion;
    cout << "Ingrese la superficie del pais: " << endl;
    cin >> pais.superficie;
    cout << "Ingrese el numero de nacimiento en un año: " << endl;
    cin >> pais.cantidadDeNacimiento;
    cout << "Ingrese el numero de mortalidad en un año: " << endl;
    cin >> pais.cantidadDeMuertes;
}

void mostrarPais(Pais pais){
    cout << "Nombre: "<<pais.nombre<<endl;
    cout << "Poblacion: "<< pais.poblacion<<endl;    
    cout << "Superficie: "<<pais.superficie<<endl;
    cout << "Tasa de natalidad: "<<tasaNatalidad(pais)<<endl;
    cout << "Tasa de mortandad: "<<tasaMortalidad(pais)<<endl;
    cout << "Hay crecimiento poblacional: "<<crecimientoPoblacional(pais)<<endl;
    cout << "Densidad poblacional: "<<crecimientoPoblacional(pais)<<endl;
}

int main(int argc, char const *argv[])
{

    Pais pais;
    cargarPais(pais);
    mostrarPais(pais);

    return 0;
}