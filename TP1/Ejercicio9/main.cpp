#include <iostream>
#include <string.h>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	string nombre[2];
	int tiempo[2];
	
	for(int i=0;i<2;i++){
		cout<<"Ingrese los datos del nadador Numero: "<<i+1<<endl;
		cout<<"Ingrese el nombre"<<endl;
		cin>>nombre[i];
		cout<<"Ingrese el tiempo"<<endl;
		cin>>tiempo[i];
		
		system("cls");
	cin.get();
	}
	
	
	
	if(tiempo[0]==tiempo[1]){
		cout<<"Los dos nadadores llegaron al mismo tiempo"<<endl;
	}else{
		if(tiempo[0]<tiempo[1]){
			cout<<"llego primero el nadador: "<<nombre[0];
		}
		else{
			cout<<"llego primero el nadador: "<<nombre[0];
		}
		
	}
	
	cin.get();
	system("cls");
	return 0;
}
