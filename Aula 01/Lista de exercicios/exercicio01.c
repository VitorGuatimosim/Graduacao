#include <stdio.h>

int main(){
    char livros[3][100];
    char autor[3][50];
    char anoPublicacao[3][5];
    int escolha = 0;


    for(int i = 0; i < 3; i++){
        printf("Digite o titulo do livro %i: ", i+1);
        fgets(livros[i], sizeof(99), stdin) != NULL;
    
        printf("Digite o autor do livro %i: ", i+1);
        fgets(autor[i], sizeof(49), stdin) != NULL;

        printf("Digite o ano de publicacao do livro %i: ", i+1);
        fgets(anoPublicacao[i], sizeof(4), stdin) != NULL;

        printf("\n");
    }

    printf("Livros cadastrados!!!\n");

    for(int i=0; i<3; i++){
        printf("Titulo: %s\nAutor: %s\nAno de publicacao: %s\n", livros[i], autor[i], anoPublicacao[i]);
    }
    

    // while(escolha != 3){
    //     printf("MENU");
    //     printf("\n1.Cadastrar Livro");
    //     printf("\n2.Listar Livros cadastrados");
    //     printf("\n3.Sair");
    //     printf("\nEscolha: ");

    //     scanf_s("%i", &escolha);

    //     switch(escolha){
    //         case 1:
    //             printf("Digite o titulo do livro: ");
    //             scanf_s("%s", &livros)
    //             break;

    //     }
    // }
    


    return 0;
}