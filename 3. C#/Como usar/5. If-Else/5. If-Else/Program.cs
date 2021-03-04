using System;

namespace _5._If_Else {
    class Program {
        static void Main(string[] args) {
            Console.WriteLine("Estrutura If - Else");
            Console.WriteLine(" ");
            

            int hora;
            Console.Write("Digite uma hora do dia: ");
            hora = int.Parse(Console.ReadLine());
            Console.WriteLine(" ");

            if (hora >=0 && hora < 12) {
                Console.WriteLine("Bom dia!");
            }
            else if (hora >= 12 && hora < 18) {
                Console.WriteLine("Boa tarde!");
            }
            else if (hora >= 18 && hora < 24) {
                Console.WriteLine("Boa noite!");
            }
            else {
                Console.WriteLine("HORA INVALIDA");
            }

        }
    }
}
