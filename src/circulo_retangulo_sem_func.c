#include <stdio.h>

float pi = 3.14;

float calc_area_retangulo(float base, float altura);
float calc_perimetro_retangulo(float base, float altura);
float calc_area_circulo(float raio);
float calc_perimetro_circulo(float raio);
void print_menu_circulo();
void print_menu_retangulo();

void main(){

    int resp;

    printf(" --------------- Calcular as medidas AREA e PERIMETRO: --------------- \n");
    printf("\n| 1- Quadrado");
    printf("\n| 2- Circulo");
    printf("\n| --> ");
    scanf("%i", &resp);

    switch (resp){
        case 1:
            print_menu_retangulo();
            break;
        case 2:
            print_menu_circulo();
            break;
        default:
            printf("Erro!");
            break;
    }

}

void print_menu_circulo(){
    float raio;

    printf("| ------ Informacoes ------ ");
    printf("\n| Raio: ");
    scanf("%f", &raio);

    printf("| ------ Resultado ------ ");
    printf("\n| Area: %.2f", calc_area_circulo(raio));
    printf("\n| Perimetro: %.2f", calc_perimetro_circulo(raio));
}

void print_menu_retangulo(){
    float base, altura, raio;

    printf("| ------ Informacoes ------ ");
    printf("\n| Base: ");
    scanf("%f", &base);
    printf("| Altura: ");
    scanf("%f", &altura);

    printf("| ------ Resultado ------ ");
    printf("\n| Area: %.2f", calc_area_retangulo(base, altura));
    printf("\n| Perimetro: %.2f", calc_perimetro_retangulo(base, altura));
}

float calc_area_retangulo(float base, float altura){
    return base * altura;
}

float calc_perimetro_retangulo(float base, float altura){
    return (base * 2) + (altura * 2);
}

float calc_area_circulo(float raio){
    return pi * (raio * raio);
}

float calc_perimetro_circulo(float raio){
    return pi * raio * 2;
}