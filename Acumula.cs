using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Campos_Compartilhados_em_Classes
{
    class Acumula
    {
        public static int soma;
        public Acumula()
        {
            soma = 0;
        }

        public void incrementa()
        {
            soma++;
        }

        public void incrementa(int valor)
        {
            soma += valor;
        }
    }
}
