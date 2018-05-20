using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Campos_Compartilhados_em_Classes
{
    class Campos_Compartilhados_em_Classes
    {
        static void Main(string[] args)
        {
            Acumula objeto1 = new Acumula();
            Acumula objeto2 = new Acumula();

            objeto1.incrementa();
            Console.WriteLine("O valor é: {0}", Acumula.soma.ToString());

            objeto2.incrementa(8);
            Console.WriteLine("O valor é: {0}", Acumula.soma.ToString());
            Console.ReadLine();
        }
    }
}
