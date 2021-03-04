#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Fazer um programa para ler os três coeficientes de uma equação de segundo grau. Usando a fórmula de Báskara,
calcular e mostrar os valores das raizes x1 e x2 da equação com quatro casas decimais. Se a equação nao possuir raízes reais
mostrar uma mensagem
*/

int main()
{
    printf("Hello world!\n");

    double a, b, c, delta, x, x1, x2;

    printf ("Digite o valor de 'A': ");
    scanf ("%lf", &a);

    printf ("Digite o valor de 'B': ");
    scanf ("%lf", &b);

    printf ("Digite o valor de 'C': ");
    scanf ("%lf", &c);

    delta = pow(b, 2.0) - 4 * a * c;

    printf ("DELTA = %.2lf\n", delta);

    if (delta < 0) {
        printf ("Delta NEGATIVO!!\n");
    }
    else if (a == 0 ){
        printf ("Valor de A igual a zero!!\n");
    }
    else {
        x1 = (- b + sqrt(delta)) / 2 * a;
        x2 = (- b - sqrt(delta)) / 2 * a;
        printf ("Valor do x1 = %.4lf\n", x1);
        printf ("Valor do x2 = %.4lf\n", x2);
    }



    return 0;
}
