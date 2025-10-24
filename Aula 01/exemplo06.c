#include <stdio.h>
#include <string.h>

int main(){
    char nome[50] = "João";
    char sobrenome[50] = "Silva";

    strcat(nome, " "); //PRIMEIRO CONCATENOU COM O ESPAÇO EM BRANCO
    strcat(nome, sobrenome);

    printf("Nome Completo: %s\n", nome);

}