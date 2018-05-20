#include <iostream>
#include <locale.h>
#include <vector>

using namespace std;

int main() {
	setlocale(LC_ALL,"Portuguese");
	/*
    int m = 0;
    for(int i = 0; i < sizeof(n)/4; i++){
        if(m<n[i){
        m=n[i];
    }
    */

    int x1, x2, x3, x4;
    x1 = 10;
    x2 = 5;
    x3 = 2;
    x4 = 12;

    auto soma = [=]()->int{
        return x1+x2+x3+x4;
    };

    auto maior = [=](vector<int>n)->int{

        auto m=0;
        for( int x: n) {
            m=(m>x)?m:x;
        }
        return m+x1+x2+x3+x4;
    };
    cout << "Função Maior" << endl;
    cout << maior({9,8,2,45,20,5,34,12,7,100}) << endl;
    cout << "\n\nFunção Soma Captura de Variáveis" << endl;
    cout << soma() << endl;
	return 0;
}
