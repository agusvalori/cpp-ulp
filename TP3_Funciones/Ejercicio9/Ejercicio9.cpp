/*
 Realice un programa que mientras el usuario lo desee pueda realizar estas operaciones,
llamando a la función correspondiente, según las que siguen: A. Calcula la multiplicación por
sumas sucesivas. Ej. 2 x 4 = 2 + 2 + 2 + 2 (suma 4 veces el numero 2 generalizando nxm =n+n+…(m
veces). B. Calcula la división por restas sucesivas Ej. 10/2=5 (5 indica la cantidad de veces que
pude restar 2 al 10. Y C. Calcule la potencia por multiplicaciones sucesivas Ej 2 3= 2*2*2
(multiplica 2 por si mismo 3 veces)

*/

#include <iostream>
using namespace std;

void multiplicacion()
{
    int num1, num2, result = 0;
    cout << "Ingrese el primer valor: ";
    cin >> num1;
    cout << "Ingrese el segundo valor: ";
    cin >> num2;

    for (int i = 0; i < num2 - 1; i++)
    {
        result += num1;
    }

    cout << "\nEl resultado de: " << num1 << "x" << num2 << "=" << result << endl;
}

void division()
{
    int num1, num2, result, contador = 0, exit = 1;
    cout << "Ingrese el primer valor: ";
    cin >> num1;
    cout << "Ingrese el segundo valor: ";
    cin >> num2;
    result=num1;
    do
    {
        if ((result - num2) >= 0)
        {
            result -= num2;
            contador++;
        }
        else
        {
            exit = 0;
        }        
    } while (exit != 0);

    cout << "\nEl resultado de: " << num1 << "/" << num2 << "=" << contador << endl;
}

void potencia()
{
    int base, exponente, result = 1;
    cout << "Ingrese la base: ";
    cin >> base;
    cout << "Ingrese el exponente: ";
    cin >> exponente;

    for (int i = 0; i < exponente; i++)
    {
        result *= base;
    }

    cout << "\nEl resultado de: " << base << "^" << exponente << "=" << result << endl;
}

void menu()
{
    char selectOption;
    do
    {
        cout << "Selecciones una de las siguientes opciones" << endl;
        cout << "A. Calcula la multiplicación por sumas sucesivas. Ej. 2 x 4 = 2 + 2 + 2 + 2" << endl;
        cout << "B. Calcula la división por restas sucesivas Ej. 10/2=5" << endl;
        cout << "C. Calcule la potencia por multiplicaciones sucesivas Ej 2 3= 2*2*2 " << endl;
        cout << "S. Salir" << endl;
        cin >> selectOption;
        switch (selectOption)
        {
        case 'A':
            multiplicacion();
            break;
        case 'B':
            division();
            break;
        case 'C':
            potencia();
            break;
        case 'S':
            /* code */
            break;

        default:
            break;
        }
    } while (selectOption != 'S');
}

int main(int argc, char const *argv[])
{

    menu();
    return 0;
}