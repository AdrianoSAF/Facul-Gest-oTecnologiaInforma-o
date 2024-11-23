#include <stdio.h>

void main(){
    float nota;

    printf("Digite sua nota: ");
    scanf("%f", &nota);

    if(nota >= 0 && nota <=10){
        if(nota >= 5)
            printf("Parabéns! você foi aprovado");
        else
            printf("Não desista, não foi dessa vez");
    }else
        printf("Número inválido");
}