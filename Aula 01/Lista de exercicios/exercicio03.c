#include <stdio.h>

int main(){

    char aluno[4][50];
    int idade[4];
    char c;


    for (int i = 0; i < 4; i++){
        printf("\nNome do aluno %i: ", i+1);
        fgets(aluno[i], 49, stdin);

        printf("Idade do aluno %i: ", i+1);
        scanf_s("%i", &idade[i]);
        c = getchar();
    }

    for(int i = 0; i<4; i++){
        if(idade[i] >= 18){
            printf("Aluno %i \nNome: %s Idade: %i\n", i+1,aluno[i],idade[i]);
        }
    }
    return 0;
}