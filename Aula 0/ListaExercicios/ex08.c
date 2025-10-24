#include<stdio.h>

int somar(int numero1, int numero2);

int main(){
    int x,y;
    printf("Informe o numero 1: ");
    scanf_s("%i", &x);

    printf("Informe o numero 2: ");
    scanf_s("%i", &y);

    printf("\nSoma dos numero: %i ", somar(x, y));

    return 0;
}

int somar(int numero1, int numero2){
    return numero1+ numero2;
}