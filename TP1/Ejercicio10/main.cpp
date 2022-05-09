#include <iostream>
#include <ctime>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char **argv)
{
	int dia, mes, anio;
	char nombre[10];
	char dateAnio[20];	
	char dateDayOfYeardOld[20], dateDayOfYeardCurrent[20];
	int dayOfYeardOld, dayOfYeardCurrent;

	time_t currentDate = time(nullptr);
	time_t oldDate;
	strftime(dateDayOfYeardCurrent, 20, "%j", localtime(&currentDate));
	dayOfYeardCurrent=strtol(dateDayOfYeardCurrent,nullptr,10);

	strftime(dateAnio, 20, "%Y", localtime(&currentDate));
	dayOfYeardCurrent=strtol(dateDayOfYeardCurrent,nullptr,10);

	cout << "Ingrese su nombre: " << endl;
	cin >> nombre;

	cout << "Ingrese su dia de nacimiento: EJ: 02" << endl;
	cin >> dia;

	cout << "Ingrese su mes de nacimiento: EJ: 05 (para mayo) " << endl;
	cin >> mes;

	cout << "Ingrese su anio de nacimiento: EJ: 1991 " << endl;
	cin >> anio;


cout <<"#########################################################################################"<<endl<< endl;
	tm start{};
	start.tm_mday = dia;
	start.tm_mon = mes - 1;
	start.tm_year = anio - 1900;
	mktime(&start);

	oldDate = mktime(&start);
	strftime(dateDayOfYeardOld, 20, "%j", localtime(&oldDate));
	dayOfYeardOld = strtol(dateDayOfYeardOld,nullptr,10);
	

	if (dayOfYeardOld >= dayOfYeardCurrent)
	{
		int fecha = strtol(dateAnio, nullptr, 10); // pasamos char a int
		cout << nombre << " tiene: " << fecha - start.tm_year - 1900 << " años" << endl;
		cout << "Falta para su cumpleaños: " << dayOfYeardOld - dayOfYeardCurrent << " dias" << endl;
	}
	else
	{
		cout << "Usted ya cumplio años" << endl;
		cout<<"Hace "<<dayOfYeardCurrent-dayOfYeardOld << " dias" << endl;
		cout<<"Y faltan para su otro cumpleaños: "<<365-dayOfYeardCurrent+dayOfYeardOld << " dias" << endl;
	}

	return 0;
}
