#include <stdio.h>

/*
	Aluno: Mateus Camargo

	Ordenar de forma crescente 3 valores.
*/
    
int main(void){
        
    int input_1, input_2, input_3;
    
    printf("Valor 1: ");
    scanf("%i", &input_1);

    printf("Valor 2: ");
    scanf("%i", &input_2);

    printf("Valor 2: ");
    scanf("%i", &input_3);

    if(input_1 < input_2){
        if(input_2 < input_3){
            printf("%i,%i,%i\n", input_1, input_2, input_3);
        }else{
            if(input_1 < input_3){
                printf("%i,%i,%i\n", input_1, input_3, input_2);
            }else{
                printf("%i,%i,%i\n", input_3, input_1, input_2);
            }
        }
    }else{
        if(input_2 < input_3){
            if(input_1 < input_3){
                printf("%i,%i,%i\n", input_2, input_1, input_3);
            }else{
                printf("%i,%i,%i\n", input_2, input_3, input_1);
            }
        }else{
            printf("%i,%i,%i\n", input_3, input_2, input_1);
        }
    }
}