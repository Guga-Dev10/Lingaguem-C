using System;
using System.Globalization;

namespace _2._Idades {
    class Program {
        static void Main(string[] args) {
            
            CultureInfo CI = CultureInfo.InvariantCulture;

            string nome1, nome2;
            int idade1, idade2;
            double media;

            Console.WriteLine("Dados da primeira pessoa: ");
            Console.Write("Nome: ");
            nome1 = Console.ReadLine();
            Console.Write("Idade: ");
            idade1 = int.Parse(Console.ReadLine());
            Console.WriteLine();

            Console.WriteLine("Dados da segunda pessoa: ");
            Console.Write("Nome: ");
            nome2 = Console.ReadLine();
            Console.Write("Idade: ");
            idade2 = int.Parse(Console.ReadLine());

            media = (double)(idade1 + idade2) / 2;

            Console.WriteLine();
            Console.WriteLine("Dados da primeira pessoa: " + nome1 + " tem " + idade1 + " anos.");
            Console.WriteLine("Dados da segunda pessoa: " + nome2 + " tem " + idade2 + " anos.");
            Console.WriteLine();
            Console.WriteLine("Media das idades: " + media.ToString("F2", CI));

        }
    }
}
