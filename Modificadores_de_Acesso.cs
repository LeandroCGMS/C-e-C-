using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Modificadores_de_Acesso
{
    class Modificadores_de_Acesso
    {
        static void Main(string[] args)
        {
            int idade;
            double peso;

            Animal bicho = new Animal();
            idade = bicho.ObterIdade();
            peso = bicho.ObterPeso;

            Console.WriteLine("A idade é : {0}", idade);
            Console.WriteLine("O peso é: {0:F}", peso);
            Console.ReadLine();
        }
    }
}
