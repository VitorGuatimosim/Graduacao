#include <stdio.h>
#include <string.h>

int main(){
    char frase[50] = "A linguagem C é poderosa!";
    char *primeiroC = strchr(frase, 'C');

    if(primeiroC != NULL){
        printf("O caractere 'C' foi encontrado na posição %d.\n", (int)(primeiroC - frase));
    }else{
        printf("O caractere 'C' não foi encontrado. \n");
    }

}