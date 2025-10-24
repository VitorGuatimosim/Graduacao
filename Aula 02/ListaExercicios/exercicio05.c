#include <stdio.h>
#include <string.h>

int main(){

    char str1[100], str2[100];

    printf("Informe a frase 1: ");
    fgets(str1, 99, stdin) != NULL;

    printf("Informe a frase 2: ");
    fgets(str2, 99, stdin) != NULL;
    
    strcat(str1, " ");
    strcat(str1, str2);

    printf("Frase final: %s\n", str1);

    return 0;
}