#include<stdio.h>

int verificaPar(int numero);

int main(){

    printf("Informe um numero: ");
    int numero;
    scanf_s("%i", &numero);

    int res = verificaPar(numero);
    if(res == 1){
        printf("PAR!");
    }else{
        printf("IMPAR!");
    }

}

int verificaPar(int numero){
    if(numero % 2 == 0){
        return 1;
    }else{
        return 0;
    }
}
