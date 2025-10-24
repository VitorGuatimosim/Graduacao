#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    int numero;
    char prioridade;
    struct no *proximo;
}No;


void inserirComPrioridade(No **lista, No *novo){
    No *aux;

    if((*lista)->prioridade == 'C'){
        novo->numero = 301;
        novo->proximo = *lista;
        *lista = novo;
        aux = *lista;
    }else{
        aux = *lista;
        while (aux->prioridade == 'P' && aux->proximo){
            if(aux->proximo->prioridade == 'P'){
                aux = aux->proximo;
            }else{
                break;
            }
        }
    
        novo->numero = aux->numero + 1;
        novo->proximo = aux->proximo;
        aux->proximo = novo;
    }   
};


void inserirSemPrioridade(No **lista, No *novo){
    No *aux;
    aux = *lista;
    while(aux->proximo != NULL){
        aux = aux->proximo;
    }
    if(aux->proximo == NULL && aux->prioridade == 'P'){
        novo->numero = 1;
    }else{
        novo->numero = aux->numero + 1;
    }
    aux->proximo = novo;       
}


void inserir(No **lista){
    char prioridade;
    printf("Por favor informe a prioridade 'P'(Priotário) ou 'C'(Comum):");
    scanf(" %c", &prioridade);
    
    if(prioridade == 'C' || prioridade == 'P'){

        No *novo = malloc(sizeof(No));
        

        if(novo){      
            novo->prioridade = prioridade;
            novo->proximo = NULL;
            if(*lista == NULL){
                if(prioridade == 'P'){
                    novo->numero = 301;
                }else if(prioridade == 'C'){
                    novo->numero = 1;           
                }
                *lista = novo;
            }else{
                if(prioridade == 'C'){
                    inserirSemPrioridade(lista, novo);
                }else if(prioridade == 'P'){
                    inserirComPrioridade(lista, novo);                
                }
            }

            printf("Cliente inserido na fila com sucesso!");
            
        }else{
            printf("Erro ao alocar a memória!!\n");
        }
    }else{
        printf("Valor Inválido!");
    }
};


void imprimirFilaCliente(No *no){
    printf("\n\tFila: \n");
    while(no){
        printf("\tNumero: %i; Prioridade: %c\n", no->numero, no->prioridade);
        no = no->proximo;
    }
    printf("\n\n");
};


No* atenderCliente(No **lista){
    No *atender;

    if(*lista){
        atender = *lista;
        *lista = atender->proximo;

        printf("\nFicha %i, Prioridade %c, sua vez de ser atendido!!", atender->numero, atender->prioridade);
    }else{
        printf("Sem clientes na fila no momento!!!\n");
    }
    return atender;
};


int main(){
    int escolha = 0, teste;
    No *lista = NULL;

    do{
        printf("\n======================================================");
        printf("\nBEM VINDO AO SISTEMA DE FILAS XYZ\n");
        printf("======================================================");
        printf("\n1. Adicionar Cliente");
        printf("\n2. Mostrar Clientes na fila");
        printf("\n3. Chamar Cliente ");
        printf("\n4. Sair");
        printf("\nEscolha:");
        scanf("%i", &escolha);
        
        switch(escolha){
            case 1:
                inserir(&lista);
                break;
            case 2:
                imprimirFilaCliente(lista);
                break;
            case 3:
                atenderCliente(&lista);
                break;
            case 4:
                break;
            default:
                printf("\nValor inválido!\n");
                break;
        }

    }while(escolha != 4);
    return 0;
}