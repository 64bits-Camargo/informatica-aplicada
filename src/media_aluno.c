#include <stdio.h>
#include <stdlib.h>

void main(){
    int qtd_notas, count;
    float nota, sum_notas;
    char nome_aluno[124];
    
    qtd_notas = 2;
    
    printf("Primeiro nome do aluno: ");
    scanf("%s", &nome_aluno);
    
    sum_notas = 0;
    count = 1;
    while(count <= qtd_notas){
        printf("\nInforme uma nota para aluno: ");
        scanf("%f", &nota);
        
        if((nota >= 0) && (nota <=10)){
            sum_notas += nota;
            count++;    
        }else{
            printf("\nNota invalida! Fora da faixa 0 a 10!\n");
        }
        
    }
    system("clear");

    printf("----------------------------------------");
    printf("\nAluno: %s", nome_aluno);
    printf("\nTotal das duas notas: %.2f", sum_notas);   
    printf("\nMedia: %.2f", sum_notas/qtd_notas); 
}

