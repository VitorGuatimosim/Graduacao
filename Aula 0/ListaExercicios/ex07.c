#include<stdio.h>

int main(){

    int numero;
    char caracter;

    printf("Informe um caracter: ");
    scanf_s("%c", &caracter);

    printf("informe um numero: ");
    scanf_s("%i", &numero);

    printf("agora informe o numero de vezes que deseja incrementar eles: ");
    int contador = 0;
    scanf_s("%i", &contador);

    for(int i = 0; i < contador; i++){
        numero++;
        caracter++;
    }

    printf("Numero depois do incremento: %i, Caracter depois do incremento: %c",numero, caracter);

    return 0;
}