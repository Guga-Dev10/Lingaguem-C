#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/* Fazer um programa para ler nome, idade, altura de N pessoas. Mostrar na tela a altura media das pessoas,
e mostrar a porcentagem de pessoas com menos de 16 anos e os nomes dessas pessoas.
*/

//  NÃO ESTÁ FAZENDO A SOMA NA ESTRUTURA FOR

int main()
{
    int n, menores;
    double soma, media;

    printf("Quantas pessoas serao digitadas: ");
    scanf ("%d", &n);

    char nome [n] [50];
    int idade[n];
    double altura[n];

    for (int i = 0; i < n; i++) {
        printf ("Digite os dados da %da pessoa: \n", i+1);
        printf ("Nome: ");
        fseek (stdin, 0 , SEEK_END);
        fgets (nome[i], 50, stdin);
        strtok (nome[i], "\n");
        printf ("Idade: ");
        scanf ("%d", &idade[i]);
        printf ("Altura: ");
        scanf ("%lf", &altura);
    }

    soma = 0;
    media = 0;

    for (int i = 0; i < n; i++) {
        soma = soma + altura[i];
    }

    media = soma / n;

    printf ("\nMedia das alturas = %.2lf\n", media);

    return 0;
}
