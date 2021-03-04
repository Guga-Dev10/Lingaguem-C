#include <stdio.h>
#include <stdlib.h>

int main () {

    int I, X;
    printf ("Digite o tamanho do vetor: ");
    scanf ("%d", &X);

    double vet[X]; //Vetor = (Operador) <var>[<Tamanho do Vetor>]

    for (I = 0; I < X; I++) {
        printf ("Digite um numero: ");
        scanf ("%lf", &vet[I]);
    }

    printf ("\nNumeros inseridos: \n");

    for (I = 0; I < X; I++) {
        printf ("%.1lf\n", vet[I]);
    }

return 0;
}
