using System;

namespace _4._Crescente {
    class Program {
        static void Main(string[] args) {

            int A, B;

            Console.WriteLine("Digite dois numeros: ");
            A = int.Parse(Console.ReadLine());
            B = int.Parse(Console.ReadLine());

            while (A != B) {
                if (A < B) {
                    Console.Write("Crescente!");
                }
                else {
                    Console.Write("Decrescente!");
                }
                Console.WriteLine();
                Console.WriteLine();
                Console.WriteLine("Digite dois numeros: ");
                A = int.Parse(Console.ReadLine());
                B = int.Parse(Console.ReadLine());
            }
            Console.WriteLine();
            Console.WriteLine("Numeros iguais!!");

        }
    }
}
