#include <stdio.h>

/*
	Aluno: Mateus Camargo

	Se o valor de entrada é par ou impar.
*/

int main(void){
	
	int input_1;

	printf("Valor 1: ");
	scanf("%i", &input_1);

	if(input_1 % 2 == 0){
		printf("PAR!!\n");
	}else{
		printf("IMPAR!!\n");
	}
	
}
