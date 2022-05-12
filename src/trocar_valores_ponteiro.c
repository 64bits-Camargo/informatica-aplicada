#include <stdio.h>

void troca(int *pont_var1, int *pont_var2);

void main() {
    int var1 = 0;
    int var2 = 1;
    
    printf("var1: %d - var2: %d\n", var1, var2);

    troca(&var1, &var2);

    printf("var1: %d - var2: %d\n", var1, var2);

}

void troca(int *pont_var1, int *pont_var2) {
    int aux = *pont_var1;
    *pont_var1 = *pont_var2;
    *pont_var2 = aux;
}