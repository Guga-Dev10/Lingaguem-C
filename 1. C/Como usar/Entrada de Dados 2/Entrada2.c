#include <stdio.h>
#include <string.h>


// Function:
void limpar_entrada () {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

int main()
{
    int idade1, idade2;
    char nome1[50], nome2[50];

    printf ("Digite o valor da idade: ");
    scanf ("%d", &idade1);

    printf ("Digite o nome da pessoa: ");
    limpar_entrada(); // Function para limpar a entrada de dados usada antes do "FGETS"

    fgets(nome1, 50, stdin); // Comando "FGETS" para entrar com mais de uma palavra na variável caractere
                            // STDIN = standart input = entrada padrão (feita pelo usuário)
    strtok (nome1, "\n");
    // STRTOK = usado para que não haja quebra de linha automática na execução do FGETS

    // Segunda entrada de dados

    printf ("Digite o valor da idade2: ");
    scanf ("%d", &idade2);

    printf ("Digite o nome da pessoa2: ");
    limpar_entrada();

    fgets(nome2, 50, stdin);
    strtok(nome2, "\n");



    printf("IDADE = %d\n", idade1);

    printf ("NOME = %s\n", nome1);

    printf("IDADE = %d\n", idade2);

    printf ("NOME = %s\n", nome2);

    return 0;
}
