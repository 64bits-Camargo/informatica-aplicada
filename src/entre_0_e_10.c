#include <stdio.h>


int main(void){

	int numero_input;
	printf("Digite um número: ");
	scanf("%i", &numero_input);

	if(numero_input >= 0 && numero_input <= 10)
		printf("ENTRE 0 E 10!\n");
	
	if(!numero_input >= 0 || numero_input <= 10)
		printf("NÂO ESTÁ ENTRE 0 E 10!\n");
}
