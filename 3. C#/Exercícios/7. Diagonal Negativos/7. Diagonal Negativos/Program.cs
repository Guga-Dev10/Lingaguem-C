using System;

namespace _7._Diagonal_Negativos {
    class Program {
        static void Main(string[] args) {

            int N, soma;

            Console.Write("Qual a ordem da Matriz? ");
            N = int.Parse(Console.ReadLine());

            int[,] matriz = new int[N, N];

            for (int i = 0; i < N; i++) {
                for (int j = 0; j < N; j++) {
                    Console.Write("Elemento [" + i + "," + j + "] = ");
                    matriz[i, j] = int.Parse(Console.ReadLine());
                }
            }

            Console.WriteLine();
            soma = 0;
            Console.WriteLine("Matriz: ");
            for (int i = 0; i < N; i++) {
                for (int j = 0; j < N; j++) {
                    Console.Write(matriz[i, j] + " ");
                    if (matriz[i, j] < 0) {
                        soma = soma + 1;
                    }
                }
                Console.WriteLine();
            }
            Console.WriteLine();
            Console.Write("Diagonal Principal: ");
            for (int i = 0; i < N; i++) {
                Console.Write(matriz[i, i] + ", ");   
            }
            Console.WriteLine();
            Console.WriteLine();
            Console.WriteLine("Quantidade de numeros negativos: " + soma);
            Console.WriteLine();

        }
    }
}
 