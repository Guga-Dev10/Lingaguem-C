#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hora;
    printf ("Digite uma hora do dia: ");
    scanf ("%d", &hora); // N�o esquecer de usar o "&" junto com a vari�vel para a atribui��o de valor pelo usu�rio

    if (hora >= 0 && hora < 12) {
        printf ("Bom dia!");
    }
    else if (hora >= 12 && hora < 18) {
        printf ("Boa tarde");
    }
    else if (hora >= 18 && hora < 24){
        printf("Boa noite!");
    }
    else {
        printf ("HORARIO INVALIDO!!");
    }

    return 0;
}
