using System;
using System.Globalization;

namespace _1._Retangulo {
    class Program {
        static void Main(string[] args) {

            CultureInfo CI = CultureInfo.InvariantCulture;

            double largura, altura, area, perimetro, diagonal;

            Console.Write("Digite a largura do retangulo: ");
            largura = double.Parse(Console.ReadLine(), CI);
            Console.Write("Digite a altura do retangulo: ");
            altura = double.Parse(Console.ReadLine(), CI);

            area = largura * altura;
            perimetro = 2 * (largura + altura);
            diagonal = Math.Sqrt(Math.Pow(largura, 2.0) + Math.Pow(altura, 2.0));

            Console.WriteLine("Area = " + area.ToString("F2", CI));
            Console.WriteLine("Perimetro = " + perimetro.ToString("F2", CI));
            Console.WriteLine("Diagonal = " + diagonal.ToString("F2", CI));
        }
    }
}
