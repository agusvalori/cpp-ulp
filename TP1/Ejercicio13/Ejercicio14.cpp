#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int hs, min,seg;

    cout << "Ingrese una hora" << endl;
    cin >> hs;
    cout << "Ingrese los minutos" << endl;
    cin >> min;

    cout << "Ingrese los segundos" << endl;
    cin >> seg;

    cout << "El equivalente en segundo es: " << seg+min*60+hs*60*60 << endl;
    return 0;
}