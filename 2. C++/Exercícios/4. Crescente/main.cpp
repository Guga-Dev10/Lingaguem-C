#include <bits/stdc++.h>

/* O programa lê uma quantidade indeterminada de duplas de numeros (X, Y), identifica
se eles foram escritos em ORDEM CRESCENTE OU DECRESCENTE e termina a execução caso dois
numeros digitados sejam iguais.
*/

using namespace std;

int main()
{
    int x, y, troca;

    cout << "Numeros em ordem crescente!" << endl;
    cout << "\n";

    cout << "Digite dois numeros: " << endl;
    cin >> x;
    cin >> y;
    cout << "Numeros digitados: " << x << ", " << y << endl;


    while (x != y) {
        if (x > y) {
          cout << "Ordem Descrescente\n" << endl;
        }
        else if (x < y) {
            cout << "Ordem Crescente\n" << endl;
        }
        cout << "Digite dois numeros: " << endl;
        cin >> x;
        cin >> y;
        cout << "Numeros digitados: " << x << ", " << y << endl;

        cout << "\n";
    }

    cout << "Numeros digitados sao iguais ----- Fim do programa!!" << endl;

    return 0;
}
