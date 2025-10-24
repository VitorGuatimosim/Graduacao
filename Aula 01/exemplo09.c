#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char numeroStr[10] = "123";
    int numero = atoi(numeroStr);
    //atoi para numero inteiros e atof para numero flutuantes

    printf("O valor inteiro é: %i\n", numero);
    numero++;
    printf("O valor inteiro é: %i\n", numero);

}