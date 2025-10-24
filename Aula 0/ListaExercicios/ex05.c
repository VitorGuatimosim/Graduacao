#include<stdio.h>

int main(){
    float base, altura;

    printf("Informe a base do triangulo: ");
    scanf_s("%f", &base);

    printf("Informe a altura do triangulo: ");
    scanf_s("%f", &altura);

    float area = (base*altura)/2;
    printf("Area do triangulo de base %f, altura %f, eh = %f", base, altura, area);

    return 0;

}