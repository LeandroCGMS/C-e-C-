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
            if(txtSaida.Enabled == true && txtEntrada.Enabled == true && button1.Enabled == true)
            {
                button2.Text = "Exibir todos os elementos.";
                
                txtSaida.Text = "";
                txtEntrada.Text = "";
                txtEntrada.Enabled = false;
                txtSaida.Enabled = false;
                button1.Enabled = false;
                
            } else
            {
                button2.Text = "Apagar todos os elementos.";
                txtSaida.Text = "Curso C Sharp";
                txtEntrada.Text = "";
                button1.Enabled = true;
                txtEntrada.Enabled = true;
                txtSaida.Enabled = true;
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

        private void textBox1_TextChanged(object sender, EventArgs e)
        {
            

        }

        private void txtEntrada_TextChanged(object sender, EventArgs e)
        {
            
        }

        private void txtSaida_TextChanged(object sender, EventArgs e)
        {
            
        }

        private void txtEntrada_Click(object sender, EventArgs e)
        {
            txtEntrada.Text = "";
        }

        private void btnTeste_Click(object sender, EventArgs e)
        {
            txtEntrada.Cut();
        }

        private void txtEntrada_MouseHover(object sender, EventArgs e)
        {
            txtEntrada.Text = "Digite seu nome aqui.";
        }

        private void button2_MouseDown(object sender, MouseEventArgs e)
        {
            button2.Text = "Exibir todos os elementos.";
        }

        private void btnColar_Click(object sender, EventArgs e)
        {
            txtSaida.Paste();
        }

        private void btnOcultar_Click(object sender, EventArgs e)
        {
            txtSaida.Hide();
        }

        private void button3_Click(object sender, EventArgs e)
        {
            txtSaida.Show();
        }
    }
}
