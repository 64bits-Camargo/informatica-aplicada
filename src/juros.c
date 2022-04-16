#include <stdio.h>
#include <stdlib.h>

int main(){

    int count;
    float capital, juros, periodo;
    
    capital = 100;
    juros = 10;
    periodo = 3;
    count = 0;

    while(count < periodo){
        capital += (capital/juros);
        printf("%d mes: RS %.2f\n", count + 1, capital);
        count++;
    }

}
