#include <math.h>
#include <stdio.h>


void bhaskara(float a, float b, float c, float *x1,  float *x2);


void main() {

    float x1, x2;

    float a=2, b=5, c=1;

    bhaskara(a, b, c, &x1, &x2);

    printf("X1 -> %.2f\n", x1);
    printf("X2 -> %.2f\n", x2);

}


void bhaskara(float a, float b, float c,  float *x1,  float *x2){

    float delta = sqrt((pow(b, 2) - (4 * a * c)));
    
    *x1 = (-(b) + delta) / (a * 2);
    *x2 = (-(b) - delta) / (a * 2);
}
