using System;
using System.Globalization;

namespace _6._Soma_Vetor {
    class Program {
        static void Main(string[] args) {

            CultureInfo CI = CultureInfo.InvariantCulture;
            int n;
            double soma, media;

            Console.Write("Vetor de quantas posicoes? ");
            n = int.Parse(Console.ReadLine());

            double[] vetor = new double[n];

            soma = 0;
            Console.WriteLine();
            Console.WriteLine("Insira os numeros no vetor: ");
            for (int i = 0; i < n; i++) {
                Console.Write((i + 1) + "a posicao: ");
                vetor[i] = double.Parse(Console.ReadLine(), CI);
                soma = soma + vetor[i];
            }

            Console.WriteLine();
            Console.WriteLine("Numeros do vetor: ");

            for (int i = 0; i < n; i++) {
                Console.Write(vetor[i] + " ");
            }

            Console.WriteLine();
            Console.WriteLine();
            Console.WriteLine("Soma dos numeros do vetor = " + soma.ToString("F2", CI));

            media = soma / n;
            Console.WriteLine("Media dos numeros do vetor = " + media.ToString("F2", CI));

        }
    }
}
