#include <iostream>
#include <string>

using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {	
	string nombre, apellido;
	
	//Formas de hacer un salto de linea
	//cout << "Ingrese un nombre \n";
	//cout << "Ingrese un nombre"<<endl;
	
	cout << "Ingrese su nombre"<<endl;
	cin>>nombre;
	cout << "Ingrese su apellido"<<endl;
	cin>>apellido;	
	cout<<"Su nombre completo es: "<<nombre<<" "<<apellido;
	return 0;
}
