#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <windows.h>

using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese");
    char letra;
    char palavra[14];

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

    while(corpoNaForca < 6 || acertos <= 9) {
        cout << "Digite uma letra da palavra.\n\t\t\t\t";
        cin >> letra;
        int incorrencia = 0;
        for(int i = 0; i < 9; i++){
            if(palavra[i] != letra){
                incorrencia++;
                cout << " _ ";
                //cout << "Letra não ocorre nesta palavra.";
            } else {
                acertos++;
                cout << " "  << palavra[i] << " ";
                //cout << "\nLetra faz parte da palavra, parabéns.";
            }

            if(acertos == 11){
                cout << "\nParabéns! Você acertou todas as letras a tempo.";
                return 0;
            }

            if(incorrencia == 9){
                corpoNaForca++;
            }
        }

        if(acertos == 1){
                    cout << "\n" << acertos << " acerto.";
        } else if(acertos > 1){
            cout << "\n\n" << acertos << " acertos.";
        }
        cout << "\n";

        switch(corpoNaForca){
            case 1:
                cout << "\n1º membro: cabeça já está na forca.\n";
                //system("pause");
                break;
            case 2:
                cout << "\n2º membro: braço esquerdo já está na forca.\n";
                //system("pause");
                break;
            case 3:
                cout << "\n3º membro: braço direito já está na forca.\n";
                //system("pause");
                break;
            case 4:
                cout << "\n4º membro: perna esquerda já está na forca.\n";
                //system("pause");
                break;
            case 5:
                cout << "\n5º membro: perna direita já está na forca.\n";
                //system("pause");
                break;
            case 6:
                cout << "\nYOU LOSE IN HELL!!! - Você está morto.\n";
                return 0;
                break;
        }

        }




    return 0;
}
