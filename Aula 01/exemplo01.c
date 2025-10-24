#include <stdio.h>

int main(){
        int numeros[101];


        for (int i = 0; i < 101; i++){
                numeros[i] = i;
        }

        for(int i = 0; i< 101; i++){
                if(numeros[i] % 2 == 0){
                        printf("%i\n",numeros[i]);
                };
        };
        return 0;
}