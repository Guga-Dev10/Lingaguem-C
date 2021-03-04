#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Fazer uma tabuada para um determinado valor X, de 1 a 10

int main()
{
    int i, n, produto;
    printf("Digite o valor da multipicacao: ");
    scanf ("%d", &n);

    produto = 0;
    for (i = 1; i <= 10; i++) {
        produto = i * n;
        printf ("%d X %d = %d\n", i, n, produto);
    }

    return 0;
}
