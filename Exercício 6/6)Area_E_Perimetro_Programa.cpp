#include <iostream>
#include <locale.h>

using namespace std;

int Area_Quadrado(int Lado);
int Perimetro_Quadrado(int Lado);

int Lado, Area, Perimetro;
int main () {
	setlocale (LC_ALL,"Portuguese");
	
	cout << " Digite o lado do quadrado: ";
	cin >> Lado;
	cout << endl;
	
	Area = Area_Quadrado(Lado);
	Perimetro = Perimetro_Quadrado(Lado);
	
	cout << " A área do quadrado é: " << Area << endl;
	cout << " O perímetro do quadrado é: " << Perimetro;
	
	return 0;
}

int Area_Quadrado(int Lado){
	int Area;
	Area = Lado * Lado;
	
	return Area;
}

int Perimetro_Quadrado(int Lado){
	int Perimetro;
	Perimetro = Lado * 4;
	
	return Perimetro;
}
