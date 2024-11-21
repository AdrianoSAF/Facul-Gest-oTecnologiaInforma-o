#include <stdio.h>

/*
    Operadores Relacionais
    > (maior que)
    < (menor que)
    >= (maior ou igual a)
    <= (menor ou igual a)
    == (igual a)
    != (diferente de)
*/

int main(){
    int a = 10, b = 20;

    printf("a > b: %d\n", a > b);
    printf("a < b: %d\n", a < b);
    printf("a ==  b: %d\n", a == b);
    printf("a != b: %d\n", a != b);

    //Sem conversão explicita
    int x = 5;
    float y = 10;
    
    printf("x == y: %d\n", x == y);
    printf("x != y: %d\n", x != y);

    //Com conversão explicita
    //As veses será preciso
    int num = 10;
    float result = 10.0;

    int comparison = (float)num == result;

    printf("num == result: %d\n", comparison);
    return 0;
}