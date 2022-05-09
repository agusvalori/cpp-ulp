/*
En una clase de 5 alumnos se han realizado tres exámenes y se requiere determinar el número de: a)
Alumnos que aprobaron todos los exámenes. b) Alumnos que aprobaron al menos un examen. c) Alumnos que
aprobaron únicamente el último examen.
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int nota, alumnosAprov = 0, alumnosAprovUnExamen = 0, alumnosAprovUltExamen = 0;
    int aprueba = 8;
    bool notasAuxiliar, notasAuxiliar2;

    for (int i = 0; i < 5; i++)
    {
        notasAuxiliar2=false;
        notasAuxiliar=true;
        cout << "Ingrese las notas del estudiante Numero: " << i + 1 << endl;
        for (int j = 0; j < 3; j++)
        {
            cout << "Ingrese la nota Numero: " << j + 1 << endl;
            cin >> nota;
            if (nota < aprueba)
            {
                notasAuxiliar = false;
            }
            if (nota >= aprueba)
            {
                notasAuxiliar2 = true;
            }
            if (j == 2 && nota >= aprueba)
            {
                alumnosAprovUltExamen++;
            }
        }
        if (notasAuxiliar)
        {
            alumnosAprov++;            
        }
        if (notasAuxiliar2)
        {
            alumnosAprovUnExamen++;
        }
    }

    cout << "Alumnos aprovaron los 3 examenes: " << alumnosAprov << endl;
    cout << "Alumnos aprobaron 1 solo examen: " << alumnosAprovUnExamen << endl;
    cout << "Alumnos aprobaron el ultomo examen: " << alumnosAprovUltExamen << endl;

    return 0;
}
