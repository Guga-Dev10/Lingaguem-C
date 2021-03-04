#include <stdio.h>
#include <stdlib.h>

int main () {

    int x, soma;

    printf ("Digite um numero: ");
    scanf ("%d", &x);

    soma = 0;
    while (x != 0) {
            soma = soma + x;
            printf ("Digite outro numero: ");
            scanf ("%d", &x);
    }

    printf ("A soma e: %d\n", soma);

return 0;
}
