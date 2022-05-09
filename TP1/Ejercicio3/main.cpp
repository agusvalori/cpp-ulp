#include <iostream>
#include <string>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int edad;
	string sexo;
	float altura;
	
	cout<<"Ingresar edad: \n";
	cin>>edad;
	
	cout<<"Ingresar sexo: \n";
	cin>>sexo;
	
	cout<<"Ingresar altura: \n";
	cin>>altura;
	
	cout<<"Edad: "<<edad<<endl;
	cout<<"Sexo: "<<sexo<<endl;
	cout<<"Altura: "<<altura<<endl;
	return 0;
}
