#include <iostream>
#include <locale.h>
#include <stdlib.h>

using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese");

    string veiculo="Carro";
    string *pv = & veiculo;

    cout << pv << "\n" << &veiculo;

    *pv="Moto";

    cout << "\n" << veiculo << "\n" << *pv;

    return 0;
}
