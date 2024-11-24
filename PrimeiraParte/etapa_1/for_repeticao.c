#include <stdio.h>
#include <stdlib.h>

void main(){
    int numero, soma_par, soma_impar, cont, tamanho_lista;
    soma_par = soma_impar = 0;

    printf("Informe a quantidade de números que serão inseridos:\n");
    scanf("%d", &tamanho_lista);

    for(cont=1;cont<=tamanho_lista;cont++){
        printf("Digite 1 número\n");
        scanf(" %d", &numero);

        if(numero%2 == 0)
            soma_par += numero;
        else
            soma_impar += numero;
    }
    printf("A soma dos números pares é %d\n\
    A soma dos números impares é %d\n\
    ", soma_par, soma_impar);
}