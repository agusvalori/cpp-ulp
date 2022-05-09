#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int notas[4];
	int sumatoria;
	
	cout<<"Ingrese la notas de los 4 estudiantes"<<endl;
	for(int i =0;i<4;i++){
		cin>>notas[i];
	}
	
	cout<<"Las notas ingresadas fueron"<<endl;
	for(int i =0;i<4;i++){
		sumatoria+=	notas[i];
		if(i<3){
			cout<<notas[i]<<", ";
		}
		else{
			cout<<notas[i]<<"."<<endl;
		}	
		
	}
	
	cout<<"El promedio de las 4 notas ingresadas es de: "<<sumatoria/4<<endl;

	
	return 0;
}
