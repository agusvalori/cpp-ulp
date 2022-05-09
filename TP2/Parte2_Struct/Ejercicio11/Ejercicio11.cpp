/*
Defina una estructura Etapa, que indique el tiempo empleado por un ciclista en una etapa.
 Debe tener tres campos: horas, minutos y segundos. Escriba un programa que dado n etapas
 calcule el tiempo total empleado en correr todas las etapas.
*/

#include <iostream>
#include <string>
using namespace std;

const int dimensionEtapas = 2;

struct etapas
{
    int hora;
    int minuto;
    int segundo;
};

struct atletas
{
    string nombre;
    etapas etapa[dimensionEtapas];
    int tiempoTotal;
};

int main(int argc, char const *argv[])
{
    const int dimensionAtletas = 2;
    atletas ciclista[dimensionAtletas];

    for (int i = 0; i < dimensionAtletas; i++)
    {
        cout << "\nCargar ciclista numeroo: " << (i + 1) << " de " << dimensionAtletas << endl;
        cout << "Nombre: ";
        getline(cin, ciclista[i].nombre);
        ciclista[i].tiempoTotal = 0;
        for (int j = 0; j < dimensionEtapas; j++)
        {
            cout << "\nCargar etapa numero: " << (j + 1) << " de " << dimensionEtapas << endl;
            cout << "Hora: ";
            cin >> ciclista[i].etapa[j].hora;
            cout << "Minuto: ";
            cin >> ciclista[i].etapa[j].minuto;
            cout << "Segundo: ";
            cin >> ciclista[i].etapa[j].segundo;

            ciclista[i].tiempoTotal += ciclista[i].etapa[j].hora * 60 * 60;            
            ciclista[i].tiempoTotal += ciclista[i].etapa[j].minuto * 60;            
            ciclista[i].tiempoTotal += ciclista[i].etapa[j].segundo;            
            cin.get();
        }
    }

    for (int i = 0; i < dimensionAtletas; i++)
    {
        cout << "\natleta numero: " << (i + 1) << " de " << dimensionAtletas << endl;
        cout << "Nombre: " << ciclista[i].nombre << endl;
        cout << "Tiempo: " << ciclista[i].tiempoTotal / 60 / 60 << " Horas - ";
        cout <<ciclista[i].tiempoTotal / 60 % 60 << " Minutos - ";
        cout <<ciclista[i].tiempoTotal % 60 << " Segundos" << endl;
    }

    return 0;
}
