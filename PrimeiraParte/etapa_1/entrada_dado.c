#include <stdio.h>

void main(){
    int cadastrado, ativo, logado;
    char opcao;

    cadastrado = ativo = logado = 0;

    printf("Deseja cadastrar sua conta?\n");
    scanf(" %c", &opcao);

    if(opcao == 'S'){
        cadastrado = 1;
        printf("Conta cadastrada!\n");
    }

    printf("\nDeseja ativar sua conta?\n");
    scanf(" %c", &opcao);

    if(opcao == 'S'){
        ativo = 1;
        printf("\nConta ativada!\n");
    }

    printf("Deseja logar na sua conta?\n");
    scanf(" %c", &opcao);

    if(opcao == 'S'){
        printf("\nConta logada!\n");
        logado = 1;
    }

    if((cadastrado == 1) && ((ativo == 1) || (logado == 1))){
        printf("Seja bem vindo!\n");
    }else{
        printf("Algo deu errado...");
    }
}