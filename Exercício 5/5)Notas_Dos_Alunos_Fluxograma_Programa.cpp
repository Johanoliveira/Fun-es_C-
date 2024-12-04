#include <iostream>
#include <locale.h>

using namespace std;

int Entrada_Notas(int Nota[2]);
float Media_Notas(int Nota[2]);
char Conceito_Media(float Media);

int Nota[2];
float Media;
char Conceito;

int main () {
	setlocale (LC_ALL,"Portuguese");
	
	Entrada_Notas(Nota);
	
	Media = Media_Notas(Nota);
	
	Conceito = Conceito_Media(Media);
	
	cout << " Sua média foi: " << Media << endl;
	cout << " Seu conceito foi: " << Conceito;
	
	return 0;
}

int Entrada_Notas(int Nota[2]){
	do{
		cout << " Digite a primeira nota: ";
		cin >> Nota[0];
		cout << endl << " Digite a segunda nota: ";
		cin >> Nota[1];
		cout << endl;
	
		if(Nota[1] < 0 || Nota[1] > 10 || Nota[0] < 0 || Nota[0] > 10){
		cout << "Notas inválidas, digite novamente!" << endl << endl;
		}
	}while(Nota[1] < 0 || Nota[1] > 10 || Nota[0] < 0 || Nota[0] > 10);
}
float Media_Notas(int Nota[2]){
	float Media;
	Media = (Nota[0] + Nota[1])/2;
	
	return Media;
}
char Conceito_Media(float Media){
	char Conceito;
	
	if(Media < 5){
		Conceito = 'D';
	}
	else{
		if(Media < 7){
			Conceito = 'C';
		}
		else{
			if(Media < 9){
				Conceito = 'B';
			}
			else{
				Conceito = 'A';
			}
		}
	}
	
	return Conceito;
}
