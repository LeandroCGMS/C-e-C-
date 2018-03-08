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
        cout << "Quer usar a função recursiva da sequência de Fibonacci conhecida ou a desenvolvida por mim? [1-Conhecida, 2-Minha ou 3-Sair]\n\n\t\t\t";
        cin >> op;
        if(op > 0 && op < 4){
            menuValido = true;
        } else {
            cout << "Opção inválida. Tente novamente.\n\n\n\n\t\t\t\t";
            system("pause");
        }
    }
    if(op == 2){
        cout << "\t\t\Gerador de Sequência Fibonacci por Leandro Santos de Carvalho\n\n\t\tDigite o termo final da sequência a ser visualizada.\n\t\t\t\t\t";
        cin >> termo;
        fib(termo);
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
        system("pause");
        main();
    } else if(op == 1){
        cout << "\t\t\tAlgoritmo conhecido da Sequência de Fibonacci";
        cout << "\n\n\t\t\tDigite o termo que quer visualizar da Sequência de Fibonacci. \n\n\t\t\t";
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
		cout << "Não pode haver ordem zero ou negativa.";
		 //COLOCAR FUNÇÃO DE RETORNO A TELA PRINCIPAL
	}
    if(termo < 2){
        cout << termo<<"º elemento de Fibonacci: "<< "0. ou ...";
    }

    if (termo == 2){
    	cout << "Sequência de Fibonacci até o "<<termo<<"º elemento: "<<"0, 1. ou ...";
	}

    if(termo > 2 && cont == 3){
        cout << "Sequência de Fibonacci até o " << termo << "º elemento: " << Termo1 << ", " << Termo2 << ", ";
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
