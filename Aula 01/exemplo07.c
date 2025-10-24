#include <stdio.h>
#include <string.h>

int main(){

    char destino[50];
    char origem[50] = "Olá mundo!";

    strcpy(destino, origem);


    printf("%s", destino);
}