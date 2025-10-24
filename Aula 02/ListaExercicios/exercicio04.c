#include <stdio.h>
#include <string.h>

int main(){
    
    char nome[30];
    int tam;


    printf("Informe seu nome: (max 30 caracteres): ");
    fgets(nome, 29, stdin) != NULL;
    tam = strlen(nome);
        
    printf("%s", nome);

    for(int i = tam-1;i>=0;i--){
        printf("%c", nome[i]);
    }
    return 0;
}