#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, n, soma;
    double media;

    printf("Vetor de quantas posicoes: ");
    scanf ("%d", &n);

    int vet [n];

    soma = 0;

    for (int i = 0; i < n; i++) {
        printf ("Digite um numero: ");
        scanf ("%d", &vet[i]);
        soma = soma + vet[i];
    }

    printf ("\nValores\n");
    for (int i = 0; i < n; i++) {
        printf ("Posicao %d = %d\n", i,vet[i]);
    }

    media = (double) soma / n;

    printf ("\nSoma = %d\n", soma);
    printf ("Media = %.2lf\n", media);

    return 0;
}
