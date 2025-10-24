#include<stdio.h>

int main(){
    int x;

    printf("Informe um numero: ");
    scanf_s("%i", &x);

    for(int i = 1; i < 11; i++){
        printf("\n%i X %i = %i",x,i,x*i);
    }
}