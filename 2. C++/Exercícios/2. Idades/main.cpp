#include <bits/stdc++.h>

/* Fazer um programa para ler o nome e idade de duas pessoas. Ao final deve-se ser mostrado os nomes, as idades e a media
entre as idades, com uma casa decimal.
*/

using namespace std;

int main()
{
    int idade1, idade2, soma;
    double media;
    string nome1, nome2;

    cout << "Nomes, idades e media de idades" << endl;
    cout << "\n";

    cout << "Digite o nome da primeira pessoa: ";
    getline(cin, nome1);
    cout << "Digire a idade da primeira pessoa: ";
    cin >> idade1;

    cout << "\n";
    cout << "Digite o nome da segunda pessoa: ";
    cin.ignore(INT_MAX, '\n');
    getline(cin, nome2);
    cout << "Digite a idade da segunda pessoa";
    cin >> idade2;
    cout << "\n";

    soma = idade1 + idade2;
    media = (double) (idade1 + idade2) / 2;

    cout << "O " << nome1 << " tem " << idade1 << " anos.\n"
         << "O " << nome2 << " tem " << idade2 << " anos.\n"
         << "\n" << "A Soma das idades eh: " << soma << "\n"
         << "A media das idades eh de: " << media << " anos." << endl;




    return 0;
}
