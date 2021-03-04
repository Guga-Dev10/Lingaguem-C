#include <stdio.h>
#include <stdlib.h>

// Qual dos três números é o menor?

int main()
{
    int a, b, c, menor;

    printf ("Digite o valor de A: ");
    scanf ("%d", &a);
    printf ("Digite o valor de B: ");
    scanf ("%d", &b);
    printf ("Digite o valor de C: ");
    scanf ("%d", &c);

    if (a < b && a < c) {
        menor = a;
    }
    else if (b < a && b < c) {
        menor = b;
    }
    else {
        menor - c;
    }

    printf ("MENOR = %d", menor);

    return 0;
}
