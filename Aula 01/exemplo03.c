#include <stdio.h>

int main(){

    int numeros[10], aux;

    printf("Vetor original: \n");
    for(int i = 0; i < 10; i++){
        numeros[i] = i + 1;
        printf("%i\n", numeros[i]);
    }

    printf("Vetor invertido: \n");
    for(int i = 0, j = 9; i < j; i++, j--){
        aux = numeros[i];
        numeros[i] = numeros[j];
        numeros[j] = aux;
    }

    for(int i = 0; i < 10; i++){
        printf("%i\n", numeros[i]);
    }



    return 0;

}