#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("IDADES\n");

    char nome1[50], nome2[50];
    int idade1, idade2;
    double mediaidade;

    printf ("Dados da 1ª pessoa: \n");
    printf ("Nome: ");
    gets (nome1);
    printf ("Idade: ");
    scanf ("%d", &idade1);

    printf ("Dados da 2ª pessoa: \n");
    printf ("Nome: ");
    fseek (stdin, 0, SEEK_END); // Para que a variavel Gets não assuma nenhum outro valor, somente assuma o valor que o usuario digitar
    gets (nome2);
    printf ("Idade: ");
    scanf ("%d", &idade2);

    mediaidade = (double)(idade1 + idade2) / 2;

    printf ("A media das idades de %s e %s eh de: %.1lf anos", nome1, nome2, mediaidade);


    return 0;
}
