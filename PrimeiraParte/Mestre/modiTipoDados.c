#include <stdio.h>

/*
    Modificador de tipo de dado

    unsigned
        int: -2,147,483,648 a 2,147,483,647 
        unsigned: 0 a 4,294,967,285 (Apenas Positivos)
        char: -128 a 127
        unsigned char: 0 a 255

    signed:

    long:
        int: -2,147,483,648 a 2,147,483,647 
        long int: -9,223,372,036,854,775,808 a 9,223,372,036,854,775,807

        double: ±1.7E-308 a ±1.7E+308
        long double: ±3.4E-4932 a ±1.1E+4932

    short

    Combinado:
        unsigned long int: armazena mais inteiros.
*/

int main(){
    //unsigned
    int numeroSinal = 3000000000;// Valor excede o valor de um int
    unsigned int numeroSemSinal = 3000000000; //dobra o valor positivo e não tem negativo.

    printf("Número com sinal: %d\n", numeroSinal);
    printf("Número sem sinal: %u\n\n", numeroSemSinal);

    // long int
    int regularNumber = 2147483647;// valor máximo do int
    long int bigNumber = 2147483647;

    printf("Número regular (int): %d\n", regularNumber);
    printf("Número grande (long int): %ld\n", bigNumber);

    bigNumber = 2147483648;// Valor maior que o máximo de int
    printf("Número grande atualizado (long int): %ld\n", bigNumber);

    // long double
    double preciseNumber = 3.141592653589793;
    long double verypreciseNumber = 3.14159265358979323846;

    printf("Número preciso (double): %.15f\n", preciseNumber);
    printf("Número muito preciso (long double): %.21Lf\n", verypreciseNumber);

    //unsigned long int
    unsigned long int largePositiveNumber = 4000000000;
    printf("Número positivo grande: %lu/n", largePositiveNumber);
    return 0;
}