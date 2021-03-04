#include <stdio.h>
#include <stdlib.h>

/* O programa irá ler dois números e descobrir qual dois é o maior e o menor e dizer se eles foram
digitados em ordem crescente ou decrescente

Para interromper a execução do programa o usuário deve digitar dois números iguais

*/

int main()
{
    int x, y;

    printf("Digie dois numeros: \n");
    scanf ("%d", &x);
    scanf ("%d", &y);

    while (x != y) {
        if (x < y) {
            printf ("Crescente\n");
        }
        else {
            printf ("Decrescente\n");
        }

        printf("Digie dois numeros: \n");
        scanf ("%d", &x);
        scanf ("%d", &y);
    }

    return 0;
}
