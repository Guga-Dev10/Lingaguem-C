#include <bits/stdc++.h>

/* O programa lê dois valores (X, Y) e usa os numeros impares entre eles para
calcular uma adição somente com numeros impares.
*/

using namespace std;

int main()
{
    cout << "Soma de numeros impares" << endl;

    double x, y, soma, troca;

    cout << "Digite dois numeros aleatorios: " << endl;
    cin >> x;
    cin >> y;
    cout << "\n";

    troca = 0;
    if (x > y) {
        troca = x;
        x = y;
        y = troca;
    }

    soma = 0;
    for (int i = x+1; i < y; i++) {
        if (i % 2 != 0) {
            soma = soma + i;
        }
    }

    cout << "Valor da soma dos negativos: " << soma << endl;

    return 0;
}
