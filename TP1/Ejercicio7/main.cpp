#include <iostream>
#include <math.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float cat1, cat2, hipotenusa;
	cout<<"Ingrese el primer cateto  de un triangulo: "<<endl;
	cin>>cat1;
	cout<<"Ingrese el segundo cateto  de un triangulo: "<<endl;
	cin>>cat2;
	
	
	hipotenusa=sqrt(pow(cat1,2)+pow(cat2,2));
	
	cout<<"La hipotenusa del alguno vale: "<<hipotenusa;
	return 0;
}
