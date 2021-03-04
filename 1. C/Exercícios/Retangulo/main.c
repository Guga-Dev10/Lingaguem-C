#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    printf ("Retangulo\n");
    printf ("\n");

    double base, altura, area, perimetro, diagonal;

   printf ("Base do retangulo: ");
   scanf ("%lf", &base);

   printf ("Altura do retangulo: ");
   scanf ("%lf", &altura);

   area = base * altura;
   perimetro = 2 * base + 2 * altura;

    diagonal = sqrt(pow(base, 2.0) + pow(altura, 2.0));
    // sqrt = raiz quadrada
    // pow = potencia

    printf ("Area = %.4lf\n", area);
    printf ("Perimetro = %.4lf\n", perimetro);
    printf ("Diagonal = %.4lf\n", diagonal);

;return 0;
}
