#include <stdio.h>

int potencia(int base, int expoente);

void main() {
    int base, expoente;
  
    printf("Digite a base: ");
    scanf("%d", &base);
    
    printf("Digite o expoente: ");
    scanf("%d", &expoente);

    printf("Potencia: %d", potencia(base, expoente));
    ;
    printf("\n");

}

int potencia(int base, int expoente){
    int potencia = 0;

    for(int i=0; i < expoente; i++){
        if(i == 0){
            potencia = base;
        }else{
            potencia *= base;
        }
        
    }
    return potencia;
}