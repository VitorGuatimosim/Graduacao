#include <stdio.h>

int main(){

    char frase[100];
    char letra;
    int contador = 0; 

    printf("Informe uma frase: ");
    fgets(frase, 99, stdin) != NULL;

    printf("Informe uma letra: ");
    letra = fgetchar();

    for(int i = 0; frase[i] != '\0'; i++){
        if(frase[i] == letra){
            contador++;
        }
    }

    printf("A letra '%c' apareceu %i vezes na frase!", letra, contador);



    return 0;
}