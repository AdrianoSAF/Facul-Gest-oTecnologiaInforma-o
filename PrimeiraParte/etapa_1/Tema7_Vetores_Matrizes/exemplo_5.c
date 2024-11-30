#include <stdio.h>
#include <stdlib.h>

void main(){

    float nota[20], num_not, sum, avg;
    int index;

    for(index=0;index<20;index++){
        // Armazena todas as notas
        scanf("%f", &num_not);
        nota[index] = num_not;

        // Soma as notas
        sum = sum+nota[index];
    }

    // Calcula a média
    avg = (sum/20);
    printf("média: %.2f", avg);

    // Percorre a lista de notas
    for(index=0;index<20;index++){
        // Verifica qual nota é Maior ou igual a média
        if(nota[index]>=avg)
            printf(" %.2f", nota[index]);
    }

    // int cont_letra[5];
    // char letra;

    // printf("Digite uma letra de A - Z.\n");
    // scanf(" %c", &letra);

    // while(letra != '.'){
    //     switch(letra){
    //         case 'A':
    //             cont_letra[0];
    //         break;

    //         case 'E':
    //             cont_letra[1];
    //         break;

    //         case 'I':
    //             cont_letra[2];
    //         break;

    //         case 'O':
    //             cont_letra[3];
    //         break;

    //         case 'U':
    //             cont_letra[4];
    //         break;

    //         default: 
    //             printf("");
    //     }

    //     printf("\nDigite uma letra de A - Z.\n");
    //     scanf("%c", &letra);
    // };
    // printf("Vetor: %s", cont_letra);
}

// Laço para ler somente os caracteres
// for (ind=0;ind<5;ind++) {
//     scanf ("%c",&nome[ind]);
//     getch();//Impede de ler o \o
// }