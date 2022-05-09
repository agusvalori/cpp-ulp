/*
Defina una estructura que permita cargar el día y las temperaturas máxima y mínima de ese día.
 Luego defina un arreglo en el que cargara todos estos datos para un mes.
 Realice un programa que cargue la estructura antes definida y calcule el promedio de
  temperaturas máximas y el promedio de temperaturas mínimas del mes.
*/

#include <iostream>
using namespace std;

struct fechas
{
    int dia;
    int mes;
    int anio;
};

struct tempDiarias
{
    fechas fecha;
    double tempMin;
    double tempMax;
};

struct tempMensuales
{
    tempDiarias tempDiaria[3];
    tempDiarias tempMinMensual;
    tempDiarias tempMaxMensual;
};

int main(int argc, char const *argv[])
{
    const int dimension = 1;
    tempMensuales tempMensual[1];

    for (int i = 0; i < dimension; i++)
    {
        cout << "Si el mes tiene menos de 31 dias dejar en cero los dias sobrantes" << endl;
        for (int j = 0; j < 4; j++)
        {
            cout << "\nCargar temperatura: " << (j + 1) << " de " << 31 << endl;
            cout << "Dia: ";
            cin >> tempMensual[i].tempDiaria[j].fecha.dia;
            cout << "Mes: ";
            cin >> tempMensual[i].tempDiaria[j].fecha.mes;
            cout << "Año: ";
            cin >> tempMensual[i].tempDiaria[j].fecha.anio;
            cout << "Temperatura minima diaria: ";
            cin >> tempMensual[i].tempDiaria[j].tempMin;
            cout << "Temperatura maxima diaria: ";
            cin >> tempMensual[i].tempDiaria[j].tempMax;

            if (i == 0)
            {
                tempMensual[i].tempMaxMensual.tempMax = tempMensual[i].tempDiaria[j].tempMax;
                tempMensual[i].tempMinMensual.tempMin = tempMensual[i].tempDiaria[j].tempMin;
            }
            else
            {
                cout<<"tempMensual[i].tempMaxMensual.tempMax: "<<tempMensual[i].tempMaxMensual.tempMax<<endl;
                cout<<"tempMensual[i].tempDiaria[j].tempMax: "<<tempMensual[i].tempDiaria[j].tempMax<<endl;
                
                if (tempMensual[i].tempMaxMensual.tempMax < tempMensual[i].tempDiaria[j].tempMax)
                {
                    tempMensual[i].tempMaxMensual = tempMensual[i].tempDiaria[j];
                }

                if (tempMensual[i].tempMinMensual.tempMin > tempMensual[i].tempDiaria[j].tempMin)
                {
                    tempMensual[i].tempMinMensual = tempMensual[i].tempDiaria[j];
                }
            }
        }
    }

    for (int i = 0; i < dimension; i++)
    {
        cout << "\nTemperatura maxima mensual: " << tempMensual[i].tempMaxMensual.tempMax;
        cout << " fue en la fecha: " << tempMensual[i].tempMaxMensual.fecha.dia << "/";
        cout << tempMensual[i].tempMaxMensual.fecha.mes << "/";
        cout << tempMensual[i].tempMaxMensual.fecha.anio << endl;
        cout << "Temperatura minima mensual: " << tempMensual[i].tempMinMensual.tempMin;
        cout << " fue en la fecha: " << tempMensual[i].tempMinMensual.fecha.dia << "/";
        cout << tempMensual[i].tempMinMensual.fecha.mes << "/";
        cout << tempMensual[i].tempMinMensual.fecha.anio << endl;
    }

    return 0;
}
