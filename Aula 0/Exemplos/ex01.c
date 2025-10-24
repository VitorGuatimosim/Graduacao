#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int x, y, res;

    printf("Informe o numero 1: \n");
    scanf("%i", &x);

    printf("Informe o numero 2: ");
    scanf_s("%i", &y);

    res = x + y;

    printf("O resultado da soma de %i com %i é %i.", x, y, res);
    return 0;
}