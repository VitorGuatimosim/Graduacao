#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int x;

    printf("Informe um valor: ");
    scanf_s("%i", &x);

    if(x % 2 == 0){
        printf("%i e numero par!!", x);
    }else{
        printf("%i e numero impar!!", x);
    }

}