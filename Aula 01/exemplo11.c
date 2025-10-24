#include <stdio.h>

void imprimirMatriz(int linhas, int colunas, int matriz[linhas][colunas]);

int main(){
    int matriz[3][2] = {{1,2}, {3,4}, {5,6}};

    // imprimirMatriz(3,2,matriz);

    int elemento = matriz[1][0];
    matriz[1][0] = 10;

    // imprimirMatriz(3,2,matriz);

    //SOMA DE MATRIZ
    int matrizA[2][2] = {{1,2}, {3,4}};
    int matrizB[2][2] = {{5,6}, {7,8}};
    int matrizC[2][2];

    for(int i=0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }
    imprimirMatriz(2,2,matrizC);

    return 0;
}

// IMPRIME A MATRIZ NA TELA
void imprimirMatriz(int linhas, int colunas, int matriz[linhas][colunas]){
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            printf(" %i", matriz[i][j]);
        }
        printf("\n");
    }
}