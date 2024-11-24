#include <stdio.h>
#include <stdlib.h>

void main(){
    char letra;
    int qtd_vogal_a, qtd_vogal_e, qtd_vogal_i, qtd_vogal_o, qtd_vogal_u; 

    while(letra != '.'){
        printf("Digite uma letra entre a-z:\n");
        scanf(" %c", letra);

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
        }
    }
    printf("");
}