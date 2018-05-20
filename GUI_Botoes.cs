using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace GUI_Botao
{
    public partial class telaInicial : Form
    {
        public telaInicial()
        {
            InitializeComponent();
        }

        private void btnCliqueMe_Click(object sender, EventArgs e)
        {
            if(btnBotao2.Enabled == true)
            {
                MessageBox.Show("Botão estava ativo. Desativando agora.");
                btnBotao2.Enabled = false;
            } else
            {
                MessageBox.Show("Habilitando o botão 2.");
                btnBotao2.Enabled = true;
                btnBotao2.Text = "Botão foi ativado.";
            }
            
        }

        private void btnBotao2_Click(object sender, EventArgs e)
        {
            MessageBox.Show("O botão foi ativado.");
        }
    }
}
