#include <bits/stdc++.h>

// Qual é o menor de três números?

using namespace std;

int main()
{
    int n1, n2, n3;

    cout << "Menor dos tres numeros " << endl;
    cout << "\n";

    cout << "Digite o primeiro numero: ";
    cin >> n1;
    cout << "Digite o segundo numero: ";
    cin >> n2;
    cout << "Diggite o terceiro numero: ";
    cin >> n3;
    cout << "\n";

    if (n1 < n2 && n1 < n3) {
        cout << "Menor: " << n1 << endl;
    }
    else if (n2 < n1 && n2 < n3) {
        cout << "Menor: " << n2 << endl;
    }
    else {
        cout << "Menor: " << n3 << endl;
    }


    return 0;
}
