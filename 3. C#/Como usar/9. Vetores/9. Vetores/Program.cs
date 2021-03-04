using System;
using System.Globalization;

namespace _9._Vetores {
    class Program {
        static void Main(string[] args) {
            Console.WriteLine("Vetores");
            Console.WriteLine(" ");

            CultureInfo CI = CultureInfo.InvariantCulture;
            int n;

            Console.Write("Quantos numeros serao inseridos: ");
            n = int.Parse(Console.ReadLine());

            double[] vet = new double[n];

            for (int i = 0; i < n; i++) {
                Console.Write("Digite o " + (i+1) + "o numero: ");
                vet[i] = double.Parse(Console.ReadLine(), CI);
            }

            Console.WriteLine();
            Console.WriteLine("Numeros digitados: ");

            for (int i = 0; i < n; i++) {
                Console.WriteLine(i + 1 + "o numero: " + vet[i].ToString("F1", CI));
            }
        }
    }
}
