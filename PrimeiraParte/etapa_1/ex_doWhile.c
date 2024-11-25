#include <stdio.h>
#include <stdlib.h>

void main(){
    int num, sucessor, antecessor;

    do{
        printf("\nDigite um número:\n");
        scanf("%d", &num);

        if(num != 0){
            if(num % 2 == 0){
                sucessor = num + 1; 
                printf("o sucessor do número %d é: %d\n", num, sucessor);
            }else{
                antecessor = num - 1; 
                printf("o antecessor do número %d é: %d\n", num, antecessor);
            }
        }

    }while(num != 0 || num != 9);
}
