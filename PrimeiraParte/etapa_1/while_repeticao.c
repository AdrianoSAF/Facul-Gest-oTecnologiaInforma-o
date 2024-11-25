#include <stdio.h>
#include <stdlib.h>

void main(){
    char letra;
    int qtd_vogal_a, qtd_vogal_e, qtd_vogal_i, qtd_vogal_o, qtd_vogal_u; 
    qtd_vogal_a = qtd_vogal_e = qtd_vogal_i = qtd_vogal_o = qtd_vogal_u = 0;
    
    while(letra != '.'){
        printf("Digite uma letra entre a-z:\n");
        scanf(" %c", &letra);

        switch(letra){
            case 'a':{
                qtd_vogal_a+=1;
                break;
            }
            case 'e':{
                qtd_vogal_e+=1;
                break;
            }
            case 'i':{
                qtd_vogal_i+=1;
                break;
            }
            case 'o':{
                qtd_vogal_o+=1;
                break;
            }
            case 'u':{
                qtd_vogal_u+=1;
                break;
            }
            default:
                printf("Letra inválida!");
        }
    }
    printf("Quantidade de a: %d\n\
    Quantidade de e: %d\n\
    Quantidade de i: %d\n\
    Quantidade de o: %d\n\
    Quantidade de u: %d\n", qtd_vogal_a, qtd_vogal_e, qtd_vogal_i, qtd_vogal_o, qtd_vogal_u);
}