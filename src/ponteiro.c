#include <stdio.h> 

void main(){
    int var_num;
    int *ponteiro_num;

    var_num = 5;

    printf("variavel valor: %d - ponteiro endereco -> %d\n", var_num, ponteiro_num);

    ponteiro_num = &var_num;
    
    printf("variavel valor: %d - ponteiro endereco -> %d - ponteiro valor -> %d\n", var_num, ponteiro_num, *ponteiro_num);

    *ponteiro_num = 8;

    printf("variavel valor: %d - ponteiro endereco -> %d - ponteiro valor -> %d\n", var_num, ponteiro_num, *ponteiro_num);
}