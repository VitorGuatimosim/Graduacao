#include<stdio.h>

int main(){
    int x,y; 
    char escolha;

    printf("Agora informe a operacao desejada: ");
    printf("\n1. +");
    printf("\n2. -");
    printf("\n3. /");
    printf("\n4. *");
    printf("\nEscolha: ");

    scanf_s("%c", &escolha);
    
    printf("Informe o valor 1: ");
    scanf_s("%i", &x);

    printf("Informe o valor2: ");
    scanf_s("%i", &y);

    

    switch (escolha){
    case '+':
        printf("Soma de %i e %i e = %i", x, y, x+y);
        break;
    case '-':
        printf("Subtração de %i e %i e = %i", x, y, x-y);
        break;
    case '/':
        printf("Divisao de %i e %i e = %i", x, y, x/y);
        break;
    case '*':
        printf("Multiplicacao de %i e %i e = %i", x, y, x*y);
        break;
    default:
        printf("Opcao invalida!");
        break;
    }
    return 0;

}
