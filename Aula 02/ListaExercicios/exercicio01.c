#include <stdio.h>

int main(){
    
    int numeros[5];

    for(int i = 0; i<5; i++){
        printf("Informe o numero %i:", i);
        scanf_s("%i", &numeros[i]);
    }

    for(int i = 4; i>=0; i--){
        printf("%i", numeros[i]);
    }
    

    return 0;
}