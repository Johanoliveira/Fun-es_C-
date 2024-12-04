#include <iostream>
#include <locale.h>

using namespace std;

int Retorno_Num(int Num);


int Num, Retorno;
int main () {
	setlocale (LC_ALL,"Portuguese");
	
	cout << " Digite um número: ";
	cin >> Num;
	cout << endl;
	
	Retorno = Retorno_Num(Num);
	
	cout << " A função retornou: " << Retorno;
	
	return 0;
}

int Retorno_Num(int Num){
	int Retorno;
	if(Num>=0 && Num<=10){
		Retorno = 0;
	}
	else{
		Retorno = 1;
	}
	
	return Retorno;
}
