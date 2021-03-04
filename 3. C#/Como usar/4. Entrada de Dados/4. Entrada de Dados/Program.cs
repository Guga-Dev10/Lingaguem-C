using System;
using System.Globalization;

namespace _4._Entrada_de_Dados {
    class Program {
        static void Main(string[] args) {
            Console.WriteLine("Entrada de dados no C# ");
            Console.WriteLine(" ");

            CultureInfo CI = CultureInfo.InvariantCulture;

            int idade;
            double salario;
            string nome;
            char sexo;

            Console.Write("Digite o nome da pessoa: ");
            nome = Console.ReadLine();
            Console.Write("Digire a idade da pessoa: ");
            idade = int.Parse(Console.ReadLine());
            Console.Write("Digite o salario da pessoa: ");
            salario = double.Parse(Console.ReadLine(), CI); /* O comando "CI" foi usado para que 
                                                             * a linguagem identifique que o usuário 
                                                             * está inserindo números decimais. 
                                                             */
            Console.Write("Digite o sexo da pessoa (M/F): ");
            sexo = char.Parse(Console.ReadLine());

            Console.WriteLine(" ");
            Console.WriteLine("O " + nome + ", do sexo " + sexo + ", tem " + idade + " anos. Tem um salario de" +
                "R$ " + salario.ToString("F2", CI));
        }
    }
}
