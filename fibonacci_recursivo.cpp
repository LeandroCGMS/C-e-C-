#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <windows.h>

using namespace std;
int Termo1 = 0;
int Termo2 = 1;
int cont = 3;
void fib(int termo);
int main(){
    int termo;
    setlocale(LC_ALL,"Portuguese");
    cout << "\t\t\Gerador de Sequência Fibonacci\n\n\t\tDigite o termo final da sequência a ser visualizada.\n\t\t\t\t\t";
    cin >> termo;
    fib(termo);
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
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
    //return fib(termo-1) + fib(termo-2);
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
