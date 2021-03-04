using System;

namespace _6._Estrutura_While {
    class Program {
        static void Main(string[] args) {
            Console.WriteLine("Estrutura While");
            Console.WriteLine(" ");

            int x, soma;

            soma = 0;

            Console.Write("Digite um numero: ");
            x = int.Parse(Console.ReadLine());
            Console.WriteLine(" ");

            while (x != 0) {
                soma = soma + x;
                Console.Write("Digite mais um numero: ");
                x = int.Parse(Console.ReadLine());
                Console.WriteLine(" ");
            }
            Console.WriteLine("A soma eh = " + soma);
        }
    }
}
