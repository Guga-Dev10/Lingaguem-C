#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m, n;

    cout << "Diagonal principal" << endl;
    cout << "\n";
    cout << "Qual a quantidade de linhas e colunas da matriz: ";
    cin >> n;

    int matriz [n][n];

    cout << "\n";

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> matriz [i][j];
        }
    }

    cout << "\n";
    cout << "Elementos da matriz: \n";

     for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matriz [i][j] << ", ";
        }
        cout << endl;
    }

    cout << endl;
    cout << "Diagonal principal: \n";

    for (int i = 0; i < n; i++) {
        cout << matriz [i][i] << " ";
    }
    cout << "\n";
    cout << "\n";
    cout << "Quantidade de numeros negativos: ";

    int soma;
    soma = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matriz[i][j] < 0) {
                soma++;
            }
        }
    }
    cout << soma;
    cout << "\n";

    return 0;
}
