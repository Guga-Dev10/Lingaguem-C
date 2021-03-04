#include <bits/stdc++.h>

/* O programa lê o nome, a idade e altura de N pessoas. Depois mostra na tela a altura, a idade media
e a porcentagem de pessoas menores de idade (18 anos) e seus nomes.
*/

using namespace std;

int main()
{
    int n, cont;
    double somaaltura, mediaaltura, porcentagem;

    cout << "Nome, idade e altura" << endl;
    cout << "\n";

    cout << "Digite a quantidade de pessoas que serao inseridas: ";
    cin >> n;
    cout << "\n";

    string nome[n];
    int idade[n];
    double altura[n];

    for (int i = 0; i < n; i++) {
        cout << "Digite os dados da " << i+1 << "a pessoa: \n";
        cout << "Nome:";
        cin.ignore(INT_MAX, '\n');
        getline(cin, nome[i]);
        cout << "Idade: ";
        cin >> idade[i];
        cout << "Altura: ";
        cin >> altura[i];
        cout << "\n";
    }

    somaaltura = 0;

    for (int i = 0; i < n; i++) {
        somaaltura = somaaltura + altura[i];
    }

    mediaaltura = somaaltura / n;
    cout << "\n";
    cout << "Soma das alturas: " << somaaltura << endl;
    cout << fixed << setprecision(2) <<
            "Media das alturas: " << mediaaltura << "\n" << endl;
    cout << "\n";

    cout << "Pessoas menores de idade: " << endl;

    cont = 0;

    for (int i = 0; i < n; i++) {
        if (idade[i] < 18) {
            cont++;
            cout << "Nome: " << nome[i] << ", " << idade[i] << " anos" << endl;
        }
    }

    porcentagem = (double) cont * 100 / n;

    cout << "Porcentagem de pessoas menores de idade: " << porcentagem << "%" << endl;

    return 0;
}
