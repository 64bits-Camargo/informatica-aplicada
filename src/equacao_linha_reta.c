#include<stdio.h>
// y = b + mx


void * func_regressao_linear(
    int n, 
    float matriz[n][2], 
    float *b, 
    float *m
);


void * func_equacao_reduzida(
    float matriz[2][2], 
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
        printf("x%d: ", linha + 1);
        scanf("%f", &x);

        printf("y%d: ", linha + 1);
        scanf("%f", &y);

        matriz[linha][0] = x; 
        matriz[linha][1] = y;
    }

    func_regressao_linear(n, matriz, &b, &m);
    printf("\nRegressao:\tM=%.2f\tB=%.2f\n", m, b);
    
    if(n == 2){
        func_equacao_reduzida(matriz, &b, &m);
        printf("Reduzida:\tM=%.2f\tB=%.2f\n", m, b);
    }
}


void * func_regressao_linear(
    int n, 
    float matriz[n][2], 
    float *b, 
    float *m
){
    float x, y;
    float d;
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

    d = n * sumxsq - sumx * sumx;

    *m = (n * sumxy - sumx * sumy) / d;
    *b = ( sumy * sumxsq - sumx * sumxy ) / d;
}


void * func_equacao_reduzida(
    float matriz[2][2], 
    float *b, 
    float *m
){
    
    float x1 = matriz[0][0];
    float y1 = matriz[0][1];

    float x2 = matriz[1][0];
    float y2 = matriz[1][1];
    
    *m = (y1 - y2) / (x1 - x2);
    *b = y1 - *m * x1;
}