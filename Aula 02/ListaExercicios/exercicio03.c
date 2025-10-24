#include <stdio.h>

int main(){

    float numeros[5];
    float menor, maior;

    for(int i = 0;i<5; i++){
        printf("Informe o numero %i: ", i+1);
        scanf_s("%f", &numeros[i]);


        if(i == 0){
            maior = menor = numeros[i];
        }else{
            if(numeros[i] > maior){
                maior = numeros[i];
            }
            if(numeros[i] < menor){
                menor = numeros[i];
            }
        }
    }

    printf("Menor numero: %2.f \nMaior numero: %2.f", menor, maior);


    return 0;
}