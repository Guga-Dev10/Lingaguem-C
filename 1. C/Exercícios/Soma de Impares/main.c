#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, troca, soma, i;

    printf ("Digite dois numeros inteiros: ");
    scanf ("%d %d", &x, &y);

    soma = 0;

    if (x > y) {
        troca = x;
        x = y;
        y = troca;
    }
    for (i = x+1; i < y; i++) {
        if (i % 2 != 0) {
            soma = soma + i;
        }
    }

    printf ("\n");
    printf ("O valor das somas dos numeros impares entre %d e %d eh: %d\n", x, y, soma);


    return 0;
}
