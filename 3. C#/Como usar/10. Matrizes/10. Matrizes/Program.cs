using System;

namespace _10._Matrizes {
    class Program {
        static void Main(string[] args) {
            Console.WriteLine("Matrizes");
            Console.WriteLine();

            int M, N;

            Console.Write("Numero de Linhas: ");
            M = int.Parse(Console.ReadLine());
            Console.Write("Numero de Colunas: ");
            N = int.Parse(Console.ReadLine());

            int[,] matriz = new int[M, N];

            Console.WriteLine();
            Console.WriteLine("Matriz: ");
            for (int i = 0; i < M; i++) {
                for ( int j = 0; j < N; j++) {
                    Console.Write("Elemento [" + i + "," + j + "] = ");
                    matriz[i, j] = int.Parse(Console.ReadLine());
                }
            }

            Console.WriteLine();
            Console.WriteLine("Numeros digitados: ");

            for (int i = 0; i < M; i++) {
                for (int j = 0; j < N; j++) {
                    Console.Write(matriz[i, j] + " ");
                }
                Console.WriteLine();
            }
        }
    }
}
