#include <iostream>
#include <locale.h>

using namespace std;

void Nadador(int Idade);

int Idade;
int main () {
	setlocale (LC_ALL,"Portuguese");
	
	cout << " Digite sua idade: ";
	cin >> Idade;
	cout << endl;
	
	Nadador(Idade);
	
	return 0;
}

void Nadador(int Idade){
	if(Idade < 5){
		cout << " Idade insuficiente para nadar!";
	}
	else{
		if(Idade < 8){
			cout << "Infantil A";
		}
		else{
			if(Idade < 11){
				cout << "Infantil B";
			}
			else{
				if(Idade < 14){
					cout << "Juvenil A";
				}
				else{
					if(Idade < 18){
						cout << "Juvenil B";
					}
					else{
						cout << "Adulto";
					}
				}
			}
		}
	}
}
