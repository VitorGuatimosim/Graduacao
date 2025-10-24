#include<stdio.h>

int main(){

    for(int i = 0; i <= 100; i++){
        if(i % 2 == 0){
            printf("%i e par!!\n", i);
        }else{
            printf("%i e impar!!\n", i);
        }
    }
}