#include <iostream>
#include <locale.h>
#include <stdlib.h>

using namespace std;

struct Carro{
    string nome;
    string cor;
    int pot;
    int velMax;
};

int main(){
    setlocale(LC_ALL,"Portuguese");

    Carro car1, car2;
    car1.nome = "Tornado";
    car1.cor = "Vermelho";
    car1.pot=450;
    car1.velMax=350;

    car2.nome = "Pálio";
    car2.cor = "Preto";
    car2.pot=250;
    car2.velMax=260;

    cout << "Nome.............: " << car1.nome << "\n";
    cout << "Cor..............: " << car1.cor << "\n";
    cout << "Potência.........: " << car1.pot << "\n";
    cout << "Velocidade Máxima: " << car1.velMax << "\n";
    cout << "-----------------------------\n";
    cout << "Nome.............: " << car2.nome << "\n";
    cout << "Cor..............: " << car2.cor << "\n";
    cout << "Potência.........: " << car2.pot << "\n";
    cout << "Velocidade Máxima: " << car2.velMax << "\n";

    return 0;
}
