#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int temp[6], tempMax = -100, tempMin = 100, tempAbs = 0;
    int horas[6] = {0, 4, 8, 12, 16, 20};

    cout << "Ingrese las 6 temperaturas tomadas durante el dia: " << endl;

    for (int i = 0; i < 6; i++)
    {
        cout << "Ingrese la temperatura tomada a las: " << horas[i] << "hs" << endl;
        cin >> temp[i];
        tempAbs += temp[i];

        if (temp[i] > tempMax)
        {
            tempMax = temp[i];
        }
        if (temp[i] < tempMin)
        {
            tempMin = temp[i];
        }
    }

    cout << "Temperatura Maxima: " << tempMax << "C" << endl;
    cout << "Temperatura Minima: " << tempMin << "C" << endl;
    cout << "Temperatura Promedio: " << tempAbs / 6 << "C" << endl;
    cout << "Temperatura Media: " << (tempMax+tempMin) / 2 << "C" << endl;
}