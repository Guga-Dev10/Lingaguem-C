using System;
using System.Globalization; 

namespace _3._Saida_de_Dados {
    class Program {
        static void Main(string[] args) {

            Console.Write("Bom dia!");
            Console.Write("Boa tarde!");
            
            Console.WriteLine(" ");
            Console.WriteLine(" ");
            Console.WriteLine("Bom dia!");
            Console.WriteLine("Boa tarde!");

            int idade;
            double altura, salario;
            char sexo;
            string nome;
            CultureInfo CI = CultureInfo.InvariantCulture;

            idade = 24;
            altura = 1.85;
            salario = 10000;
            sexo = 'M';
            nome = "Gustavo";

            Console.WriteLine(" ");
            Console.WriteLine(" O " + nome + ", sexo " + sexo + ", tem ema altura de " + altura + 
                                " e sua idade " + idade + " anos. Ele possui um salario de R$ " + salario);

            Console.WriteLine(" ");

            altura = 1.7458;
            Console.WriteLine("Altura = " + altura.ToString("F4", CultureInfo.InvariantCulture));
            Console.WriteLine("Altura = " + altura.ToString("F2", CultureInfo.InvariantCulture));

            Console.WriteLine(" ");

            salario = 10000.5456;
            Console.WriteLine("O salario = " + salario.ToString("F4", CI));
            Console.WriteLine("O salario = " + salario.ToString("F2", CI));
        }
    }
}
