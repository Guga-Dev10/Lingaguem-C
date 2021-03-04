using System;

namespace _5._Soma_de_Impares {
    class Program {
        static void Main(string[] args) {

            int A, B, Troca, Soma;

            Console.WriteLine("Digite dois numeros: ");
            A = int.Parse(Console.ReadLine());
            B = int.Parse(Console.ReadLine());

            if (A > B) {
                Troca = A;
                A = B;
                B = Troca;
            }
            Console.WriteLine();
            Soma = 0;
            for (int i = A+1; i < B; i++) {
                if (i % 2 != 0) {
                    Soma = Soma + i;
                }
            }

            Console.WriteLine("Valor da soma dos impares = " + Soma);
        }
    }
}
