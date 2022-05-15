#include <stdio.h>

void zerar(int *pont1, int *pont2);

void main(){
    int var1=100, var2=100;

    printf("var1 -> %d - var2 -> %d\n", var1, var2);

    zerar(&var1, &var2);

    printf("var1 -> %d - var2 -> %d\n", var1, var2);

}

void zerar(int *pont1, int *pont2){
    *pont1 = 0;
    *pont2 = 0;
}