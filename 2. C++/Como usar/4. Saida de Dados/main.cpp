#include <bits/stdc++.h>

using namespace std;

int main () {

    cout << "Bom dia" << endl;
    cout << "Boa tarde\n";

    int x, y;
    double z;
    string nome;
    char sexo;

    x = 10;
    y = 20;
    z = 2.3145;
    nome = "Gustavo";
    sexo = 'M';

    cout << x << endl;
    cout << y << endl;
    cout << fixed << setprecision(2) << z << endl;

    cout << nome << endl;
    cout << sexo << endl;

    cout << "\n";

    x = 3000;
    y = 24;

    cout << "Funcionario = " << nome <<
            " \nRecebe = " << x << " \npossui = "
            << y << " anos de idade!" << endl;

    cout << "\n";

    cout << "O funcionario " << nome << ", recebe R$"
            << x << " e possui a idade de " << y << " anos."
            << endl;



return 0;
}
