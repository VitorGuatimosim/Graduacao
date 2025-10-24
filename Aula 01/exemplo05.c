#include <stdio.h>
#include <string.h>

int main(){
    int resultado = strcmp("abc", "ABC");

    if(resultado == 0){
        printf("As Strings são iguais. \n");
    }else if(resultado < 0){
        printf("A string 'abc' é menor que 'ABC'. \n");
    }else{
        printf("A string 'abc' é maior que 'ABC'. \n");
    }

}