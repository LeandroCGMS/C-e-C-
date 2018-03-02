using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace JogoForca
{
    class Program
    {
        static void Main(string[] args)
        {
            char[] letra = new char[1];
            char[] palavra = new char[14];

            int corpoNaForca = 0;
            palavra[0] = 'a';
            palavra[1] = 'd';
            palavra[2] = 'm';
            palavra[3] = 'o';
            palavra[4] = 'e';
            palavra[5] = 's';
            palavra[6] = 't';
            palavra[7] = 'a';
            palavra[8] = 'r';

            int acertos = 0;
            int contPassada = 0;

            while (corpoNaForca < 6 || acertos <= 9)
            {
                contPassada++;
                Console.WriteLine("Digite uma letra da palavra.\n\t\t\t\t");
                letra[0] = char.Parse(Console.ReadLine());
                int incorrencia = 0;
                char[] trocaLetras = new char[15];

                /*for(int i = 0; i < trocaLetras.Length; i++)
                {
                    trocaLetras[i] = '_';
                }*/


                for (int i = 1; i < trocaLetras.Length; i++)
                {
                    Boolean letraValida = false;
                    if (letra[0].Equals(trocaLetras[i]))
                        
                    {
                        
                        while (!letraValida)
                        {
                            Console.WriteLine("Letra já digitada. Digite outra.\n\t\t\t\t");
                            letra[0] = char.Parse(Console.ReadLine());
                            if (trocaLetras[i] != letra[0])
                            {
                                letraValida = true;
                            }
                        }
                    }
                }
                    

            
                
                

                for (int i = 0; i < 9; i++)
                {
                    if (palavra[i] != letra[0])
                    {
                        incorrencia++;
                        Console.Write(" _ ");
                        //cout << "Letra não ocorre nesta palavra.";
                    }
                    else
                    {
                        acertos++;
                       
                        Console.Write( " " + palavra[i] + " ");
                        //cout << "\nLetra faz parte da palavra, parabéns.";
                    }

                    if (acertos == 11)
                    {
                        Console.WriteLine("\n" + acertos + " acertos.");
                        Console.WriteLine("\nParabéns! Você acertou todas as letras a tempo.");
                        Console.ReadLine();
                        Environment.Exit(0);
                    }

                    if (incorrencia == 9)
                    {
                        corpoNaForca++;
                    }
                }

                if (acertos == 1)
                {
                    Console.WriteLine("\n"+ acertos + " acerto.");
                }
                else if (acertos > 1)
                {
                    Console.WriteLine("\n" + acertos + " acertos.");
                }
                Console.WriteLine();


                trocaLetras[contPassada] = letra[0];
                Console.WriteLine(trocaLetras[contPassada]);

                switch (corpoNaForca)
                {
                    case 1:
                        Console.WriteLine("\n1º membro: cabeça já está na forca.\n");
                        //system("pause");
                        break;
                    case 2:
                        Console.WriteLine("\n2º membro: braço esquerdo já está na forca.\n");
                        //system("pause");
                        break;
                    case 3:
                        Console.WriteLine("\n3º membro: braço direito já está na forca.\n");
                        //system("pause");
                        break;
                    case 4:
                        Console.WriteLine("\n4º membro: perna esquerda já está na forca.\n");
                        //system("pause");
                        break;
                    case 5:
                        Console.WriteLine("\n5º membro: perna direita já está na forca.\n");
                        //system("pause");
                        break;
                    case 6:
                        Console.WriteLine("\nYOU LOSE IN HELL!!! - Você está morto.\n");
                        Console.ReadLine();
                        Environment.Exit(0);
                }

            }
        }
    }
}
