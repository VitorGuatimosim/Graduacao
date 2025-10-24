#include<stdio.h>

int parOuImpar(int numero);

int main(){
    int num;

    printf("Informe um numero: ");
    scanf_s("%i", &num);

    if(parOuImpar(num) == 0){
        printf("PAR!!");
    }else{
        printf("IMPAR!!");
    }
    return 0;
}

int parOuImpar(int numero){
    if(numero % 2 == 0){
        return 0;
    }else{
        return 1;
    }
}