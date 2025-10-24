#include<stdio.h>

int fVarEstatica();
int fVarAutomatica();

int main(){
    fVarEstatica();
    fVarAutomatica();
    fVarEstatica();
    fVarAutomatica();
    fVarEstatica();
    fVarAutomatica();

    return 0;
}

int fVarEstatica(){
    static int num = 0;
    num++;

    printf("\n%i", num);

    return 1;
}

int fVarAutomatica(){
    int num = 0;
    num++;

    printf("\n%i", num);

    return 1;
}