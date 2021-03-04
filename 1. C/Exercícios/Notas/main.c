#include <stdio.h>
#include <stdlib.h>

/* O exercicio pede que haja uma media entre as duas notas semestrais de um aluno.
As notas devem ficar entre 0 e 10. Qualquer valor entre esses dois numeros não sera
aceito.
*/

int main()
{
    double nota1, nota2, notafinal;

    printf ("Digite a primeira nota: ");
    scanf ("%lf", &nota1);
    printf ("Digite a segunda nota: ");
    scanf ("%lf", &nota2);

    notafinal = (nota1 + nota2) / 2;

    if (nota1 < 0 || nota1 > 10 || nota2 < 0 || nota2 > 10){
        printf ("NOTA INVALIDA!!!\n");
    }
    else if (notafinal >= 0 && notafinal < 6) {
        printf ("Aluno Reprovado!! Media = %.1lf\n", notafinal);
    }
    else if (notafinal >= 6 && notafinal <= 10) {
        printf ("Aluno Aprovado!! Media = %.1lf\n", notafinal);
    }
    return 0;
}
