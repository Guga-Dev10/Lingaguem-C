#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Programa para ler um n�mero indeterminado de Idades, caso o n�mero seja negativo deve-se exclu�-lo da soma.
*/

int main()
{
    int x, idade, soma;
    double media;

    printf("Digite as idades:\n");
    scanf ("%d", &idade);

    x = 0;
    soma = 0;

    if (idade < 0) {
        printf ("Impossivel calcular\n");
    }
    else {
        while (idade >= 0) {
            soma = soma + idade;
            scanf ("%d", &idade);
            x = x + 1;
        }

    }

    media = (double) soma / x;

    printf ("A soma das idades eh: %d\n", soma);
    printf ("a media das idades eh: %.2lf\n", media);

    return 0;
}
