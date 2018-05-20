#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <windows.h>

using namespace std;
void texto();
void soma(int n1, int n2);
int soma2(int n1, int n2);
void tr(string tra[4]);
int main(){
    string transp[4] = {"carro","moto","barco","avião"};
    setlocale(LC_ALL,"Portuguese");
    int res;

    tr(transp);

    res = soma2(175,25);
    cout << "Valor de res: "<<soma2(175,25)<<"\n";
    soma(15,5);

    return 0;
}

void texto(){
    cout << "Canal Fessor Bruno\n";
}

void soma(int n1, int n2){
    cout << "Soma dos valores: "<< n1+n2 << "\n";
}

int soma2(int n1, int n2){
    return n1 + n2;
}

void tr(string tra[4]){
    for(int i=0;i<4;i++){
        cout << tra[i]<<"\n";
    }
}
