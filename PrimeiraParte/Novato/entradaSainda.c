/*
            Entrada e Saídas em C

*Basico:
    . printf
    . scanf

                Outras funções

* Outras funções para entradas de dados
    . gets
    . fgets
    . getc
    . getch

* Outras funções para saída de dados
    . putc
    . puts
    . fputs
    . putchar

                Manipulação de arquivos

* Leitura de dados em arquivos
    . fscanf
    . fgets

* Escrita de dados em arquivos
    . fprintf
    . fputs

                Imprimir variáveis
    1) %d: Imprime um inteiro no formato decimal.
    2) %i: Equivalente a %d.
    3) %f: Imprime um número de ponto flutuante no formato padrão.
    4) %e: Imprime um número de ponto flutuante na notação científica.
    5) %c: Imprime um único caractere.
    6) %s: Imprime uma cadeia (string) de caracteres.
*/
#include <stdio.h>

int main(){
    // 
    float altura = 1.75;
    char nome[20] = "Adriano";

    printf("Altura: %f\n", altura);
    printf("Nome: %s\n", nome);

    // Entrada
    int idade;
    char nome2;

    printf("Idade: %d\n", idade);

    printf("Insira sua idade:\n");
    scanf("%d", &idade);
    printf("Idade: %d", idade);
    
    printf("\nDigite seu segundo nome:\n");
    scanf(" %c", &nome2);//precisa de um espaço quando é string se não dá erro
    printf("\nSegundo nome: %c", nome2);
    return 0;
}

// Entrada padrão = Teclado


