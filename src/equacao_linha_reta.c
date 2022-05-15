#include<stdio.h>
// y = b + mx
       

void main(){
    int n; 
    
    float x, y;
    float m, b;

    float d;

    float sumx=0,sumxsq=0;
    float sumy=0,sumxy=0;

    printf("Numeros para n:");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        printf("\nx: ");
        scanf("%f",&x);
        printf("y: ");
        scanf("%f",&y);

        sumx = sumx + x;
        sumxsq = sumxsq + (x * x);
        sumy = sumy + y;
        sumxy = sumxy + (x * y);
    }

    d = n * sumxsq - sumx * sumx;

    m = (n * sumxy - sumx * sumy) / d;
    b = ( sumy * sumxsq - sumx * sumxy ) / d;

    printf("\nM=%.2f\tB=%.2f\n", m, b);

}


