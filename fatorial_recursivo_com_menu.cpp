#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <windows.h>

using namespace std;
int cont = 1;
int fatorial(int termo);
void tela();
int main(){
    tela();
    return 0;
}

void tela(){
    int num = 0;
    setlocale(LC_ALL,"Portuguese");
    system("cls");
    cout << "\t\t\tCalculadora de Fatorial\n\t\t\t";
    cin >> num;
    cont = 1;
    cout << fatorial(num);
    bool menuValido = false;
    int op = 0;
    while(!menuValido){
       cout << "\n\n\t\t\t1) Fatorar outro número;\n\t\t\t2) Sair.\n\t\t\t";
       cin >> op;
       if(op > 0 && op < 3){
        menuValido = true;
       } else {
            cout << "\n\n\t\t\tOpção inválida. Tente novamente.";
       }
    }

    if(op == 1){
        tela();
    } else if(op ==2){
        system("exit");
    }

}

int fatorial(int termo){
    if(cont == 1 && termo == 0){
        cout << "\t\t\t0! = ";
        return 1;
    }

    if(termo == 1 && cont == 1){
        cout << "\t\t\t1! = ";
        return 1;
    }

    if(cont == 1){
        cout << "\t\t\t" << termo << "! = ";
    }

    if(termo > 1){
        cout << termo << " x ";
    }

    if(termo == 0){
            cout << "1 = ";
        return 1;
    }

    cont++;
    return termo * fatorial(termo - 1);

}
