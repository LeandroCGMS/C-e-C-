using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Classes___Parte1
{
    class Caixa
    {
        private double lado;

        public Caixa()
        {
            lado = 10;
        }

        public Caixa(double qualquerlado)
        {
            lado = qualquerlado;
        }

        public double Volume()
        {
            return lado * lado * lado;
        }

        public void setLado(double tamLado)
        {
            this.lado = tamLado;
            
        }

        public static int CaixaLadoDois()
        {
            int lado = 2;
            int vol = lado * lado * lado;
            return vol;
        }
    }
}
