#include <stdio.h>
#include <ctype.h>

int main(){

    char str[100];
    int i;

    printf("Digite uma string: ");
    scanf("%s", str);

    //'\0' é o ultimo item armazenado numa string para indicar
    // o final dela nesse caso, num vetor string de 100 indices
    // o 99 é o \0
    for(int i = 0; str[i] != '\0'; i++){
        str[i] = toupper(str[i]);
    }

    printf("Nova String: %s\n", str);
    return 0;

}