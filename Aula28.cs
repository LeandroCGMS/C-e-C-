using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace aula28
{
    class aula28
    {
        static void Main(string[] args)
        {
            int parametro1;
            string parametro2;

            Console.WriteLine("Agora digite o parâmetro número 2: (texto) ");
            parametro2 = Console.ReadLine();
            Console.WriteLine("Digite o parâmetro número 1: (número) ");
            parametro1 = int.Parse(Console.ReadLine());
            

            paramOpcional(par2: parametro2, par1: parametro1);

            Console.ReadLine();
        }

        static void paramOpcional(int par1, string par2 = "Inserido pelo método")
        {
            string resultado = "Parâmetro obrigatório: " + par1.ToString() + " Parâmetro opcional: " + par2;
            Console.WriteLine(resultado);
        }
    }
}
