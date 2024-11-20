#include <stdio.h>

int main(){
    int idade, matricula_aluno;
    float altura;
    char nome_aluno[50];
    
    printf("Digite a idade do aluno: \n");
    scanf("%d", &idade);

    printf("Digite a altura do aluno: \n");
    scanf("%f", &altura);

    printf("Digite o nome do aluno: \n");
    scanf("%s", &nome_aluno);

    printf("Digite a matricula do aluno: \n");
    scanf("%d", &matricula_aluno);

    printf("cadastro do aluno:\n\n Nome: %s\n Idade: %d\n Matricula: %d\n", nome_aluno, idade, matricula_aluno);

}