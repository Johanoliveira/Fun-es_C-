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
		cout << endl << " Digite o mês do ano: ";
		cin >> Mes;
		cout << endl;
		
		if(Dia < 1 || Dia > 31 || Mes < 1 || Mes > 12) {	
			system("cls");
			cout << " Números inválidos, digite novamente";
		}
	}while(Dia < 1 || Dia > 31 || Mes < 1 || Mes > 12);
	
	Estacao_Ano(Dia, Mes);
	
	return 0;
}

void Estacao_Ano(int Dia, int Mes) {
	cout << Dia << "/" << Mes;
	
	if(Mes != 3 && Mes != 6 && Mes != 9 && Mes != 12){
		if(Mes < 3) {
			cout << " é Verão";
		}
		else{
			if(Mes < 6) {
				cout << " é Outono";
			}
			else{
				if(Mes < 9) {
					cout << " é Primavera";
				}
				else{
					cout << " é Inverno";
				}
			}
		}
	}
	else{
		if(Mes == 3) {
			if(Dia < 21) {
				cout << " é Verão";
			}
			else{
				cout << " é Outono";
			}
		}
		else{
			if(Mes == 6){
				if(Dia < 21) {
					cout << " é Outono";
				}
				else{
					cout << " é Inverno";
				}
			}
			else{
				if(Mes == 9){
					if(Dia < 23) {
						cout << " é Inverno";
					}
					else{
						cout << " é Primavera";
					}
				}
				else{
					if(Dia < 21) {
						cout << " é Primavera";
					}
					else{
						cout << " é Verão";
					}
				}
			}
		}
	}
}
