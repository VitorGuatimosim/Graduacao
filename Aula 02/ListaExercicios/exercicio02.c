#include <stdio.h>

int main(){

    int numeros[10];
    int soma = 0;

    for(int i=0; i<10; i++){
        numeros[i] = i+1;
        soma+=numeros[i];
    }

    printf("A soma de todos os valores no vetor numeros é: %i", soma);

    return 0;
}