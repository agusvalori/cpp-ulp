#include <iostream>
#include <math.h>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int base,altura;
	
	cout<<"Ingrese la base de un rectangulo en cm"<<endl;
	cin>>base;
	cout<<"Ingrese la altura de un rectangulo en cm"<<endl;
	cin>>altura;
	
	cout<<"El perimetro de un rectangulo es: "<<(base+altura)*2<<" cm"<<endl;
	cout<<"La superficie de un rectangulo es: "<<base*altura<<" cm2"<<endl;
	return 0;
}
