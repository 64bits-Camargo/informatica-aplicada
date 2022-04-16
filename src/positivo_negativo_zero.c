#include <stdio.h>  


int main(void)  {  

	int numero_input;
	
	printf("Digite um número: ");
	scanf("%i", &numero_input);
	
	if(numero_input > 0)
       		printf("POSITIVO!\n");
	
	if(numero_input == 0)
		printf("IGUAL A ZERO!\n");

	if(numero_input < 0)
		printf("NEGATIVO!\n");

}  
