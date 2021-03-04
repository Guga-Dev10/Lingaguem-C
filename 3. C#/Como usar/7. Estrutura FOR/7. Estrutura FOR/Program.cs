using System;

namespace _7._Estrutura_FOR {
    class Program {
        static void Main(string[] args) {
            Console.WriteLine("Estrutura FOR");
            Console.WriteLine(" ");

            int i, x, n, soma;

            Console.Write("Digite o numero de repeticoes: ");
            n = int.Parse(Console.ReadLine());

            soma = 0;
            for (i = 1; i <= n; i++) {
                Console.Write("Digite um numero: ");
                x = int.Parse(Console.ReadLine());
                soma = soma + x;
            }

            Console.WriteLine(" ");
            Console.WriteLine("SOMA = " + soma);

        }
    }
}
