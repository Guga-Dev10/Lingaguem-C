#include <stdio.h>
#include <stdlib.h>

int main () {

    int I, N, X, soma;

        printf ("Digite um numero: ");
        scanf ("%d", &N);

        soma = 0;
        for (I = 1; I <= N; I++) {
            printf ("Digite um numero: ");
            scanf ("%d", &X);
            soma = soma + X;
        }
        printf ("Soma: %d", soma);

return 0;
}
