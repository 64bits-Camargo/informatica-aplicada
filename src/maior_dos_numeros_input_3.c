#include <stdio.h>

int main(void){
	
	int input_1, input_2, input_3;

	printf("Valor 1: ");
	scanf("%i", &input_1);

	printf("Valor 2: ");
	scanf("%i", &input_2);

	printf("Valor 3: ");
	scanf("%i", &input_3);

	if((input_1 > input_2) && (input_1 > input_3)){
		printf("Valor 1 maior\n");
	}else if(input_2 > input_3){
		printf("Valor 2 maior\n");	
	}else{
		printf("Valor 3 é maior\n");
	}

}
