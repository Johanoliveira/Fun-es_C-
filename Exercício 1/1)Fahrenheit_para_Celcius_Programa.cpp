#include <iostream>
#include <locale.h>

using namespace std;

float Conversor_Para_Celcius(float F);

float Temperatura;

int main () {
	setlocale (LC_ALL,"Portuguese");
	
	cout << " Digite a temperatura em Fahrenheit: ";
	cin >> Temperatura;
	cout << endl;
	
	Temperatura = Conversor_Para_Celcius(Temperatura);
	
	cout << " A temperatura digitada em Celcius é: " << Temperatura << "°C";
	
	return 0;
}

float Conversor_Para_Celcius(float F){
	float C;
	C = ((F-32)*5)/9;
	
	return C;
}
