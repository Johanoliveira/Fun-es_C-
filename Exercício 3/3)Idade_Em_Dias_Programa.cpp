#include <iostream>
#include <locale.h>

using namespace std;

int Idade_Dias(int Anos, int Meses, int Dias);

int Anos, Meses, Dias;
int main () {
	setlocale (LC_ALL,"Portuguese");
	
	cout << " Digite quantos anos voc� tem: ";
	cin >> Anos;
	cout << endl << " Digite quantos meses voc� tem: ";
	cin >> Meses;
	cout << endl << " Digite quantos dias voc� tem: ";
	cin >> Dias;
	cout << endl;
	
	Dias = Idade_Dias(Anos, Meses, Dias);
	
	cout << " Sua idade em dias �: " << Dias;
	
	return 0;
}

int Idade_Dias(int Anos, int Meses, int Dias){
	Dias = Dias + (Anos*360) + (Meses*30);
}
