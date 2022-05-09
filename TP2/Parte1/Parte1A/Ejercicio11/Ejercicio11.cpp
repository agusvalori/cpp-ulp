#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    long long number, result = 1, result2 = 1;
    cout << "Ingrese el valor final" << endl;
    cin >> number;

    for (int i = 1; i <= number; i++)
    {
        result = result + 2 * i;
    }

    cout << "La suma de factoriales es :" << result2 << endl;
    return 0;
}
