#include <stdio.h>
#include <string.h>

int main () {
    // Vari�veis
    int idade;
    double salario, altura;
    char sexo;
    char nome[50]; // vetor de vari�vel tipo STRING para armazenar mais de uma string

    //programa

    idade = 24;
    salario = 12000.0;
    altura = 1.85;
    sexo = 'M'; // Usa-se aspas simples
    strcpy (nome, "Gustavo Souza"); // Coloca uma vari�vel dentro do vetor String

    printf ("salario = %.2f\n", salario);
    printf ("Altura: %.2f\n", altura);
    printf ("Idade: %d\n", idade);
    printf ("Nome: %s\n", nome);
    printf ("Sexo: %c\n", sexo);


return 0;
}
