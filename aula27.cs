using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace aula27
{
    class aula27
    {
        static void Main(string[] args)
        {
            int parametro1;
            string parametro2;

            Console.WriteLine("Sem passar o parâmetro opcional:");
            Console.WriteLine("Digite o parâmetro obrigatório (número): ");
            parametro1 = int.Parse(Console.ReadLine());
            paramOpcional(parametro1);

            Console.WriteLine();

            Console.WriteLine("Passando o parâmetro opcional:");
            Console.WriteLine("Digite o parâmetro obrigatório: (número) ");
            parametro1 = int.Parse(Console.ReadLine());
            Console.WriteLine("Agora digite o parâmetro opcional: (texto) ");
            parametro2 = Console.ReadLine();

            paramOpcional(parametro1, parametro2);

            Console.ReadLine();
        }

        static void paramOpcional(int par1, string par2 = "Inserido pelo método")
        {
            string resultado = "Parâmetro obrigatório: " + par1.ToString() + " Parâmetro opcional: " + par2;
            Console.WriteLine(resultado);
        }
    }
}
