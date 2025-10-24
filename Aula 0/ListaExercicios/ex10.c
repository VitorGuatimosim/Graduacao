#include<stdio.h>
int modificaValor();
int valorGlobal = 3;

int main(){

    printf("%i", valorGlobal);
    printf("MODIFICANDO VALOR!!!");
    modificaValor();
    printf("%i", valorGlobal);
    return 0;
}

int modificaValor(){
    valorGlobal = 5;

}