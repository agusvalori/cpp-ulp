/*
Hacer un arreglo de estructura llamada atleta para N atletas que contenga los siguientes
campos: nombre, país, numero_medallas. En el main pedir que digite el número de atletas,
y a medida que los carga, devuelva los datos (Nombre, país)
del atleta que ha ganado el mayor ‘número de medallas’.
*/

#include <iostream>
#include <string>
using namespace std;

struct atletas
{
    string nombre;
    string pais;
    int numMedallas;
};

int main(int argc, char const *argv[])
{
    const int dimension = 5;
    atletas atleta[dimension];

    atletas atletaMasMedalla;

    for (int i = 0; i < dimension; i++)
    {
        cout << "\nCargar atleta numero: " << (i + 1) << " de " << dimension << endl;
        cout << "Nombre: ";
        getline(cin, atleta[i].nombre);
        cout << "Pais: ";
        getline(cin, atleta[i].pais);
        cout << "Cantidad de medallas recibidas: ";
        cin >> atleta[i].numMedallas;

        if (i == 0)
        {
            atletaMasMedalla = atleta[i];
        }
        else
        {
            if (atleta[i].numMedallas > atletaMasMedalla.numMedallas)
            {
                atletaMasMedalla = atleta[i];
            }
        }
        cin.get();
    }

    for (int i = 0; i < dimension; i++)
    {
        cout << "\natleta numero: " << (i + 1) << " de " << dimension << endl;
        cout << "Nombre: " << atleta[i].nombre << endl;
        cout << "Pais: " << atleta[i].pais << endl;
        cout << "Cantidad de medallas recibidas: " << atleta[i].numMedallas << endl;
    }

    cout << "\nEl atleta con mas medalla es: " << endl;
    cout << "Nombre: " << atletaMasMedalla.nombre << endl;
    cout << "Pais: " << atletaMasMedalla.pais << endl;
    cout << "Cantidad de medallas recibidas: " << atletaMasMedalla.numMedallas << endl;

    return 0;
}
