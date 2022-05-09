#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */

    int a, b, c, d, e, f;
    int selectOpt;
    do
    {
        a = b = c = d = e = f = 0;
        cout << "Cual de las siguientes funciones quiere resolver" << endl;
        cout << "1. f(a,b)= (a/b) + 1" << endl;
        cout << "2. f(a,b)= (a+b)/(c+d)" << endl;
        cout << "3. f(a,b)= (a+(b/c))/(d+(e/f))" << endl;
        cout << "4. f(a,b)= a + (b/(c-d))" << endl;
        cout << "0. SALIR" << endl;
        cin >> selectOpt;

        switch (selectOpt)
        {
        case 1:
            cout << "a: ";
            cin >> a;
            cout << "b: ";
            cin >> b;
            cout << "f(a,b)= " <<setprecision(2)<< ((a / b) + 1) << endl;
            break;
        case 2:
            cout << "a: ";
            cin >> a;
            cout << "b: ";
            cin >> b;
            cout << "c: ";
            cin >> c;
            cout << "d: ";
            cin >> d;
            cout << "f(a,b)= "<<setprecision(2) << ((a + b) / (c + d)) << endl;
            break;
        case 3:
            cout << "a: ";
            cin >> a;
            cout << "b: ";
            cin >> b;
            cout << "c: ";
            cin >> c;
            cout << "d: ";
            cin >> d;
            cout << "e: ";
            cin >> e;
            cout << "f: ";
            cin >> f;
            cout << "f(a,b)= " <<setprecision(2)<< ((a + (b / c)) / (d + (e / f))) << endl;
            break;
        case 4:
            cout << "a: ";
            cin >> a;
            cout << "b: ";
            cin >> b;
            cout << "c: ";
            cin >> c;
            cout << "d: ";
            cin >> d;
            cout << "f(a,b)= " <<setprecision(2)<< (a + (b / (c - d))) << endl;
            break;
        case 0:
            cout << "Muchas Gracias lo esperamos pronto" << endl;
            break;

        default:
            break;
        }
    } while (selectOpt != 0);

    return 0;
}
