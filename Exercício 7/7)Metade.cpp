#include <iostream>
#include <locale.h>

using namespace std;

float Metade(float Num);

float Num1, Num2;
int main () {
	setlocale (LC_ALL,"Portuguese");
	
	cout << " Digite o primerio n�mero: ";
	cin >> Num1;
	cout << endl << " Digite o segundo n�mero: ";
	cin >> Num2;
	cout << endl;
	
	Num1 = Metade(Num1);
	Num2 = Metade(Num2);
	
	cout << " A metade dos n�meros � " << Num1 << " e " << Num2;
	
	return 0;
}

float Metade(float Num) {
	float Meio;
	Meio = Num/2;
	
	return Meio;
}
