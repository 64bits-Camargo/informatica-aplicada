#include <stdio.h>

int main(void){
	
	int numero_input;
	printf("Digite um número: ");
	scanf("%i", &numero_input);

	if(numero_input == 10 || numero_input == 0)
		printf("OK\n");

}
