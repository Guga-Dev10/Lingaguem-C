#include <stdio.h>
#include <stdlib.h>

/* O programa ir� ler dois n�meros e descobrir qual dois � o maior e o menor e dizer se eles foram
digitados em ordem crescente ou decrescente

Para interromper a execu��o do programa o usu�rio deve digitar dois n�meros iguais

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
