using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Modificadores_de_Acesso
{
    class Animal
    {
        private int idade = 10;
        public double peso = 50.4;

        public int ObterIdade()
        {
            return this.idade;
        }

        public double ObterPeso
        {
            get { return this.peso; }
        }
    }
}
