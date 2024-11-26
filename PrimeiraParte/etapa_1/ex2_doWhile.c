#include <stdio.h>
#include <stdlib.h>

void main(){
    int vezes = 0;
    float salario_bruto, salario_liquido, imposto;

    do{
        vezes += 1;

        printf("Digite o salário:\n");
        scanf("%f", &salario_bruto);

        if((salario_bruto >= 0) && (salario_bruto <= 999)){
            imposto = salario_bruto * 0.10;
            salario_liquido = salario_bruto - imposto;
        }
        if((salario_bruto >= 999.01) && (salario_bruto <= 1.999)){
            imposto = salario_bruto * 0.15;
            salario_liquido = salario_bruto - imposto;
        }
        if((salario_bruto >= 1.999,01) && (salario_bruto <= 9.999,00)){
            imposto = salario_bruto * 0.20;
            salario_liquido = salario_bruto - imposto;
        }
        if((salario_bruto >= 9.999,01) && (salario_bruto <= 99.999,00)){
            imposto = salario_bruto * 0.25;
            salario_liquido = salario_bruto - imposto;
        }
        if((salario_bruto >= 99.999,01)){
            imposto = salario_bruto * 0.30;
            salario_liquido = salario_bruto - imposto;
        }
        printf("\nSalario%f\n", salario_liquido);
        }while(vezes <= 15);
    }
