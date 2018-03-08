#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <windows.h>

using namespace std;
int Termo1 = 0;
int Termo2 = 1;
int cont = 3;
void fib(int termo);
int fibRPadrao(int termo);
int main(){
    int termo;
    setlocale(LC_ALL,"Portuguese");
    bool menuValido = false;
    int op = 0;
    while(!menuValido){
            system("cls");
        cout << "Quer usar a fun��o recursiva da sequ�ncia de Fibonacci conhecida ou a desenvolvida por mim? [1-Conhecida, 2-Minha ou 3-Sair]\n\n\t\t\t";
        cin >> op;
        if(op > 0 && op < 4){
            menuValido = true;
        } else {
            cout << "Op��o inv�lida. Tente novamente.";
        }
    }
    if(op == 2){
        cout << "\t\t\Gerador de Sequ�ncia Fibonacci por Leandro Santos de Carvalho\n\n\t\tDigite o termo final da sequ�ncia a ser visualizada.\n\t\t\t\t\t";
        cin >> termo;
        fib(termo);
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
        system("pause");
        main();
    } else if(op == 1){
        cout << "\t\t\tAlgoritmo conhecido da Sequ�ncia de Fibonacci";
        cout << "\n\n\t\t\tDigite o termo que quer visualizar da Sequ�ncia de Fibonacci. \n\n\t\t\t";
        cin >> termo;
        cout << "\t\t\t" << fibRPadrao(termo) << "\t\t\t\n\n\n\n";
        system("pause");
        main();
    } else if(op == 3){
        return 0;
    }

    return 0;
}

void fib(int termo){
    int trocaTermo2 = 0;
    int trocaTermo1 = 0;
    int nTermo = termo; // SEMPRE 3
	if(termo<=0){
		cout << "N�o pode haver ordem zero ou negativa.";
		 //COLOCAR FUN��O DE RETORNO A TELA PRINCIPAL
	}
    if(termo < 2){
        cout << termo<<"� elemento de Fibonacci: "<< "0. ou ...";
    }

    if (termo == 2){
    	cout << "Sequ�ncia de Fibonacci at� o "<<termo<<"� elemento: "<<"0, 1. ou ...";
	}

    if(termo > 2 && cont == 3){
        cout << "Sequ�ncia de Fibonacci at� o " << termo << "� elemento: " << Termo1 << ", " << Termo2 << ", ";
        Termo2 += Termo1;                                                       //0              //1
         cout << Termo2 << ", ";
         Termo1 =  Termo2;
         if(termo == 3 && cont == 3){
            cout << "\b\b. ou ...";
         }
    }

    if(termo > 2 && cont > 3){
        Termo2 += Termo1;
        cout << Termo2 << ", ";
        trocaTermo1 = Termo1;
        Termo1 = Termo2;
        Termo2 = trocaTermo1;

        if(cont == nTermo){
            cout << "\b\b. ou ...";
        }

    }

    cont++;
    if(cont <= nTermo){
        fib(nTermo);
    }



}

int fibRPadrao(int termo){
    if(termo < 2){
        return termo;
    }
    return fibRPadrao(termo - 1) + fibRPadrao(termo - 2);
}
