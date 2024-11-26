#include <stdio.h>
#include <stdlib.h>

void main(){
    int vezes = 0;
    float salario_bruto, salario_liquido, imposto;

    do{
        vezes += 1;

        printf("Digite o salário:\n");
        scanf("%f", &salario_bruto);

        if(salario_bruto <= 999){
            imposto = salario_bruto * 0.10;
            salario_liquido = salario_bruto - imposto;
        }else
            if((salario_bruto > 999) && (salario_bruto <= 1.999)){
                imposto = salario_bruto * 0.15;
                salario_liquido = salario_bruto - imposto;
            }else
                if((salario_bruto > 1.999) && (salario_bruto <= 9.999)){
                    imposto = salario_bruto * 0.20;
                    salario_liquido = salario_bruto - imposto;
                }else
                    if((salario_bruto > 9.999) && (salario_bruto <= 99.999)){
                        imposto = salario_bruto * 0.25;
                        salario_liquido = salario_bruto - imposto;
                    }else
                        if((salario_bruto > 99.999)){
                            imposto = salario_bruto * 0.30;
                            salario_liquido = salario_bruto - imposto;
                        }
                    printf("\nSalario: %f\n", salario_liquido);
        }while(vezes <= 15);
    }

// // Código em Linguagem C - Comando DO WHILE

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     float salbruto, salliquido, imposto, totbruto=0, totliquido=0,totimposto=0;
//     int contfunc=1;
//     do
//     {
//         printf ("Digite o salário bruto: ");
//         scanf("%f",&salbruto);
//             if (salbruto >999)
//             imposto = salbruto*0.10;
//             else
//                 if (salbruto >1999)
//                 imposto = salbruto*0.15;
//                 else
//                     if (salbruto >9999)
//                     imposto = salbruto*0.20;
//                     else
//                         if (salbruto >99999)
//                         imposto = salbruto*0.25;
//                         else
//                         imposto = salbruto*0.30;
//                         salliquido = salbruto - imposto;
//         printf ("Salário Liquido: %.2f \n",salliquido);
//         totbruto = totbruto + salbruto;
//         totliquido = totliquido + salliquido;
//         totimposto = totimposto + imposto;
//         contfunc++;
//     } while (contfunc<=15);
//     printf ("TOT salário bruto : %.2f \n",totbruto);
//     printf ("TOT salário líquido : %.2f \n",totliquido);
//     printf ("TOT imposto : %.2f \n",totimposto);
//     return 0;
// }
