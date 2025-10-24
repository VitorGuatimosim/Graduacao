#include<stdio.h>

int criaVariavel();

int main(){

    criaVariavel();
    criaVariavel();
    criaVariavel();
    return 0;
}

int criaVariavel(){
    int var = 0;
    var++;

    printf("\n%i", var);
}