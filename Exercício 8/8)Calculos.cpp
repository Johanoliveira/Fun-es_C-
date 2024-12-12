#include <iostream>
#include <locale.h>

using namespace std;

int	Soma_Num(int Num1, int Num2);
int	Subtracao_Num(int Num1, int Num2);
int	Multiplicacao_Num(int Num1, int Num2);
float Divisao_Num(int Num1, int Num2);

int Selecao, Num1, Num2;
float Resultado;
int main () {
	setlocale (LC_ALL,"Portuguese");
	
	do{	
		cout << " ===== SELEÇÃO ===== " << endl;
		cout << " Soma = 1" << endl;
		cout << " Subtração = 2" << endl;
		cout << " Multiplicação = 3" << endl;
		cout << " Divisão = 4" << endl;
		cout << " Sair = 5" << endl;
		cin >> Selecao;
		cout << endl;	
	
		if(Selecao != 5){
			cout << " Digite o primeiro número: ";
			cin >> Num1;
			cout << endl << " Digite o segundo número: ";
			cin >> Num2;
			cout << endl;
		}
	
		switch (Selecao) {
			case 1 :
				Resultado = Soma_Num(Num1, Num2);
				break;
			case 2 :
				Resultado = Subtracao_Num(Num1, Num2);
				break;
			case 3 :
				Resultado = Multiplicacao_Num(Num1, Num2);
				break;
			case 4 :
				Resultado = Divisao_Num(Num1, Num2);
				break;
			case 5 :
				break;
			default :
				cout << " Opção inválida!!!" << endl;
				break;
		}
		system("cls");
		
		if(Selecao >= 1 && Selecao <= 4) {
			cout << " Resultado da operação: " << Resultado << endl << endl;
		}
	}while(Selecao != 5);
	
	return 0;
}

int	Soma_Num(int Num1, int Num2) {
	int Soma;
	
	Soma = Num1 + Num2;
	
	return Soma;
}
int	Subtracao_Num(int Num1, int Num2) {
	int Subtracao;
	
	Subtracao = Num1 - Num2;
	
	return Subtracao;
}
int	Multiplicacao_Num(int Num1, int Num2){
	int Multiplicacao;
	
	Multiplicacao = Num1 * Num2;
	
	return Multiplicacao;
}
float Divisao_Num(int Num1, int Num2) {
	float Divisao;
	
	Divisao = Num1 / Num2;
	
	return Divisao;
}
