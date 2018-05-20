using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Enumeracoes
{
    class Enumeracoes
    {
        enum PontoCardeal: byte { Norte = 10, Sul, Leste, Este = Leste, Oeste};
        static void Main(string[] args)
        {
            PontoCardeal direcao = PontoCardeal.Este;
            Console.WriteLine("Ponto cardeal: " + direcao);
            Console.WriteLine("Ponto cardeal: " + (int)direcao);
            
            ListaPontos();
            Console.ReadLine();
        }

        static void ListaPontos()
        {
            PontoCardeal ponto = PontoCardeal.Norte;
            for(int i = 0; i < 3; i++)
            {
                Console.WriteLine(ponto);
                ponto++;
            }
            Console.WriteLine(ponto);
        }
    }
}
