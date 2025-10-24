#include<stdio.h>

int main(){
    int x, y;

    printf("Informe o numero 1: ");
    scanf_s("%i", &x);

    printf("Informe o numero 2: ");
    scanf_s("%i", &y);

    printf("Soma: %i\n", x+y);
    printf("Subtracao: %i\n", x-y);
    printf("Produto: %i\n", x*y);
    printf("Divisao: %i\n", x/y);


}