/*
Escribir un programa que genere aleatoriamente 100 pares de números,
los números deberán almacenarse en un arreglo de struct con el formato (x,y),
luego el usuario debe ingresar un número y el programa determinar entre los datos almacenados
 cuales tienen pares cuyas ambas componentes sean mayores al número ingresado.
  Con los pares mayores calcular la sumatoria de cada componente (x e y) y mostrar el mensaje:

LA SUMATORIA DE LOS PARES MAYORES QUE número ES:
sum(x) =  sumatoriaX y sum(y) = sumatoriaY

*/

#include <iostream>
#include <ctype.h>

using namespace std;

struct paresDeNumeros
{
    int x;
    int y;
    bool esMayor = false;
};

int main(int argc, char const *argv[])
{
    paresDeNumeros parNumeros[100], sumatoria;
    sumatoria.x = 0;
    sumatoria.y = 0;

    char texto[2], option;
    int number;

    for (int i = 0; i < 100; i++)
    {
        parNumeros[i].x = rand() % 100;
        parNumeros[i].y = rand() % 100;
    }

    do
    {
        // ################ MENU ################
        cout << "\nQue tarea desea realizar" << endl;
        cout << "1. Mostrar valores cargados X:Y" << endl;
        cout << "2. Buscar valores mayores en X:Y" << endl;
        cout << "0. SALIR" << endl;
        cin >> option;

        switch (option)
        {
        case '1': // ################ MOSTRAR ################

            cout << "\n######## VALORES X:Y ########" << endl;
            for (int i = 0; i < 10; i++)
            {
                for (int j = 0; j < 10; j++)
                {
                    if (parNumeros[i + (j * 10)].x < 10)
                    {
                        // cout << " " << parNumeros[i + (j * 10)].x << " ";
                        if (parNumeros[i + (j * 10)].y < 10)
                        {
                            cout << " " << parNumeros[i + (j * 10)].x << ":" << parNumeros[i + (j * 10)].y << "  ";
                        }
                        else
                        {
                            cout << " " << parNumeros[i + (j * 10)].x << ":" << parNumeros[i + (j * 10)].y << " ";
                        }
                    }
                    else
                    {
                        if (parNumeros[i + (j * 10)].y < 10)
                        {
                            cout << parNumeros[i + (j * 10)].x << ":" << parNumeros[i + (j * 10)].y << "  ";
                        }
                        else
                        {
                            cout << parNumeros[i + (j * 10)].x << ":" << parNumeros[i + (j * 10)].y << " ";
                        }
                    }
                }
                cout << endl;
            }

            break;

        case '2': // ################ BUSCAR ################

            cout << "Ingrese el valor a buscar mayores" << endl;
            cin >> texto;
            if (isdigit(texto[0]))
            {
                int contador = 1;
                number = atoi(texto);
                cout << "\nLOS PARES MAYORES QUE " << number << " SON: " << endl;
                for (int i = 0; i < 100; i++)
                {
                    if (parNumeros[i].x > number && parNumeros[i].y > number)
                    {
                        if (contador == 10)
                        {
                            cout << parNumeros[i].x << ":" << parNumeros[i].y << " " << endl;
                            contador = 1;
                        }
                        else
                        {
                            cout << parNumeros[i].x << ":" << parNumeros[i].y << " ";
                            parNumeros[i].esMayor = true;
                            contador++;
                        }
                    }
                }
                
                cout << "\n \nLA SUMATORIA DE LOS PARES MAYORES QUE " << number << " ES:\n"
                     << endl;
                for (int i = 0; i < 100; i++)
                {
                    if (parNumeros[i].esMayor)
                    {
                        sumatoria.x += parNumeros[i].x;
                        sumatoria.y += parNumeros[i].y;
                    }
                }

                cout<<"Sumatoria x: "<<sumatoria.x<<endl;
                cout<<"Sumatoria y: "<<sumatoria.y<<endl;
            }
            else
            {
                cout << "Valor incorrecto" << endl;
            }
            cout << endl;
            break;

        default:
            break;
        }
    } while (option != '0');

    return 0;
}
