#include <stdio.h>
//Obs: int com int. float com float não terá perda de dados
    //Verifique os tipos
    //Use casting quando necessário (casting explícito)
    //Cuidado com a precisão (double pode melhorar a precisão)
int main(){
    // Conversão implicita (pode ocorrer perda de dados. ex: float para int. perde o decimal)
    int a = 10;
    float b = 3.5, resultado = a+b;

    printf("Resultado: %.2f\n", resultado);

    // Conversão explícita (não perde dados)
    int var_a = 10, var_b = 3;
    float quociente = (float) var_a / var_b;// força o tipo de dados armazenado

    printf("Quociente: %.2f\n", quociente);
    return 0;
}