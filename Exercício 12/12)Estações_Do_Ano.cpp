#include <iostream>
#include <locale.h>

using namespace std;

void Estacao_Ano(int Dia, int Mes);

int Dia, Mes;
int main () {
	setlocale (LC_ALL,"Portuguese");
	
	do{
		system("cls");
		cout << " Digite o dia do ano: ";
		cin >> Dia;
		cout << endl << " Digite o m�s do ano: ";
		cin >> Mes;
		cout << endl;
		
		if(Dia < 1 || Dia > 31 || Mes < 1 || Mes > 12) {	
			system("cls");
			cout << " N�meros inv�lidos, digite novamente";
		}
	}while(Dia < 1 || Dia > 31 || Mes < 1 || Mes > 12);
	
	Estacao_Ano(Dia, Mes);
	
	return 0;
}

void Estacao_Ano(int Dia, int Mes) {
	cout << Dia << "/" << Mes;
	
	if(Mes != 3 && Mes != 6 && Mes != 9 && Mes != 12){
		if(Mes < 3) {
			cout << " � Ver�o";
		}
		else{
			if(Mes < 6) {
				cout << " � Outono";
			}
			else{
				if(Mes < 9) {
					cout << " � Primavera";
				}
				else{
					cout << " � Inverno";
				}
			}
		}
	}
	else{
		if(Mes == 3) {
			if(Dia < 21) {
				cout << " � Ver�o";
			}
			else{
				cout << " � Outono";
			}
		}
		else{
			if(Mes == 6){
				if(Dia < 21) {
					cout << " � Outono";
				}
				else{
					cout << " � Inverno";
				}
			}
			else{
				if(Mes == 9){
					if(Dia < 23) {
						cout << " � Inverno";
					}
					else{
						cout << " � Primavera";
					}
				}
				else{
					if(Dia < 21) {
						cout << " � Primavera";
					}
					else{
						cout << " � Ver�o";
					}
				}
			}
		}
	}
}
