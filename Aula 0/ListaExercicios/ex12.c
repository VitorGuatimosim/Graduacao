#include<stdio.h>

int varGlobal1 = 10;
int varGlobal2 = 20;

int modificaVar();
int imprime();

int main(){

    imprime();
    modificaVar();
    imprime();
    return 0;
}

int modificaVar(){
    varGlobal1 = 20;
    varGlobal2 = 33;

    return 1;
}

int imprime(){
    printf("\nVarGlobal1: %i", varGlobal1);
    printf("\nVarGlobal2: %i", varGlobal2);

    return 1;
}