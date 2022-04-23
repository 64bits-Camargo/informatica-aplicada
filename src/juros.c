#include <stdio.h>
#include <stdlib.h>

int main(){

    int count, periodo;
    float capital, juros;
    
    
    printf("Informe o capital: ");
    scanf("%f", &capital);
    
    printf("Informe o periodo de investimento: ");
    scanf("%d", &periodo);
    
    printf("Informe o juros mensal: ");
    scanf("%f", &juros);
    
    printf("\n------------ RENDIMENTOS -------------\n");

    count = 0; 
    while(count < periodo){
        capital += (capital/juros);
        printf("%d mes: RS %.2f\n", count + 1, capital);
        count++;
    }

}
