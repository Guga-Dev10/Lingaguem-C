#include <bits/stdc++.h>

using namespace std;

int main()
{
    double base, altura, perimetro, area, diagonal;

    cout << "Base do retangulo" << endl;
    cout << "\n";
    cout << "Digite a base do triangulo: ";
    cin >> base;
    cout << "Digite a Altura do triangulo: ";
    cin >> altura;

    perimetro = 2 * base + 2 * altura;
    area = base * altura;
    diagonal = sqrt(pow(base, 2.0) + pow(altura, 2.0));

    cout << "\n";
    cout << "Area = " << area << endl;
    cout << "Perimetro = " << perimetro << endl;
    cout << fixed << setprecision(2) << "Diagonal = " << diagonal << endl;

    return 0;
}
