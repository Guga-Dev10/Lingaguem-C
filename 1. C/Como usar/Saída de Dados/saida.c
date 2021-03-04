#include <stdio.h>
#include <string.h>

int main () {

    int idade;
    double salario;
    char nome[50];
    char sexo;

    idade = 24;
    salario = 3200;
    strcpy(nome, "Gustavo Souza");
    sexo = 'M';

    printf ("O funcionario: %s, tem %i anos, sexo %c, possui um salario de: %.2lf reais", nome, idade, sexo, salario);

return 0;
}
