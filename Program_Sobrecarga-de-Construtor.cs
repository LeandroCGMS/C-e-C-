using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Classes___Parte1
{
    class Program
    {
        static void Main(string[] args)
        {
            Caixa cx = new Caixa(15);
            Console.WriteLine(cx.Volume());
            Console.ReadLine();
        }
    }
}
