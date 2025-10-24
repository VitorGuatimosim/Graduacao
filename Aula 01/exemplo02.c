#include <stdio.h>

int main(){

    int numeros[10];
    int indice, novoValor;

    for(int i = 0; i < 10; i++){
        numeros[i] = i;
    }


    printf("Informe o indice secreto: ");
    scanf_s("%i", &indice);

    printf("\nAgora informe o novo valor a ser inserido: ");
    scanf_s("%i", &novoValor);

    printf("\nValor antigo: %i", numeros[indice]);

    numeros[indice] = novoValor;

    printf("\nNovo valor: %i", numeros[indice]);

    return 0;

}