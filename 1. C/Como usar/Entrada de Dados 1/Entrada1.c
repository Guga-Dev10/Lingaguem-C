#include <stdio.h>
#include <string.h>

int main()
{
    int idade;
    double salario, altura;
    char nome[50];

    printf ("Digite o valor da idade: ");
    scanf ("%d", &idade); // scanf = entrada de dados feita pelo usu�rio

    printf ("Digite o valor do salario: ");
    scanf ("%lf", &salario);

    printf ("Digite o valor da altura: ");
    scanf ("%lf", &altura);

    printf ("Digite o nome da pessoa: ");
    scanf ("%s", nome); // quando se trata de vetor de caracteres n�o h� a necessidade de se usar o "&"
    // O SCANF poder� identificar a vari�vel "NOME" somente se nela for inserida uma �nica palavra e sem espa�os
    // Ele n�o ir� identificar mais de uma palavra

    printf("IDADE = %d\n", idade);
    printf("SALARIO = %.2lf\n", salario);
    printf("ALTURA = %.2lf\n", altura);
    printf ("NOME = %s\n", nome);

    return 0;
}
