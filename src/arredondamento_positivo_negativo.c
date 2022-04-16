#include <stdio.h>
#include <math.h>

int main(void){


	float numero_input, arred;
	printf("Digite um número: ");
	scanf("%f", &numero_input);

	if(numero_input >= 0){
		printf("Número positivo!\n");
		arred = floor(numero_input);
	}else{
		printf("Número negativo!\n");
		arred = ceil(numero_input);
	}

	printf("Arred.: %f\n", arred);


}
