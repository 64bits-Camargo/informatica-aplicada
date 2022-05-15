#include<stdio.h>
// y = b + mx


void * func_equacao_reduzida_reta(
    int n, 
    float matriz[n][2], 
    float *b, 
    float *m
);


void main(){
    int n; 
    float b, m;
    float x, y;
    
    printf("Quantidade de pontos: ");
    scanf("%d", &n);
    
    float matriz[n][2];
    
    for(int linha = 0; linha < n; linha++){
        printf("------\n");
        printf("x: ");
        scanf("%f", &x);

        printf("y: ");
        scanf("%f", &y);

        matriz[linha][0] = x; 
        matriz[linha][1] = y;
    }

    func_equacao_reduzida_reta(n, matriz, &b, &m); 
    printf("\nM=%.2f\tB=%.2f\n", m, b);
}


void * func_equacao_reduzida_reta(
    int n, 
    float matriz[n][2], 
    float *b, 
    float *m
){
    float x, y;
    float coeficiente_angular;
    float sumx=0, sumxsq=0;
    float sumy=0, sumxy=0;

    for(int linha = 0; linha < n; linha++){
        x = matriz[linha][0];
        y = matriz[linha][1];

        sumx = sumx + x;
        sumxsq = sumxsq + (x * x);
        sumy = sumy + y;
        sumxy = sumxy + (x * y);
    }

    coeficiente_angular = n * sumxsq - sumx * sumx;

    *m = (n * sumxy - sumx * sumy) / coeficiente_angular;
    *b = ( sumy * sumxsq - sumx * sumxy ) / coeficiente_angular;
}
