#include <stdio.h>

/*
	Aluno: Mateus Camargo

	Quantos dias tem no mês.
*/

int main(void){

	int input_1;

	printf("Digite um mes(1-12): ");
	scanf("%i", &input_1);

	switch(input_1){
	
		case(1):
			printf("Tem 31 dias\n");
			break;
		case(2):
			printf("Tem 28 dias\n");
			break;
		case(3):
			printf("Tem 31 dias \n");
			break;
		case(4):
			printf("Tem 30 dias\n");
			break;
		case(5):
			printf("Tem 31 dias\n");
			break;
		case(6):
			printf("Tem 30 dias\n");
			break;
		case(7):
			printf("Tem 31 dias\n");
			break;
		case(8):
			printf("Tem 31 dias\n");
			break;
		case(9):
			printf("Tem 30 dias\n");
			break;
		case(10):
			printf("Tem 31 dias\n");
			break;
		case(11):
			printf("Tem 30 dias\n");
			break;
		case(12):
			printf("Tem 31 dias\n");
			break;
	}

}
