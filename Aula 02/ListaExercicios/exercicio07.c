#include <stdio.h>

int contadorArray(int* numeros, int tamanho);


int main(){

    int numeros[10] = {1,2,3,4,5,6,7,8,9,10};
    int resultado = contadorArray(numeros, 10);

    printf("%i", resultado);

    return 0;
}

int contadorArray(int* numeros, int tamanho){
    int soma = 0;

    for(int i = 0; i<tamanho; i++){
        soma+= numeros[i];
    }
    return soma;
}