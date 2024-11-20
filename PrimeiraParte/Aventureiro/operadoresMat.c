#include <stdio.h>

int main(){
    /*
    Operadores matemáticos:
    Soma (+)
    Subtração (-)
    Multiplicação (*)
    Divisão (/)

    Operadores de atribuição:
    Atribuição Simples (=)
    Atribuição Com soma (+=)
    Atribuição Com Subtração (-=)
    Atribuição Com Multiplicação (*=)
    Atribuição Com Divisão (/=)

    Operadores de incremento e decremento
    Incremento (++)
    Decremento (--)

    Pós-incremento
    resultado = numero1++ (o resultado recebe o numero 1 depois é incrementado +1 no numero1)
    
    Pré-incremento
    resultado = ++numero1 (primeiro incrementa 1 ao numero1 e depois atribui o resultado ao resultado)
    */

   int numero1, numero2;
   int soma, sub, mult, div;

   printf("Digite o número 1:\n");
   scanf(" %d",&numero1);

   printf("Digite o número 2:\n");
   scanf("%d",&numero2);

   soma = numero1 + numero2; //Operação soma
   sub = numero1 - numero2; //Operação subtração
   mult = numero1 * numero2; //Operação multiplicação
   div = numero1 / numero2; //Operação divisão

    printf("Soma: %d\n\
    Subtração: %d\n\
    Multiplicação: %d\
    Divisão: %d", soma, sub, mult, div);

    int num1 = 10, num2, resultado;

    resultado = 10;
    printf("Resultado: %d\n", resultado);

    resultado += 20;
    printf("Resultado: %d\n", resultado);

    resultado -= num1;
    printf("Resultado: %d\n", resultado);

    resultado *= 5;
    printf("Resultado: %d\n", resultado);

    resultado /= 2;
    printf("Resultado: %d\n", resultado);

    int var_num1 =1, var_num2 = 1, resultado_pos_incremento;

    printf("Antes Incremento: %d\n", var_num1);

    var_num1++;
    printf("Após Incremento: %d", var_num1);

    resultado_pos_incremento = var_num2++;
    printf("Após Incremento: %d", var_num1);
}