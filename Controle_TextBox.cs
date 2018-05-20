using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Controle_TextBox
{
    public partial class Controle_TextBox : Form
    {
        private String meuNome = "Leandro Santos de Carvalho";
        public Controle_TextBox()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            txtEntrada.Text = meuNome;
        }

        private void button2_Click(object sender, EventArgs e)
        {
            if(txt2.Enabled == true && txtEntrada.Enabled == true && button1.Enabled == true)
            {
                txt2.Text = "";
                txtEntrada.Text = "";
                txtEntrada.Enabled = false;
                txt2.Enabled = false;
                button1.Enabled = false;
            } else
            {
                txt2.Text = "Curso C Sharp";
                txtEntrada.Text = "";
                button1.Enabled = true;
                txtEntrada.Enabled = true;
                txt2.Enabled = true;
            }
            
        }

        private void button2_MouseHover(object sender, EventArgs e)
        {
            button2.BackColor = Color.Bisque;
        }

        private void button2_MouseLeave(object sender, EventArgs e)
        {
            button2.BackColor = Color.AliceBlue;
        }
    }
}
