#include <stdio.h>
#include <string.h>


int main(){

    char funcionarios[5][50];
    char cargo[5][30];
    float salario[5];
    char c;

    for(int i=0; i<5;i++){
        printf("Digite o nome do funcionário %i: ", i+1);
        fgets(funcionarios[i], 49, stdin);

        printf("Digite o cargo do funcionário %i: ", i+1);
        fgets(cargo[i], 29, stdin);

        printf("Digite o salario do funcionário %i: ", i+1);
        scanf_s("%f", &salario[i]);
        c = getchar();
    }

    //FAZER 2 FOR PARA PEGAR O INDICE DO FUNCIONARIO E RODAR PELO VETOR COMPARANDO, ELE NÃO PODE COMPARAR COM ELE MESMO E NEM COM INDICES MENOR POIS ESSE JÁ FORAM COMPARADOS

    char *aux;
    int indiceAux;
    int iguais[5] = {0,0,0,0,0};
    for(int i=0; i<5; i++){
        aux = cargo[i];
        indiceAux = i;
        for(int j=i+1; j<5; j++){
            if(strcmp(aux, cargo[j]) == 0){
                iguais[j] = indiceAux;
                // printf("ID:%i", j);
                // printf("Funcionario %i \nNome: %s Cargo: %s Salario: %f\n",i+1,funcionarios[i], cargo[i], salario[i]);
                // printf("Funcionario %i \nNome: %s Cargo: %s Salario: %f\n",i+1,funcionarios[j], cargo[j], salario[j]);
            }
        }
    }

    for(int i = 0;i<5; i++){
        printf("%i", iguais[i]);
        if(iguais[i] != 0){
            // printf("iguaol:%i", iguais[i]);
        }

    }
    return 0;
}