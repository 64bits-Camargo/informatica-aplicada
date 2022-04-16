#include <stdio.h>

int main(void){
	
	int v_input;
	int p_vestuario = 0;
	int p_higiene = 1;
	int P_perecivel = 2;

	printf("0 - Vestuário\n");	
	printf("1 - Higiene\n");	
	printf("2 - Perecivel\n");	
	printf("-> ");
	scanf("%i", &v_input);

	if(v_input == p_vestuario){
		printf("\nVocê quer comprar uma blusa?\n");
	}else if(v_input == p_higiene){
		printf("\nVocê quer comprar um creme dental\n");
	}else if(v_input == P_perecivel){
		printf("\nVocê quer comprar um kg de carne?\n");
	}else{
		printf("\nProduto indisponivel.\n");
	}

	
}
