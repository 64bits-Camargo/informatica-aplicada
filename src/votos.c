#include <stdio.h>
#include <stdlib.h>

void main(){
    int a=0, b=0, c=0;
    int voto;

    while(1){
        sleep(2);
        system("clear");
        printf("\n----------------- CANDIDATOS -----------------\n");
        printf("| 1 - Candidato A \n");
        printf("| 2 - Candidato B \n");
        printf("| 3 - Candidato C \n");
        printf("| 10 - Encerrar programa\n");
        printf("----------------- ----------------- -----------------\n");
        printf("Pra quem vai seu voto: ");
        scanf("%d", &voto);

        switch (voto){
            case 1:
                a += 1;
                break;
            case 2:
                b += 1;
                break;
            case 3:
                c += 1;
                break;
            case 10:
                system("clear");
                printf("\n----------------- RESULTADO FINAL -----------------\n");
                printf("| 1 - Candidato A -> Total de votas: %d\n", a);
                printf("| 2 - Candidato B -> Total de votas: %d\n", b);
                printf("| 3 - Candidato C -> Total de votas: %d\n", c);
                printf("----------------- ----------------- -----------------\n");
                exit(0);
                break;
            default:
                system("clear");
                printf("Candidato invalido!\n");
                break;
        }
    }
}

