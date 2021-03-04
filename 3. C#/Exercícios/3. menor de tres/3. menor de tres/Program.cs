using System;

namespace _3._menor_de_tres {
    class Program {
        static void Main(string[] args) {

            int A, B, C;

            Console.WriteLine("Digite tres numeros: ");
            A = int.Parse(Console.ReadLine());
            B = int.Parse(Console.ReadLine());
            C = int.Parse(Console.ReadLine());

            Console.WriteLine();
            Console.Write("O menor numero: ");
            if (A < B && A < C) {
                Console.Write(A);
            }
            else if (B < A && B < C) {
                Console.Write(B);
            }
            else if (C < A && C < B) {
                Console.Write(C);
            }
            Console.WriteLine();
        }
    }
}
