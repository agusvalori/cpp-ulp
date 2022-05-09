/*
En un comercio trabajan 20 vendedores, distribuidos en 4 secciones
 (bazar, accesorios, indumentaria, calzados). Se pide que se almacene la información de sus empleados.
• Defina la estructura principal empleado se dese saber: nombre, legajo, sector,
ventas diarias de cada día de la semana, ventas totales de esa semana (calculable).
El comercio, tiene una política de premios semanales por ventas; para esto,
 al fin de cada semana determina cuales son los vendedores con mayores ventas por sector,
  y se guarda en Premiados.
• Defina la estructura secundaria Premiados para almacenar por cada sector,
 legajo del empleado de mayor venta semanal y total vendido.
Realice un programa que permita:
a. Cargar los datos de los empleados
b. Calcular el total de ventas semanales por vendedor.
c. Determinar por cada sector, el vendedor con mayores ventas,
esta información debe ser almacenada en la segunda estructura.
d. Mostrar los nombres de los empleados premiados en una semana.
e. Listar todos los empleados y el total vendido.
Analice detalladamente el ejercicio antes de abordar una solución.
*/
#include <iostream>
#include <string>
using namespace std;

// Secciones -> bazar, accesorios, indumentaria, calzados
enum secciones
{
    bazar,
    accesorios,
    indumentaria,
    calzados
};

// Empleados -> nombre, legajo, sector, ventasDiarias, ventasSemanales
struct empleados
{
    string nombre;
    string legajo;
    enum secciones sector;
    double ventasDiarias[7] = {0, 0, 0, 0, 0, 0, 0};
    double ventasSemanales = 0;
};

struct premiados
{
    empleados bazar;
    empleados accesorios;
    empleados indumentaria;
    empleados calzados;
};

// Pemiados -> bazar, accesorios, indumentaria, calzados
// Empleados -> nombre, legajo, sector, ventasDiarias, ventasSemanales

int main(int argc, char const *argv[])
{
    const int dimension = 20;
    empleados emp[dimension];
    premiados premiado;

    string dia[] = {"lunes", "martes", "miercoles", "jueves", "viernes", "sabado", "domingo"};

    for (int i = 0; i < dimension; i++)
    {
        int aux;
        cout << "\nCargando empleado numero: " << (i + 1) << endl;
        cout << "Nombre: ";
        getline(cin, emp[i].nombre);

        cout << "Legajo: ";
        getline(cin, emp[i].legajo);

        do
        {
            cout << "Seleccione el numero del sector: " << endl;
            cout << "1. bazar, 2. accesorios, 3. indumentaria, 4. calzados: ";
            cin >> aux;
            switch (aux - 1)
            {
            case 0:
                emp[i].sector = bazar;
                break;
            case 1:
                emp[i].sector = accesorios;
                break;
            case 2:
                emp[i].sector = indumentaria;
                break;
            case 3:
                emp[i].sector = calzados;
                break;

            default:
                cout << "Valor incorrecto" << endl;
                aux = 10;
                break;
            }
        } while (aux == 10);

        for (int j = 0; j < 7; j++)
        {
            cout << "Ingrese venta del dia " + dia[j] << ": ";
            cin >> emp[i].ventasDiarias[j];
            emp[i].ventasSemanales += emp[i].ventasDiarias[j];
        }
        cin.get();

        if (i == 0)
        {
            switch (emp[i].sector)
            {
            case bazar:
                premiado.bazar = emp[i];
                break;
            case accesorios:
                premiado.accesorios = emp[i];
                break;
            case indumentaria:
                premiado.indumentaria = emp[i];
                break;
            case calzados:
                premiado.calzados = emp[i];
                break;

            default:
                break;
            }
        }
        else
        {
            switch (emp[i].sector)
            {
            case bazar:
                if (emp[i].ventasSemanales > premiado.bazar.ventasSemanales)
                {
                    premiado.bazar = emp[i];
                }

                break;
            case accesorios:
                if (emp[i].ventasSemanales > premiado.accesorios.ventasSemanales)
                {
                    premiado.accesorios = emp[i];
                }

                break;
            case indumentaria:
                if (emp[i].ventasSemanales > premiado.indumentaria.ventasSemanales)
                {
                    premiado.indumentaria = emp[i];
                }

                break;
            case calzados:
                if (emp[i].ventasSemanales > premiado.calzados.ventasSemanales)
                {
                    premiado.calzados = emp[i];
                }

                break;

            default:
                break;
            }
        }
    }

    cout << "\nEmpleados premiados" << endl;
    cout << "bazar: " << premiado.bazar.nombre << " total vendido: " << premiado.bazar.ventasSemanales << endl;
    cout << "accesorios: " << premiado.accesorios.nombre << " total vendido: " << premiado.accesorios.ventasSemanales << endl;
    cout << "indumentaria: " << premiado.indumentaria.nombre << " total vendido: " << premiado.indumentaria.ventasSemanales << endl;
    cout << "calzados: " << premiado.calzados.nombre << " total vendido: " << premiado.calzados.ventasSemanales << endl;

    for (int i = 0; i < dimension; i++)
    {
        cout << "\nNombre: " << emp[i].nombre << "Venta Semanal: " << emp[i].ventasSemanales << endl;
    }

    return 0;
}
