using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Tratamento_de_Exceções
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void botaoMultiplica_Click(object sender, EventArgs e)
        {
            try
            {
                int fator1 = Int32.Parse(txtFator1.Text);
                int fator2 = Int32.Parse(txtFator2.Text);
                int produto = fator1 * fator2;
                if (fator1 * fator2 > Int32.MaxValue || fator1 * fator2 < 0)
                {
                    throw new Exception();
                } else
                {
                    txtProduto.Text = produto.ToString();
                }
                
            }
            catch(Exception e1)
            {
                MessageBox.Show("Erro, ou o produto extrapola o limite do tipo inteiro ou, pelo" +
                    " menos, um dos fatores não é um inteiro. ");
            }
            finally
            {
                label1.Enabled = true;
                label1.Text = "Bloco finally sempre será executado.";
            }
        }
    }
}
