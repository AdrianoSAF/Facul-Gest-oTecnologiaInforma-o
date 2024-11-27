#include <stdio.h>
#include <stdlib.h>

void main(){
    int cont_letra[5];
    char letra;

    printf("Digite uma letra de A - Z.\n");
    scanf(" %c", &letra);

    while(letra != '.'){
        switch(letra){
            case 'A':
                cont_letra[0];
            break;

            case 'E':
                cont_letra[1];
            break;

            case 'I':
                cont_letra[2];
            break;

            case 'O':
                cont_letra[3];
            break;

            case 'U':
                cont_letra[4];
            break;

            default: 
                printf("");
        }

        printf("\nDigite uma letra de A - Z.\n");
        scanf("%c", &letra);
    };
    printf("Vetor: %s", cont_letra);
}