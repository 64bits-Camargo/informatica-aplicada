#include <stdio.h>


void somar(int valor1, int valor2){
	printf("%i", valor1 + valor2);
}

void subtracao(int valor1, int valor2){
	printf("%i", valor1 - valor2);
}

void multiplicao(int valor1, int valor2){
	printf("%i",  valor1);
}

void divisao(int valor1, int valor2){
	printf("%i", valor1);
}

int main(void){


	int operador;
	int valor1, valor2;
	

	while(1){
	
		
		printf("Valor 1: ");
		scanf("%i", &valor1);
		
		printf("Valor 2: ");
		scanf("%i", &valor2);

		printf("Operacação(x, +, *, /): ");
		scanf("%i", &operador);

		switch(operador){
			
			case(1): 
				somar(valor1, valor2);
			case(2):
				subtracao(valor1, valor2);
			case(3):
				multiplicao(valor1, valor2);
			case(4):
				divisao(valor1, valor2);
			default:
				printf("ERROR.");

		}

		
	}

}
