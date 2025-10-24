#include<stdio.h>

int main(){
    int num1, num2, num3;
    float media;

    printf("informe a nota 1: ");
    scanf_s("%i", &num1);
    
    printf("informe a nota 2: ");
    scanf_s("%i", &num2);
    
    printf("informe a nota 3: ");
    scanf_s("%i", &num3);

    media = (num1 + num2 + num3) / 3;

    printf("Media final das notas n1: %i, n2: %i, n3: %i eh = %f", num1, num2, num3, media);

    return 0;
}