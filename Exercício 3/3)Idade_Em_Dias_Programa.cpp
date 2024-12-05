#include <iostream>
#include <locale.h>

using namespace std;

int Idade_Dias(int Anos, int Meses, int Dias);

int Anos, Meses, Dias;
int main () {
	setlocale (LC_ALL,"Portuguese");
	
	cout << " Digite quantos anos você tem: ";
	cin >> Anos;
	cout << endl << " Digite quantos meses você tem: ";
	cin >> Meses;
	cout << endl << " Digite quantos dias você tem: ";
	cin >> Dias;
	cout << endl;
	
	Dias = Idade_Dias(Anos, Meses, Dias);
	
	cout << " Sua idade em dias é: " << Dias;
	
	return 0;
}

int Idade_Dias(int Anos, int Meses, int Dias){
	Dias = Dias + (Anos*360) + (Meses*30);
}
